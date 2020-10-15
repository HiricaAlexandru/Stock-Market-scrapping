//
//  dataExtractor.cpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 22/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//
//https://api.iextrading.com/1.0/stock/{symbol}/company

#include "dataExtractor.hpp"
#include <iostream>
#include <cstring>
#include <vector>
#include <thread>

void dataExtractor::setFinancialsValues(Stock *Stock, std::string httpGetResponse){
    
    Document jsonParser;
    
    jsonParser.Parse(httpGetResponse.c_str());
    
    if(jsonParser.IsObject() == 0)
        return;
    
    if(!jsonParser.HasMember("financials"))
        return;
    
    
    const Value& financialPoint = jsonParser["financials"];
  
    if(!financialPoint.HasMember("financials"))
        return;
    //jsonParser jos trebuie
    const Value& financialValues = financialPoint["financials"];
    
    
    
    // rapidjson uses SizeType instead of size_t.
    for (rapidjson::SizeType i = 0; i < financialValues.Size(); i++)
    {
        Financials finanta;
        
        const Value& CurentItinerator = financialValues[i];
      
        if(CurentItinerator.HasMember("reportDate") && CurentItinerator["reportDate"].IsString())
            finanta.setReportDate(CurentItinerator["reportDate"].GetString());
        
        if(CurentItinerator.HasMember("grossProfit") && CurentItinerator["grossProfit"].IsNumber())
            finanta.setGrossProfit(CurentItinerator["grossProfit"].Get<double>());

        if(CurentItinerator.HasMember("costOfRevenue") && CurentItinerator["costOfRevenue"].IsNumber())
            finanta.setCostOfRevenue(CurentItinerator["costOfRevenue"].Get<double>());
  

        if(CurentItinerator.HasMember("operatingRevenue") && CurentItinerator["operatingRevenue"].IsNumber())
            finanta.setOperatingRevenue(CurentItinerator["operatingRevenue"].Get<double>());


        if(CurentItinerator.HasMember("costOfRevenue") && CurentItinerator["costOfRevenue"].IsNumber())
            finanta.setCostOfRevenue(CurentItinerator["costOfRevenue"].Get<double>());

        if(CurentItinerator.HasMember("operatingIncome") && CurentItinerator["operatingIncome"].IsNumber()){
            finanta.setTotalRevenue(CurentItinerator["operatingIncome"].Get<double>());
         
        }

        if(CurentItinerator.HasMember("researchAndDevelopment") && CurentItinerator["researchAndDevelopment"].IsNumber())
            finanta.setResearchAndDevelopment(CurentItinerator["researchAndDevelopment"].Get<double>());


        if(CurentItinerator.HasMember("operatingExpense") && CurentItinerator["operatingExpense"].IsNumber())
            finanta.setOperatingExpense(CurentItinerator["operatingExpense"].Get<double>());


        if(CurentItinerator.HasMember("currentAssets") && CurentItinerator["currentAssets"].IsNumber())
            finanta.setCurrentAssets(CurentItinerator["currentAssets"].Get<double>());


        if(CurentItinerator.HasMember("totalLiabilities") && CurentItinerator["totalLiabilities"].IsNumber())
            finanta.setTotalLiabilities(CurentItinerator["totalLiabilities"].Get<double>());


        if(CurentItinerator.HasMember("currentCash") && CurentItinerator["currentCash"].IsNumber())
            finanta.setCurrentCash(CurentItinerator["currentCash"].Get<double>());


        if(CurentItinerator.HasMember("currentDebt") && CurentItinerator["currentDebt"].IsNumber())
            finanta.setCurrentDebt(CurentItinerator["currentDebt"].Get<double>());
  

        if(CurentItinerator.HasMember("totalCash") && CurentItinerator["totalCash"].IsNumber())
            finanta.setTotalCash(CurentItinerator["totalCash"].Get<double>());
  

        if(CurentItinerator.HasMember("shareholderEquity") && CurentItinerator["shareholderEquity"].IsNumber())
            finanta.setShareholderEquity(CurentItinerator["shareholderEquity"].Get<double>());
        

        if(CurentItinerator.HasMember("cashChange") && CurentItinerator["cashChange"].IsNumber())
            finanta.setCashChange(CurentItinerator["cashChange"].Get<double>());
        

        if(CurentItinerator.HasMember("cashFlow") && CurentItinerator["cashFlow"].IsNumber())
            finanta.setCashFlow(CurentItinerator["cashFlow"].Get<double>());
       

        if(CurentItinerator.HasMember("operatingGainsLosses") && CurentItinerator["operatingGainsLosses"].IsString())
            finanta.setOperatingGainsLosses(CurentItinerator["operatingGainsLosses"].GetString());
       

        Stock->getFinancial().push_back(finanta);
       
    }
}



