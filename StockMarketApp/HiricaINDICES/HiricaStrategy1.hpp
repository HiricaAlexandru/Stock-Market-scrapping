//
//  HiricaStrategy1.hpp
//  StockMarketApp
//
//  Created by Alexandru Hirica on 08/02/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//
//trebuie sa aiba P/E < 9.0
//curent assets / curent liablity > 1.50
//total debt / curent asset < 1.10 (o impl dupa)

#ifndef HiricaStrategy1_hpp
#define HiricaStrategy1_hpp

#include <stdio.h>
#include "../claseLegatedeStock/Stock.hpp"

class Strategy{
private:
    
    std::vector<Stock*> picks;
    void adaug(Stock *stock);
    
public:
    
    void completePicks(std::vector<Stock> *stocks);
    
};


#endif /* HiricaStrategy1_hpp */
