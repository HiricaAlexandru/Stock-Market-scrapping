//
//  Stats.cpp
//  StockMarketApp
//
//  Created by Alexandru Hirica on 24/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#include "Stats.hpp"

void Stats::setCompanyName(string CompanyName){this->CompanyName = CompanyName;}
void Stats::setMarketCap(double marketCap){this -> marketCap = marketCap;}
void Stats::setBeta(double beta){this -> beta =beta;}
void Stats::setweek52high(double week52high){this-> week52high = week52high; }
void Stats::setweek52low(double week52low){this->week52low = week52low;}
void Stats::setWeek52change(double week52change){this->week52change = week52change;}
void Stats::setShortInterest(double setShortInterest){this->shortInterest= setShortInterest;}
void Stats::setShortDate(string shortDate){Data DataTemp(shortDate);this->shortDate = DataTemp;}
void Stats::setDividendRate(double dividentRate){this->dividendRate= dividentRate;}
void Stats::setDividendYield(double dividentYield){this->dividendYield = dividentYield;}
void Stats::setExDividendDate(string dividentDate){Data DataTemp(dividentDate);this->exDividendDate = DataTemp;}
void Stats::setLatestEPS(double latestEPS){this->latestEPS =latestEPS;}
void Stats::setlatestEPSDate(string latestEPSDate){Data DataTemp(latestEPSDate);this->latestEPSDate = DataTemp;}
void Stats::setSharesOutstanding(double sharesOutstanding){this->sharesOutstanding=sharesOutstanding;}
void Stats::setReturnOnEquity(double returnOnEquity){this->returnOnEquity=returnOnEquity;}
void Stats::setConsensusEPS(double consensusEPS){this->consensusEPS=consensusEPS;}
void Stats::setNumberOfEstimates(double NumberOfEstimates){this->numberOfEstimates=NumberOfEstimates;}
void Stats::setSymbol(string symbol){this->symbol=symbol;}
void Stats::setEBITDA(double EBITDA){this->EBITDA=EBITDA;}
void Stats::setRevenue(double Revenue){this->revenue=Revenue;}
void Stats::setGrossProfit(double GrossProfit){this->grossProfit=GrossProfit;}
void Stats::setCash(double Cash){this->cash=Cash;}
void Stats::setDebt(double Debt){this->debt=Debt;}
void Stats::setttmEPS(double ttmEPS){this->ttmEPS=ttmEPS;}
void Stats::setRevenuePerShare(double RevenuePerShare){this->revenuePerShare=RevenuePerShare;}
void Stats::setRevenuePerEmployee(double RevenuePerEmployee){this->revenuePerEmployee=RevenuePerEmployee;}
void Stats::setPERatioHigh(double PERatioHigh){this->peRatioHigh=PERatioHigh;}
void Stats::setPERatioLow(double PERatioLow){this->peRatioLow=PERatioLow;}
void Stats::setEPSSurpriseDollar(double EPSSUrpriseDollar){this->EPSSurpriseDollar=EPSSUrpriseDollar;}
void Stats::setEPSSurprisePercent(double EPSSurprisePercent){this->EPSSurprisePercent=EPSSurprisePercent;}
void Stats::setReturnOnAssets(double returnOnAssets){this->returnOnAssets=returnOnAssets;}
void Stats::setReturnOnCapital(double returnOnCapital){this->returnOnCapital=returnOnCapital;}
void Stats::setProfitMargin(double profitMargin){this->profitMargin=profitMargin;}
void Stats::setPriceToSales(double priceToSales){this->priceToSales=priceToSales;}
void Stats::setPriceToBook(double priceToBook){this->priceToBook=priceToBook;}
void Stats::setDay200MovingAvg(double Day200MovingAvg){this->day200MovingAvg=Day200MovingAvg;}
void Stats::setDay50MovingAvg(double Day50MovingAvg){this->day50MovingAvg=Day50MovingAvg;}
void Stats::setInstitutionPercent(double InstitutePercent){this->institutionPercent=InstitutePercent;}
void Stats::setInsiderPercent(double InsiderPercent){this->insiderPercent=InsiderPercent;}
void Stats::setShortRatio(double shortRatio){this->shortRatio=shortRatio;}
void Stats::setYear5ChangePercent(double year5ChangePercent){this->year5ChangePercent=year5ChangePercent;}
void Stats::setYear2ChangePercent(double year2ChangePercent){this->year2ChangePercent=year2ChangePercent;}
void Stats::setYear1ChangePercent(double year1ChangePercent){this->year1ChangePercent=year1ChangePercent;}
void Stats::setYtdChangePercent(double YtdChangePercent){this->ytdChangePercent=YtdChangePercent;}
void Stats::setMonth6ChangePercent(double Month6ChangePercent){this->month6ChangePercent=Month6ChangePercent;}
void Stats::setMonth3ChangePercent(double Month3ChangePercent){this->month3ChangePercent=Month3ChangePercent;}
void Stats::setMonth1ChangePercent(double Month1ChangePercent){this->month1ChangePercent=Month1ChangePercent;}
void Stats::setDay5ChangePercent(double Day5ChangePercent){this->day5ChangePercent=Day5ChangePercent;}


