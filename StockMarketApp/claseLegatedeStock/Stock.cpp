//
//  Stock.cpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 15/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#include "Stock.hpp"



Company &Stock::getCompany(){
    //TODO corectare la aceasta eroare semantica
    return CompanyINFO;
}

std::vector<Financials> &Stock::getFinancial(){
    return Financial;
}

std::vector<Earnings> &Stock::getEarnings(){
    return Earnings;
}

Stats &Stock::getStats(){
    return StatsValue;
}




/*Stock::~Stock(){
    CompanyINFO.~Company();
    Financial.~vector();
}
 */

