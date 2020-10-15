//
//  dataExtractor.hpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 22/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#ifndef dataExtractor_hpp
#define dataExtractor_hpp



#include <string>
#include "rapidjson/document.h"
#include <curl/curl.h>
#include "../claseLegatedeStock/Stock.hpp"
#include <thread>

using namespace rapidjson;

class dataExtractor{
    
private:
    
    CURL *curl;
    CURLcode res;//aici se tine string response-ul
    const std::string APIPATH = "https://cloud.iexapis.com/v1/pk_d6ccc558883a4128959c1aa9b0d6e4fe";//"https://api.iextrading.com/1.0/stock/";
    std::string companies;
    Document jsonCompanies;
    const std::string APIVALUE = "/batch?types=company,financials";//batch?types=company,financials,news,chart&range=5y&last=10"
    const std::string APIVALUEBIG = "/market/batch?symbols=", COMPLETION = "&types=company,financials,earnings,stats";//,chart&range=1y&last=10";
    
    
    
    
    void completeCompanyValues(Stock *Stock,std::string httpGetResponse);
    void setFinancialsValues(Stock *Stock, std::string httpGetResponse);
    std::string getHTTPSrequest(std::string website);
    void setCompanyValue(Stock *Stock, std::string symbol);
    void setFinancialsValue(Stock *Stock, std::string symbol);
    
    void setCompanyValueFAST(Stock *Stock, std::string *symbol,std::string *httpResponse);
    
    void setFinancialsValueFAST(Stock *Stock, std::string *symbol,std::string *httpResponse); //!!! au nevoie de o implementare mai rapida
    
    void setEarningsFAST(Stock *Stock, std::string *symbol,std::string *httpResponse);
    
    void setStatsFAST(Stock *Stock, std::string *symbol,std::string *httpResponse);
    
    
public:
    
    
    void fixezDateStock(Stock &Stock, std::string symbol);
    int getNumberOfCompanies();
    void fixezDateStockFAST(std::vector<std::string> &symbols, std::vector<Stock> &Stocks);
    std::string getCompaniaDePePoz(int i);
    
    
    //Stock setStockData();
};

#endif /* dataExtractor_hpp */