string Stats::getCompanyName(){return CompanyName;}
double Stats::getMarketCap(){return marketCap;}
double Stats::getBeta(){return beta;}
double Stats::getweek52high( ){return week52high;}
double Stats::getweek52low( ){return week52low;}
double Stats::getWeek52change( ){return week52change;}
double Stats::getShortInterest(){return shortInterest;}
Data Stats::getShortDate( ){return shortDate;}
double Stats::getDividendRate( ){return dividendRate;}
double Stats::getDividendYield( ){return dividendYield;}
Data Stats::getExDividendDate( ){return exDividendDate;}
double Stats::getLatestEPS( ){return latestEPS;}
Data Stats::getlatestEPSDate( ){return latestEPSDate;}
double Stats::getSharesOutstanding( ){return sharesOutstanding;}
double Stats::getReturnOnEquity( ){return returnOnEquity;}
double Stats::getConsensusEPS( ){return consensusEPS;}
double Stats::getNumberOfEstimates( ){return numberOfEstimates;}
string Stats::getSymbol( ){return symbol;}
double Stats::getEBITDA( ){return EBITDA;}
double Stats::getRevenue( ){return revenue;}
double Stats::getGrossProfit( ){return grossProfit;}
double Stats::getCash(){return cash;}
double Stats::getDebt(){return debt;}
double Stats::getttmEPS(){return ttmEPS;}
double Stats::getRevenuePerShare( ){return revenuePerShare;}
double Stats::getRevenuePerEmployee( ){return revenuePerEmployee;}
double Stats::getPERatioHigh( ){return peRatioHigh;}
double Stats::getPERatioLow( ){return peRatioLow;}
double Stats::getEPSSurpriseDollar( ){return EPSSurpriseDollar;}
double Stats::getEPSSurprisePercent( ){return EPSSurprisePercent;}
double Stats::getReturnOnAssets( ){return returnOnAssets;}
double Stats::getReturnOnCapital( ){return returnOnCapital;}
double Stats::getProfitMargin( ){return profitMargin;}
double Stats::getPriceToSales( ){return priceToSales;}
double Stats::getPriceToBook( ){return priceToBook;}
double Stats::getDay200MovingAvg( ){return day200MovingAvg;}
double Stats::getDay50MovingAvg( ){return day50MovingAvg;}
double Stats::getInstitutionPercent( ){return institutionPercent;}
double Stats::getInsiderPercent( ){return insiderPercent;}
double Stats::getShortRatio( ){return shortRatio;}
double Stats::getYear5ChangePercent(){return year5ChangePercent;}
double Stats::getYear2ChangePercent(){return year2ChangePercent;}
double Stats::getYear1ChangePercent(){return year1ChangePercent;}
double Stats::getYtdChangePercent( ){return ytdChangePercent;}
double Stats::getMonth6ChangePercent(){return month6ChangePercent;}
double Stats::getMonth3ChangePercent(){return month3ChangePercent;}
double Stats::getMonth1ChangePercent(){return month1ChangePercent;}
double Stats::getDay5ChangePercent( ){return day5ChangePercent;}






