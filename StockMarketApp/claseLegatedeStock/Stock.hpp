//
//  Stock.hpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 15/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#ifndef Stock_hpp
#define Stock_hpp


#include "Company.hpp"
#include "Financials.hpp"
#include "Earnings.hpp"
#include "Stats.hpp"
#include <vector>

class Stock{
private:
    
    Company CompanyINFO;
    Stats StatsValue;
    std::vector<Financials> Financial;
    std::vector<Earnings> Earnings;
   
    
public:
    Company &getCompany();
    std::vector<Financials> &getFinancial();
    std::vector<class Earnings> &getEarnings();
    Stats &getStats();
    //~Stock();
};


#endif /* Stock_hpp */