void dataExtractor::completeCompanyValues(Stock *Stock, std::string httpGetResponse){
    
    Document jsonParser1;
    
    jsonParser1.Parse(httpGetResponse.c_str());
    
    std::string stringTemp;
   
    if(jsonParser1.IsObject() == 0)
        return;
    
    const Value& jsonParser = jsonParser1["company"];
    
    
    if(jsonParser.HasMember("symbol") && jsonParser["symbol"].IsString()){
        stringTemp = jsonParser["symbol"].GetString();
        Stock->getCompany().setSymbol(&stringTemp);
    }
    
   
    if(jsonParser.HasMember("companyName") && jsonParser["companyName"].IsString()){
        stringTemp = jsonParser["companyName"].GetString();
        Stock->getCompany().setcompanyName(&stringTemp);
    }
    
  
    if(jsonParser.HasMember("exchange") && jsonParser["exchange"].IsString()){
        stringTemp = jsonParser["exchange"].GetString();
        Stock->getCompany().setexchange(&stringTemp);
    }
    
   
    if(jsonParser.HasMember("industry") && jsonParser["industry"].IsString()){
        stringTemp = jsonParser["industry"].GetString();
        Stock->getCompany().setindustry(&stringTemp);
    }
    
    if(jsonParser.HasMember("website") && jsonParser["website"].IsString()){
        stringTemp = jsonParser["website"].GetString();
        Stock->getCompany().setwebsite(&stringTemp);
    }
    
    if(jsonParser.HasMember("description") && jsonParser["description"].IsString()){
        stringTemp = jsonParser["description"].GetString();
        Stock->getCompany().setdescription(&stringTemp);
    }
    
    
    if(jsonParser.HasMember("CEO") && jsonParser["CEO"].IsString()){
        stringTemp = jsonParser["CEO"].GetString();
        Stock->getCompany().setCEO(&stringTemp);
    }
   
    if(jsonParser.HasMember("sector") && jsonParser["sector"].IsString()){
        stringTemp = jsonParser["sector"].GetString();
        Stock->getCompany().setsector(&stringTemp);
    }
    
}

