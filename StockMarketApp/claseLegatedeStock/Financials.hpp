
//Pulls income statement, balance sheet, and cash flow data from the four most recent reported quarters.
///stock/aapl/financials

#ifndef Financials_hpp
#define Financials_hpp

#include <string>
#include "../utilitati/DataClass.hpp"

class Financials{
private:
    Data reportDate;
    double grossProfit;
    double costOfRevenue;
    double operatingRevenue;
    double totalRevenue;
    double operatingIncome;
    double netIncome;
    double researchAndDevelopment;
    double operatingExpense;
    double curentAssets;
    double totalAssets;
    double totalLiabilities;
    double curentCash;
    double curentDebt;
    double totalCash;
    double totalDebt;
    double shareholderEquity;
    double cashChange;
    double cashFlow;
    std::string operatingGainsLosses;
    
public:
    void setGrossProfit(double grossProfit);
    void setReportDate(Data reportDate);
    void setReportDate(std::string reportDate);
    void setCostOfRevenue(double costOfRevenue);
    void setOperatingRevenue(double operatingRevenue);
    void setTotalRevenue(double totalRevenue);
    void setOperatingIncome(double operatingIncome);
    void setNetIncome(double netIncome);
    void setResearchAndDevelopment(double RnD);
    void setOperatingExpense(double operatingExpense);
    void setCurrentAssets(double curentAssets);
    void setTotalAssets(double totalAssets);
    void setTotalLiabilities(double totalLiabilities);
    void setCurrentCash(double curentCash);
    void setCurrentDebt(double curentDebt);
    void setTotalCash(double totalCash);
    void setTotalDebt(double totalDebt);
    void setShareholderEquity(double shareHolderEquity);
    void setCashChange(double cashChange);
    void setCashFlow(double cashFlow);
    void setOperatingGainsLosses(std::string operatingGainsLosses);
    
    
    double getGrossProfit();
    Data getReportDate();
    double getCostOfRevenue();
    double getOperatingRevenue();
    double getTotalRevenue();
    double getOperatingIncome();
    double getNetIncome();
    double getResearchAndDevelopment();
    double getOperatingExpense();
    double getCurrentAssets();
    double getTotalAssets();
    double getTotalLiabilities();
    double getCurrentCash();
    double getCurrentDebt();
    double getTotalCash();
    double getTotalDebt();
    double getShareholderEquity();
    double getCashChange();
    double getCashFlow();
    std::string getOperatingGainsLosses();
};

#endif /* Financials_hpp */
