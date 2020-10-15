//
//  Financials.cpp
//  StockMarketApp
//
//  Created by Alexandru Hirica on 24/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#include "Financials.hpp"

void Financials::setReportDate(std::string reportDate){
    Data dd(reportDate);
    this -> reportDate = dd;
}
void Financials::setGrossProfit(double grossProfit){this->grossProfit = grossProfit;}
void Financials::setReportDate(Data reportDate){this->reportDate = reportDate;}
void Financials::setCostOfRevenue(double costOfRevenue){this->costOfRevenue = costOfRevenue;}
void Financials::setOperatingRevenue(double operatingRevenue){this->operatingRevenue = operatingRevenue;}
void Financials::setTotalRevenue(double totalRevenue){this -> totalRevenue = totalRevenue; }
void Financials::setOperatingIncome(double operatingIncome){this -> operatingIncome = operatingIncome;}
void Financials::setNetIncome(double netIncome){this->netIncome = netIncome;}
void Financials::setResearchAndDevelopment(double RnD){this-> researchAndDevelopment = RnD;}
void Financials::setOperatingExpense(double operatingExpense){this->operatingExpense = operatingExpense;}
void Financials::setCurrentAssets(double curentAssets){this -> curentAssets = curentAssets;}
void Financials::setTotalAssets(double totalAssets){this -> totalAssets = totalAssets; }
void Financials::setTotalLiabilities(double totalLiabilities){this -> totalLiabilities = totalLiabilities;}
void Financials::setCurrentCash(double curentCash){this -> curentCash = curentCash;}
void Financials::setCurrentDebt(double curentDebt){this -> curentDebt = curentDebt;}
void Financials::setTotalCash(double totalCash){this -> totalCash = totalCash;}
void Financials::setTotalDebt(double totalDebt){this -> totalDebt = totalDebt;}
void Financials::setShareholderEquity(double shareHolderEquity){this -> shareholderEquity = shareHolderEquity;}
void Financials::setCashChange(double cashChange){this -> cashChange =cashChange;}
void Financials::setCashFlow(double cashFlow){this -> cashFlow = cashFlow; }
void Financials::setOperatingGainsLosses(std::string operatingGainsLosses){this -> operatingGainsLosses = operatingGainsLosses;}


double Financials::getGrossProfit(){return grossProfit;}
Data Financials::getReportDate(){return reportDate;}
double Financials::getCostOfRevenue(){return costOfRevenue;}
double Financials::getOperatingRevenue(){return operatingRevenue;}
double Financials::getTotalRevenue(){return totalRevenue;}
double Financials::getOperatingIncome(){return operatingIncome;}
double Financials::getNetIncome(){return netIncome;}
double Financials::getResearchAndDevelopment(){return researchAndDevelopment;}
double Financials::getOperatingExpense(){return operatingExpense;}
double Financials::getCurrentAssets(){return curentAssets;}
double Financials::getTotalAssets(){return totalAssets;}
double Financials::getTotalLiabilities(){return totalLiabilities;}
double Financials::getCurrentCash(){return curentCash;}
double Financials::getCurrentDebt(){return curentDebt;}
double Financials::getTotalCash(){return totalCash;}
double Financials::getTotalDebt(){return totalDebt;}
double Financials::getShareholderEquity(){return shareholderEquity;}
double Financials::getCashChange(){return cashChange;}
double Financials::getCashFlow(){return cashFlow;}
std::string Financials::getOperatingGainsLosses(){return operatingGainsLosses;}
