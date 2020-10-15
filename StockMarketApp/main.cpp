
#include "utilitati/dataExtractor.hpp"
#include <iostream>
#include <vector>
#include <thread>
#include "VariableHolder.hpp"
//creeaza o clasa care inglobeaza stocks si i se parseaza de care ii va da parsa i nume de companii si el face thread-uri cu ele

int main()
{
    //TODO corectare de erori
    VariableHolder s;
    //s.completezStocksVector();
    s.completezStocksVectorFAST();
    //de.setAllCompaniesValue(&stocks);
    s.completezStrategy();
    std::cout<<std::endl;
    
}
