//
//  VariableHolder.hpp
//  StockMarketApp
//
//  Created by Alexandru Hirica on 25/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#ifndef VariableHolder_hpp
#define VariableHolder_hpp

#include <stdio.h>
#include <vector>
#include "utilitati/dataExtractor.hpp"
#include "HiricaINDICES/HiricaStrategy1.hpp"

class VariableHolder{
private:
    std::vector<Stock> stocks;
    dataExtractor de;
    int gasescDiv(int nr);
    Strategy strategy;
    
public:
    void completezStocksVector();
    void completezStocksVectorFAST();
    Strategy& getStrategy();
    void completezStrategy();
    ~VariableHolder();
    
};

#endif /* VariableHolder_hpp */

