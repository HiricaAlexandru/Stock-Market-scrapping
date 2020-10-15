//
//  Stats.hpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 22/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#ifndef Stats_hpp
#define Stats_hpp


#include <string>
#include "../utilitati/DataClass.hpp"
using namespace std;
//e gresita putin fa-o ultima si uita-te atent
//TODO

class Stats{
private:
    string CompanyName;
    double marketCap;           //   is not calculated in real time.
    double beta;
    double week52high;
    double week52low;
    double week52change;
    double shortInterest;
    Data shortDate;
    double dividendRate;
    double dividendYield;
    Data exDividendDate;
    double latestEPS;               //(Most recent quarter)
    Data latestEPSDate;
    double sharesOutstanding;
    double returnOnEquity;           //   (Trailing twelve months)
    double consensusEPS;              // (Most recent quarter)
    double numberOfEstimates;     //   (Most recent quarter)
    std::string symbol;
    double EBITDA;                //  (Trailing twelve months)
    double revenue;              // (Trailing twelve months)
    double grossProfit;           //   (Trailing twelve months)
    double cash;                  // reers to total cash. (Trailing twelve months)
    double debt;                // refers to total debt. (Trailing twelve months)
    double ttmEPS;                  // (Trailing twelve months)
    double revenuePerShare;       // (Trailing twelve months)
    double revenuePerEmployee;        //(Trailing twelve months)
    double peRatioHigh;
    double peRatioLow;
    double EPSSurpriseDollar;         //  refers to the difference between actual EPS and consensus EPS in dollars.
    double EPSSurprisePercent;      //  refers to the percent difference between actual EPS and consensus EPS.
    double returnOnAssets;          // (Trailing twelve months)
    double returnOnCapital;         //(Trailing twelve months)
    double profitMargin;
    double priceToSales;
    double priceToBook;
    double day200MovingAvg;
    double day50MovingAvg;
    double institutionPercent;       // represents top 15 institutions
    double insiderPercent;
    double shortRatio;
    double year5ChangePercent;
    double year2ChangePercent;
    double year1ChangePercent;
    double ytdChangePercent;
    double month6ChangePercent;
    double month3ChangePercent;
    double month1ChangePercent;
    double day5ChangePercent;
    
public:
    void setCompanyName(string CompanyName);
    void setMarketCap(double marketCap);
    void setBeta(double beta);
    void setweek52high(double week52high);
    void setweek52low(double week52low);
    void setWeek52change(double week52change);
    void setShortInterest(double getShortInterest);
    void setShortDate(string shortDate);
    void setDividendRate(double dividentRate);
    void setDividendYield(double dividentYield);
    void setExDividendDate(string dividentDate);
    void setLatestEPS(double latestEPS);
    void setlatestEPSDate(string latestEPSDate);
    void setSharesOutstanding(double sharesOutstanding);
    void setReturnOnEquity(double returnOnEquity);
    void setConsensusEPS(double consensusEPS);
    void setNumberOfEstimates(double NumberOfEstimates);
    void setSymbol(string symbol);
    void setEBITDA(double EBITDA);
    void setRevenue(double Revenue);
    void setGrossProfit(double GrossProfit);
    void setCash(double Cash);
    void setDebt(double Debt);
    void setttmEPS(double ttmEPS);
    void setRevenuePerShare(double RevenuePerShare);
    void setRevenuePerEmployee(double RevenuePerEmployee);
    void setPERatioHigh(double PERatioHigh);
    void setPERatioLow(double PERatioLow);
    void setEPSSurpriseDollar(double EPSSUrpriseDollar);
    void setEPSSurprisePercent(double EPSSurprisePercent);
    void setReturnOnAssets(double returnOnAssets);
    void setReturnOnCapital(double returnOnCapital);
    void setProfitMargin(double profitMargin);
    void setPriceToSales(double priceToSales);
    void setPriceToBook(double priceToBook);
    void setDay200MovingAvg(double Day200MovingAvg);
    void setDay50MovingAvg(double Day50MovingAvg);
    void setInstitutionPercent(double InstitutePercent);
    void setInsiderPercent(double InsiderPercent);
    void setShortRatio(double shortRatio);
    void setYear5ChangePercent(double year5ChangePercent);
    void setYear2ChangePercent(double year2ChangePercent);
    void setYear1ChangePercent(double year1ChangePercent);
    void setYtdChangePercent(double YtdChangePercent);
    void setMonth6ChangePercent(double Month6ChangePercent);
    void setMonth3ChangePercent(double Month3ChangePercent);
    void setMonth1ChangePercent(double Month1ChangePercent);
    void setDay5ChangePercent(double Day5ChangePercent);
    
    string getCompanyName( );
    double getMarketCap( );
    double getBeta( );
    double getweek52high( );
    double getweek52low( );
    double getWeek52change( );
    double getShortInterest( );
    Data getShortDate( );
    double getDividendRate( );
    double getDividendYield( );
    Data getExDividendDate( );
    double getLatestEPS( );
    Data getlatestEPSDate( );
    double getSharesOutstanding( );
    double getReturnOnEquity( );
    double getConsensusEPS( );
    double getNumberOfEstimates( );
    string getSymbol( );
    double getEBITDA( );
    double getRevenue( );
    double getGrossProfit( );
    double getCash( );
    double getDebt( );
    double getttmEPS( );
    double getRevenuePerShare( );
    double getRevenuePerEmployee( );
    double getPERatioHigh( );
    double getPERatioLow( );
    double getEPSSurpriseDollar( );
    double getEPSSurprisePercent( );
    double getReturnOnAssets( );
    double getReturnOnCapital( );
    double getProfitMargin( );
    double getPriceToSales( );
    double getPriceToBook( );
    double getDay200MovingAvg( );
    double getDay50MovingAvg( );
    double getInstitutionPercent( );
    double getInsiderPercent( );
    double getShortRatio( );
    double getYear5ChangePercent( );
    double getYear2ChangePercent( );
    double getYear1ChangePercent( );
    double getYtdChangePercent( );
    double getMonth6ChangePercent( );
    double getMonth3ChangePercent( );
    double getMonth1ChangePercent( );
    double getDay5ChangePercent( );
    
    
    
};

#endif /* Stats_hpp */
