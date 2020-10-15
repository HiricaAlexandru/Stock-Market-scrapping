//
//  HiricaStrategy1.cpp
//  StockMarketApp
//
//  Created by Alexandru Hirica on 08/02/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

//trebuie sa aiba P/E < 9.0
//curent assets / curent liablity > 1.50
//total debt / curent asset < 1.10 (o impl dupa)


#include "HiricaStrategy1.hpp"
#include <iostream>
void Strategy::adaug(Stock *stock){
    picks.push_back(stock);
}


void Strategy::completePicks(std::vector<Stock> *stocks){
    for(int i = 0;i<stocks->size();i++){
        Financials f;
        Stats s;
        Company c;
        if(stocks->at(i).getFinancial().size() != 0){
            f = stocks->at(i).getFinancial().at(0);
            s =stocks->at(i).getStats();
            c= stocks->at(i).getCompany();
    
            if(s.getDay5ChangePercent() < -8/100 && s.getBeta() > 1.5 && s.getBeta()!=0 && c.getexchange() == "New York Stock Exchange" && c.getsector() == "Technology")
                adaug(&stocks->at(i));
            }
        }
    }
        