size_t WriteCallback(char *contents, size_t size, size_t nmemb, void *userp){
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

std::string dataExtractor::getHTTPSrequest(std::string website){
    
    
    CURL* easyhandle = curl_easy_init();
    std::string readBuffer;
    
    curl_easy_setopt(easyhandle, CURLOPT_URL, website.c_str());
    curl_easy_setopt(easyhandle, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(easyhandle, CURLOPT_WRITEDATA, &readBuffer);
    
    curl_easy_perform(easyhandle);
    curl_easy_cleanup(easyhandle);
    
    return readBuffer;
}

void dataExtractor::setCompanyValue(Stock *Stock, std::string symbol){
    //aici se umple string-ul cu date de pe internet
    std::string httpGetResponse; 
    std::string httpstock = "/1.0/stock/";
    std::string httpcompany = "/company";
    
    httpGetResponse = getHTTPSrequest(APIPATH + httpstock + symbol + httpcompany);
    
    completeCompanyValues(Stock, httpGetResponse);
  
}

void dataExtractor::setFinancialsValue(Stock *Stock, std::string symbol){
    
    std::string httpGetResponse;
    std::string httpstock = "/1.0/stock/";
    std::string httpFinancials = "/financials";
    
    httpGetResponse = getHTTPSrequest(APIPATH + httpstock + symbol + httpFinancials);
    
    setFinancialsValues(Stock, httpGetResponse);
}






void dataExtractor::fixezDateStock(Stock &Stock, std::string symbol){
    //https://api.iextrading.com/1.0/stock/aapl/batch?types=company,financials,news,chart&range=5y&last=10
    std::string httpGetResponse;
    httpGetResponse = getHTTPSrequest(APIPATH  + symbol + APIVALUE);

    completeCompanyValues(&Stock, httpGetResponse);
    setFinancialsValues(&Stock,httpGetResponse);
    
    //setFinancialsValue(&Stock, symbol);//
    //setCompanyValue(&Stock, symbol);//
   
   
    
}





int dataExtractor::getNumberOfCompanies(){
    std::string companies = getHTTPSrequest("https://api.iextrading.com/1.0/ref-data/symbols");

    jsonCompanies.Parse(companies.c_str());
    
    return jsonCompanies.Size();
    
}


std::string dataExtractor::getCompaniaDePePoz(int i){
    const Value& CurentItinerator = jsonCompanies[i];
    
    if(CurentItinerator["symbol"].IsString())
        return CurentItinerator["symbol"].GetString();
    
    return "-12";
}


void dataExtractor::setFinancialsValueFAST(Stock *Stock, std::string *symbol,std::string *httpResponse){
    
    Document jsonParser;
    
    jsonParser.Parse(httpResponse->c_str());
    
    if(jsonParser.IsObject() == 0)
        return;
    
    if(!jsonParser.HasMember(symbol->c_str()))
        return;
    
    
    const Value& financialPoint = jsonParser[symbol->c_str()];
    
    if(!financialPoint.HasMember("financials"))
        return;
    //jsonParser jos trebuie
    
   
    const Value& financialValues1 = financialPoint["financials"];
    
    if(financialValues1.HasMember("financials") == 0){
        
        return ;
    }
    
    const Value& financialValues = financialValues1["financials"];
    
    if(financialValues.IsArray() == 0){
        
        return;
    }
    
   
    
    // rapidjson uses SizeType instead of size_t.
    for (rapidjson::SizeType i = 0; i < financialValues.Size(); i++)
    {
        Financials finanta;
        
        const Value& CurentItinerator = financialValues[i];
        
        if(CurentItinerator.HasMember("reportDate") && CurentItinerator["reportDate"].IsString())
            finanta.setReportDate(CurentItinerator["reportDate"].GetString());
        
        if(CurentItinerator.HasMember("grossProfit") && CurentItinerator["grossProfit"].IsNumber())
            finanta.setGrossProfit(CurentItinerator["grossProfit"].Get<double>());
        
        if(CurentItinerator.HasMember("costOfRevenue") && CurentItinerator["costOfRevenue"].IsNumber())
            finanta.setCostOfRevenue(CurentItinerator["costOfRevenue"].Get<double>());
        
        
        if(CurentItinerator.HasMember("operatingRevenue") && CurentItinerator["operatingRevenue"].IsNumber())
            finanta.setOperatingRevenue(CurentItinerator["operatingRevenue"].Get<double>());
        
        
        if(CurentItinerator.HasMember("costOfRevenue") && CurentItinerator["costOfRevenue"].IsNumber())
            finanta.setCostOfRevenue(CurentItinerator["costOfRevenue"].Get<double>());
        
        if(CurentItinerator.HasMember("operatingIncome") && CurentItinerator["operatingIncome"].IsNumber()){
            finanta.setTotalRevenue(CurentItinerator["operatingIncome"].Get<double>());
            
        }
        
        if(CurentItinerator.HasMember("researchAndDevelopment") && CurentItinerator["researchAndDevelopment"].IsNumber())
            finanta.setResearchAndDevelopment(CurentItinerator["researchAndDevelopment"].Get<double>());
        
        
        if(CurentItinerator.HasMember("operatingExpense") && CurentItinerator["operatingExpense"].IsNumber())
            finanta.setOperatingExpense(CurentItinerator["operatingExpense"].Get<double>());
        
        
        if(CurentItinerator.HasMember("currentAssets") && CurentItinerator["currentAssets"].IsNumber())
            finanta.setCurrentAssets(CurentItinerator["currentAssets"].Get<double>());
        
        
        if(CurentItinerator.HasMember("totalLiabilities") && CurentItinerator["totalLiabilities"].IsNumber())
            finanta.setTotalLiabilities(CurentItinerator["totalLiabilities"].Get<double>());
        
        
        if(CurentItinerator.HasMember("currentCash") && CurentItinerator["currentCash"].IsNumber())
            finanta.setCurrentCash(CurentItinerator["currentCash"].Get<double>());
        
        
        if(CurentItinerator.HasMember("currentDebt") && CurentItinerator["currentDebt"].IsNumber())
            finanta.setCurrentDebt(CurentItinerator["currentDebt"].Get<double>());
        
        
        if(CurentItinerator.HasMember("totalCash") && CurentItinerator["totalCash"].IsNumber())
            finanta.setTotalCash(CurentItinerator["totalCash"].Get<double>());
        
        
        if(CurentItinerator.HasMember("shareholderEquity") && CurentItinerator["shareholderEquity"].IsNumber())
            finanta.setShareholderEquity(CurentItinerator["shareholderEquity"].Get<double>());
        
        
        if(CurentItinerator.HasMember("cashChange") && CurentItinerator["cashChange"].IsNumber())
            finanta.setCashChange(CurentItinerator["cashChange"].Get<double>());
        
        
        if(CurentItinerator.HasMember("cashFlow") && CurentItinerator["cashFlow"].IsNumber())
            finanta.setCashFlow(CurentItinerator["cashFlow"].Get<double>());
        
        
        if(CurentItinerator.HasMember("operatingGainsLosses") && CurentItinerator["operatingGainsLosses"].IsString())
            finanta.setOperatingGainsLosses(CurentItinerator["operatingGainsLosses"].GetString());
        
        
        Stock->getFinancial().push_back(finanta);
        
    }
}


void dataExtractor::setStatsFAST(Stock *Stock, std::string *symbol,std::string *httpResponse){
   
    Document jsonParser1;
    
    jsonParser1.Parse(httpResponse->c_str());
    
    std::string stringTemp;
    
    if(jsonParser1.IsObject() == 0){
        
        return;
    }
    if(jsonParser1.HasMember(symbol->c_str()) == 0)
        return;
    
    const Value& jsonParser2 = jsonParser1[symbol->c_str()];
    
    if(jsonParser2.HasMember("stats")==0){
        return;
    }
    
    const Value& jsonParser = jsonParser2["stats"];
    
    if(jsonParser.IsObject() == 0)
        return;
    
    
    if(jsonParser.HasMember("companyName") && jsonParser["companyName"].IsString()){
        stringTemp = jsonParser["companyName"].GetString();
        Stock->getStats().setCompanyName(stringTemp);
    }
    if(jsonParser.HasMember("latestEPSDate") && jsonParser["latestEPSDate"].IsString()){
        stringTemp = jsonParser["latestEPSDate"].GetString();
        Stock->getStats().setlatestEPSDate(stringTemp);
    }
    if(jsonParser.HasMember("exDividendDate") && jsonParser["exDividendDate"].IsString()){
        stringTemp = jsonParser["exDividendDate"].GetString();
        Stock->getStats().setExDividendDate(stringTemp);
    }
    if(jsonParser.HasMember("symbol") && jsonParser["symbol"].IsString()){
        stringTemp = jsonParser["symbol"].GetString();
        Stock->getStats().setSymbol(stringTemp);
    }
    
    if(jsonParser.HasMember("marketcap") && jsonParser["marketcap"].IsNumber())
        Stock->getStats().setMarketCap(jsonParser["marketcap"].GetDouble());
    
    if(jsonParser.HasMember("beta") && jsonParser["beta"].IsNumber())
         Stock->getStats().setBeta(jsonParser["beta"].GetDouble());
    
    if(jsonParser.HasMember("week52high") && jsonParser["week52high"].IsNumber())
         Stock->getStats().setweek52high(jsonParser["week52high"].GetDouble());
    
    if(jsonParser.HasMember("week52low") && jsonParser["week52low"].IsNumber())
         Stock->getStats().setweek52low(jsonParser["week52low"].GetDouble());
    
    if(jsonParser.HasMember("week52change") && jsonParser["week52change"].IsNumber())
         Stock->getStats().setWeek52change(jsonParser["week52change"].GetDouble());
    
    if(jsonParser.HasMember("shortInterest") && jsonParser["shortInterest"].IsNumber())
         Stock->getStats().setShortInterest(jsonParser["shortInterest"].GetDouble());
    
    if(jsonParser.HasMember("dividendRate") && jsonParser["dividendRate"].IsNumber())
         Stock->getStats().setDividendRate(jsonParser["dividendRate"].GetDouble());
    
    
    if(jsonParser.HasMember("dividendYield") && jsonParser["dividendYield"].IsNumber())
        Stock->getStats().setDividendYield(jsonParser["dividendYield"].GetDouble());
    
    
    if(jsonParser.HasMember("latestEPS") && jsonParser["latestEPS"].IsNumber())
        Stock->getStats().setLatestEPS(jsonParser["latestEPS"].GetDouble());
    
    
    if(jsonParser.HasMember("sharesOutstanding") && jsonParser["sharesOutstanding"].IsNumber())
        Stock->getStats().setSharesOutstanding(jsonParser["sharesOutstanding"].GetDouble());
    
    
    if(jsonParser.HasMember("returnOnEquity") && jsonParser["returnOnEquity"].IsNumber())
        Stock->getStats().setReturnOnEquity(jsonParser["float"].GetDouble());
    
    
    if(jsonParser.HasMember("numberOfEstimates") && jsonParser["numberOfEstimates"].IsNumber())
        Stock->getStats().setNumberOfEstimates(jsonParser["numberOfEstimates"].GetDouble());
    
    if(jsonParser.HasMember("EBITDA") && jsonParser["EBITDA"].IsNumber())
        Stock->getStats().setEBITDA(jsonParser["EBITDA"].GetDouble());
    
    if(jsonParser.HasMember("revenue") && jsonParser["revenue"].IsNumber())
        Stock->getStats().setRevenue(jsonParser["revenue"].GetDouble());
    
    if(jsonParser.HasMember("grossProfit") && jsonParser["grossProfit"].IsNumber())
        Stock->getStats().setGrossProfit(jsonParser["grossProfit"].GetDouble());
    
    if(jsonParser.HasMember("cash") && jsonParser["cash"].IsNumber())
        Stock->getStats().setCash(jsonParser["cash"].GetDouble());
    
    if(jsonParser.HasMember("debt") && jsonParser["debt"].IsNumber())
        Stock->getStats().setDebt(jsonParser["debt"].GetDouble());
    
    if(jsonParser.HasMember("ttmEPS") && jsonParser["ttmEPS"].IsNumber())
        Stock->getStats().setttmEPS(jsonParser["ttmEPS"].GetDouble());
    
    if(jsonParser.HasMember("revenuePerShare") && jsonParser["revenuePerShare"].IsNumber())
        Stock->getStats().setRevenuePerShare(jsonParser["revenuePerShare"].GetDouble());
    
    if(jsonParser.HasMember("revenuePerEmployee") && jsonParser["revenuePerEmployee"].IsNumber())
        Stock->getStats().setRevenuePerEmployee(jsonParser["revenuePerEmployee"].GetDouble());
    
    if(jsonParser.HasMember("peRatioHigh") && jsonParser["peRatioHigh"].IsNumber())
        Stock->getStats().setPERatioHigh(jsonParser["peRatioHigh"].GetDouble());
    
    if(jsonParser.HasMember("peRatioLow") && jsonParser["peRatioLow"].IsNumber())
        Stock->getStats().setPERatioLow(jsonParser["peRatioLow"].GetDouble());
    
    if(jsonParser.HasMember("EPSSurpriseDollar") && jsonParser["EPSSurpriseDollar"].IsNumber())
        Stock->getStats().setEPSSurpriseDollar(jsonParser["EPSSurpriseDollar"].GetDouble());
    
    if(jsonParser.HasMember("EPSSurprisePercent") && jsonParser["EPSSurprisePercent"].IsNumber())
        Stock->getStats().setEPSSurprisePercent(jsonParser["EPSSurprisePercent"].GetDouble());
    
    if(jsonParser.HasMember("returnOnAssets") && jsonParser["returnOnAssets"].IsNumber())
        Stock->getStats().setReturnOnAssets(jsonParser["returnOnAssets"].GetDouble());
    
    if(jsonParser.HasMember("returnOnCapital") && jsonParser["returnOnCapital"].IsNumber())
        Stock->getStats().setReturnOnCapital(jsonParser["returnOnCapital"].GetDouble());
    
    if(jsonParser.HasMember("profitMargin") && jsonParser["profitMargin"].IsNumber())
        Stock->getStats().setProfitMargin(jsonParser["profitMargin"].GetDouble());
    
    if(jsonParser.HasMember("priceToSales") && jsonParser["priceToSales"].IsNumber())
        Stock->getStats().setPriceToSales(jsonParser["priceToSales"].GetDouble());
    
    if(jsonParser.HasMember("priceToBook") && jsonParser["priceToBook"].IsNumber())
        Stock->getStats().setPriceToBook(jsonParser["priceToBook"].GetDouble());
    
    if(jsonParser.HasMember("day200MovingAvg") && jsonParser["day200MovingAvg"].IsNumber())
        Stock->getStats().setDay200MovingAvg(jsonParser["day200MovingAvg"].GetDouble());
    
    if(jsonParser.HasMember("day50MovingAvg") && jsonParser["day50MovingAvg"].IsNumber())
        Stock->getStats().setDay50MovingAvg(jsonParser["day50MovingAvg"].GetDouble());
    
    if(jsonParser.HasMember("institutionPercent") && jsonParser["institutionPercent"].IsNumber())
        Stock->getStats().setInstitutionPercent(jsonParser["institutionPercent"].GetDouble());
    
    if(jsonParser.HasMember("insiderPercent") && jsonParser["insiderPercent"].IsNumber())
        Stock->getStats().setInsiderPercent(jsonParser["insiderPercent"].GetDouble());
    
    if(jsonParser.HasMember("shortRatio") && jsonParser["shortRatio"].IsNumber())
        Stock->getStats().setShortRatio(jsonParser["shortRatio"].GetDouble());
    
    if(jsonParser.HasMember("year5ChangePercent") && jsonParser["year5ChangePercent"].IsNumber())
        Stock->getStats().setYear5ChangePercent(jsonParser["year5ChangePercent"].GetDouble());
    
    if(jsonParser.HasMember("year2ChangePercent") && jsonParser["year2ChangePercent"].IsNumber())
        Stock->getStats().setYear2ChangePercent(jsonParser["year2ChangePercent"].GetDouble());
    
    if(jsonParser.HasMember("year1ChangePercent") && jsonParser["year1ChangePercent"].IsNumber())
        Stock->getStats().setYear1ChangePercent(jsonParser["year1ChangePercent"].GetDouble());
    
    if(jsonParser.HasMember("ytdChangePercent") && jsonParser["ytdChangePercent"].IsNumber())
        Stock->getStats().setYtdChangePercent(jsonParser["ytdChangePercent"].GetDouble());
    
    if(jsonParser.HasMember("month6ChangePercent") && jsonParser["month6ChangePercent"].IsNumber())
        Stock->getStats().setMonth6ChangePercent(jsonParser["month6ChangePercent"].GetDouble());
    
    if(jsonParser.HasMember("month3ChangePercent") && jsonParser["month3ChangePercent"].IsNumber())
        Stock->getStats().setMonth3ChangePercent(jsonParser["month3ChangePercent"].GetDouble());
    
    if(jsonParser.HasMember("month1ChangePercent") && jsonParser["month1ChangePercent"].IsNumber())
        Stock->getStats().setMonth1ChangePercent(jsonParser["month1ChangePercent"].GetDouble());
    
    if(jsonParser.HasMember("day5ChangePercent") && jsonParser["day5ChangePercent"].IsNumber())
        Stock->getStats().setDay5ChangePercent(jsonParser["day5ChangePercent"].GetDouble());
    
    
    

    
}


void dataExtractor::setCompanyValueFAST(Stock *Stock, std::string *symbol,std::string *httpResponse){
 
    Document jsonParser1;
    
    jsonParser1.Parse(httpResponse->c_str());
    
    std::string stringTemp;
    
    if(jsonParser1.IsObject() == 0){
     
        return;
    }
    
    if(jsonParser1.HasMember(symbol->c_str())==0){
       
        return;
    }
    
    
    const Value& jsonParser2 = jsonParser1[symbol->c_str()];
    
    if(jsonParser2.HasMember("company")==0){
       
            return;
    }
    
    const Value& jsonParser = jsonParser2["company"];
    
    
    
    
    if(jsonParser.HasMember("symbol") && jsonParser["symbol"].IsString()){
        stringTemp = jsonParser["symbol"].GetString();
        Stock->getCompany().setSymbol(&stringTemp);
    }
    
    
    if(jsonParser.HasMember("companyName") && jsonParser["companyName"].IsString()){
        stringTemp = jsonParser["companyName"].GetString();
        Stock->getCompany().setcompanyName(&stringTemp);
    }
    
    
    if(jsonParser.HasMember("exchange") && jsonParser["exchange"].IsString()){
        stringTemp = jsonParser["exchange"].GetString();
        Stock->getCompany().setexchange(&stringTemp);
    }
    
    
    if(jsonParser.HasMember("industry") && jsonParser["industry"].IsString()){
        stringTemp = jsonParser["industry"].GetString();
        Stock->getCompany().setindustry(&stringTemp);
    }
    
    if(jsonParser.HasMember("website") && jsonParser["website"].IsString()){
        stringTemp = jsonParser["website"].GetString();
        Stock->getCompany().setwebsite(&stringTemp);
    }
    
    if(jsonParser.HasMember("description") && jsonParser["description"].IsString()){
        stringTemp = jsonParser["description"].GetString();
        Stock->getCompany().setdescription(&stringTemp);
    }
    
    
    if(jsonParser.HasMember("CEO") && jsonParser["CEO"].IsString()){
        stringTemp = jsonParser["CEO"].GetString();
        Stock->getCompany().setCEO(&stringTemp);
    }
    
    if(jsonParser.HasMember("sector") && jsonParser["sector"].IsString()){
        stringTemp = jsonParser["sector"].GetString();
        Stock->getCompany().setsector(&stringTemp);
    }
}


void dataExtractor::setEarningsFAST(Stock *Stock, std::string *symbol,std::string *httpResponse){
   
    Document jsonParser1;
    jsonParser1.Parse(httpResponse->c_str());
    
    if(jsonParser1.IsObject() == 0)
        return;
    
    if(!jsonParser1.HasMember(symbol->c_str())){
        return;
    }
    const Value& jsonParser2 = jsonParser1[symbol->c_str()];
    if(jsonParser2.HasMember("earnings") == 0){
        return;
    }
    const Value& jsonParser3 = jsonParser2["earnings"];
    
    if(jsonParser3.HasMember("earnings") == 0){
        return;
    }
    const Value& jsonParser4 = jsonParser3["earnings"];
    
    
    if(jsonParser4.IsArray() == 0){
        return;
    }
    
    std::string temp;
    
    for(rapidjson::SizeType i = 0;i<jsonParser4.Size();i++){
        
        Earnings earnings;
        
        const Value& CurentItinerator = jsonParser4[i];
        
        if(CurentItinerator.HasMember("actualEPS") && CurentItinerator["actualEPS"].IsNumber())
                earnings.setActualEPS(CurentItinerator["actualEPS"].GetFloat());
        if(CurentItinerator.HasMember("consensusEPS") && CurentItinerator["consensusEPS"].IsNumber())
                earnings.setConsensusEPS(CurentItinerator["consensusEPS"].GetFloat());
        if(CurentItinerator.HasMember("estimatedEPS") && CurentItinerator["estimatedEPS"].IsNumber())
                earnings.setEstimatedEPS(CurentItinerator["estimatedEPS"].GetFloat());
        if(CurentItinerator.HasMember("announceTime") && CurentItinerator["announceTime"].IsString()){
            temp =CurentItinerator["announceTime"].GetString();
            earnings.setAnnounceTime(&temp);
        }
        if(CurentItinerator.HasMember("numberOfEstimates") && CurentItinerator["numberOfEstimates"].IsNull()==0 && CurentItinerator["numberOfEstimates"].IsFloat() )
            earnings.setNumberOfEstimates(CurentItinerator["numberOfEstimates"].GetFloat());
        
        if(CurentItinerator.HasMember("EPSSurpriseDollar") && CurentItinerator["EPSSurpriseDollar"].IsNumber())
            earnings.setEPSSurpriseDollar(CurentItinerator["EPSSurpriseDollar"].GetFloat());
        
        if(CurentItinerator.HasMember("EPSReportDate") && CurentItinerator["EPSReportDate"].IsString()){
            temp = CurentItinerator["EPSReportDate"].GetString();
            Data temp1(temp);
            earnings.setEPSReportDate(&temp1);
        }
        
        if(CurentItinerator.HasMember("fiscalPeriod") && CurentItinerator["fiscalPeriod"].IsString()){
             temp = CurentItinerator["fiscalPeriod"].GetString();
                earnings.setFiscalPeriod(&temp);
        }
        
        if(CurentItinerator.HasMember("fiscalEndDate") && CurentItinerator["fiscalEndDate"].IsString()){
            temp = CurentItinerator["fiscalEndDate"].GetString();
            Data temp1(temp);
            earnings.setFiscalEndDate(&temp1);
        }
        
        if(CurentItinerator.HasMember("yearAgo") && CurentItinerator["yearAgo"].IsNumber())
            earnings.setYearAgo(CurentItinerator["yearAgo"].GetFloat());
        
        if(CurentItinerator.HasMember("yearAgoChangePercent") && CurentItinerator["yearAgoChangePercent"].IsNumber())
            earnings.setYearAgoChangePercent(CurentItinerator["yearAgoChangePercent"].GetFloat());
        
        if(CurentItinerator.HasMember("estimatedChangePercent") && CurentItinerator["estimatedChangePercent"].IsNumber())
            earnings.setEstimatedChangePercent(CurentItinerator["estimatedChangePercent"].GetFloat());
        Stock->getEarnings().push_back(earnings);
    
    }
    
}


void dataExtractor::fixezDateStockFAST(std::vector<std::string> &symbols, std::vector<Stock> &Stocks){
    std::string Final;
    //construiesc companiile care dau request
    for(int i = 0; i<symbols.size();i++){
        if(i == symbols.size()-1)
            Final.append(symbols.at(i));
        else
            Final.append(symbols.at(i) + ",");
        
    }
    
   std::string httpResponse = getHTTPSrequest(APIPATH+APIVALUEBIG+Final+COMPLETION);

    for(int i = 0;i<symbols.size();i++){
        Stock temp;
        setCompanyValueFAST(&temp, &symbols.at(i),&httpResponse);
        
        if(temp.getCompany().getSymbol().size()!=0 &&  (temp.getCompany().getexchange() == "New York Stock Exchange" || temp.getCompany().getexchange() == "Nasdaq Global Select")){
            setFinancialsValueFAST(&temp, &symbols.at(i), &httpResponse);
            setEarningsFAST(&temp, &symbols.at(i), &httpResponse);
            setStatsFAST(&temp, &symbols.at(i), &httpResponse);
            Stocks.push_back(temp);
        }
        
        //temp.~Stock();
    }
    
    
}








