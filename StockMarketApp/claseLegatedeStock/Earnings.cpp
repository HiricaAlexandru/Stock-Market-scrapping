//
//  Earnings.cpp
//  StockMarketApp
//
//  Created by Alexandru Hirica on 24/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#include "Earnings.hpp"
void Earnings::setEstimatedChangePercent(float estimatedChangePercent){
    this->estimatedChangePercent = estimatedChangePercent;
}


void Earnings::setEstimatedEPS(float estimatedEPS){
    this->estimatedEPS =estimatedEPS;
}

void Earnings::setActualEPS(float actualEPS){
    this->actualEPS = actualEPS;
}
void Earnings::setConsensusEPS(float consensusEPS){
    this->consensusEPS = consensusEPS;
}
void Earnings::setAnnounceTime(std::string *announceTime){
    this->announceTime = *announceTime;
}
void Earnings::setNumberOfEstimates(float numberOfEstimates){
    this->numberOfEstimates = numberOfEstimates;
}
void Earnings::setEPSSurpriseDollar(float EPSSurpriseDollar){
    this->EPSSurpriseDollar=EPSSurpriseDollar;
}
void Earnings::setEPSReportDate(Data *EPSReportDate){
    this->EPSReportDate=*EPSReportDate;
}
void Earnings::setFiscalPeriod(std::string *fiscalPeriod){
    this->fiscalPeriod=*fiscalPeriod;
}
void Earnings::setFiscalEndDate(Data *fiscalEndDate){
    this->fiscalEndDate=*fiscalEndDate;
}
void Earnings::setYearAgo(float yearAgo){
    this->yearAgo=yearAgo;
}
void Earnings::setYearAgoChangePercent(float yearAgoChangePercent){
    this->yearAgoChangePercent=yearAgoChangePercent;
}




float Earnings::getActualEPS(){
    return actualEPS;
}
float Earnings::getConsensusEPS(){
    return consensusEPS;
}
std::string Earnings::getAnnounceTime(){
    return announceTime;
}
float Earnings::getNumberOfEstimates(){
    return numberOfEstimates;
}
float Earnings::getEPSSurpriseDollar(){
    return EPSSurpriseDollar;
}
Data Earnings::getEPSReportDate(){
    return EPSReportDate;
}
std::string Earnings::getFiscalPeriod(){
    return fiscalPeriod;
}
Data Earnings::getFiscalEndDate(){
    return fiscalEndDate;
}
float Earnings::getYearAgo(){
    return yearAgo;
}
float Earnings::getYearAgoChangePercent(){
    return yearAgoChangePercent;
}

float Earnings::getEstimatedEPS(){
    return estimatedEPS;
}

float Earnings::getEstimatedChangePercent(){
    return estimatedChangePercent;
}
