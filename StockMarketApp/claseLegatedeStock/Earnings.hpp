//
//  Earnings.hpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 15/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

//clasa contine castigurile inregistrate pt un trimestru
///stock/aapl/earnings contine informatii dispuse intr-un vector cu 4 elemente despre ultimele 4 trimestre

#ifndef Earnings_hpp
#define Earnings_hpp

#include <string>
#include "../utilitati/DataClass.hpp"

class Earnings{
private:
    float actualEPS;
    float consensusEPS;
    float estimatedEPS;
    std::string announceTime;//AMC sau BTO sau DMT
    float numberOfEstimates;
    float EPSSurpriseDollar;
    Data EPSReportDate; //API cere in YYYY-MM-DD;
    std::string fiscalPeriod;//ex Q2 2017
    Data fiscalEndDate;///YYYY-MM-DD
    float yearAgo;//Represents the EPS of the quarter a year ago
    float yearAgoChangePercent;//Represents the percent difference between the quarter a year ago actualEPS and current period actualEPS.
    float estimatedChangePercent;//Represents the percent difference between the quarter a year ago actualEPS and current period estimatedEPS.
    
public:
    void setActualEPS(float actualEPS);
    void setEstimatedEPS(float estimatedEPS);
    void setConsensusEPS(float consensusEPS);
    void setAnnounceTime(std::string *announceTime);
    void setNumberOfEstimates(float numberOfEstimates);
    void setEPSSurpriseDollar(float EPSSurpriseDollar);
    void setEPSReportDate(Data *EPSReportDate);
    void setFiscalPeriod(std::string *fiscalPeriod);
    void setFiscalEndDate(Data *fiscalEndDate);
    void setYearAgo(float yearAgo);
    void setYearAgoChangePercent(float yearAgoChangePercent);
    void setEstimatedChangePercent(float estimatedChangePercent);
    
    
    float getEstimatedEPS();
    float getActualEPS();
    float getConsensusEPS();
    std::string getAnnounceTime();
    float getNumberOfEstimates();
    float getEPSSurpriseDollar();
    Data getEPSReportDate();
    std::string getFiscalPeriod();
    Data getFiscalEndDate();
    float getYearAgo();
    float getYearAgoChangePercent();
    float getEstimatedChangePercent();
    
    
    
    
};

#endif /* Earnings_hpp */
