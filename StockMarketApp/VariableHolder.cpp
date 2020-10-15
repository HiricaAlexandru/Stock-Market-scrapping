//
//  VariableHolder.cpp
//  StockMarketApp
//
//  Created by Alexandru Hirica on 25/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#include "VariableHolder.hpp"
#include <stdlib.h>


#define NUMBER_OF_COMPANIES 420

int VariableHolder::gasescDiv(int nr){
    for(int i = 50;i>=2;i++)
        if(nr % i == 0)
            return i;
    return 1;
}


void VariableHolder::completezStocksVectorFAST(){
    int k = de.getNumberOfCompanies();
    
    std::vector<std::string> symbols1, symbols2, symbols3, symbols4, symbols5, symbols6, symbols7, symbols8,symbols9,symbols10;
    int contor = 1;
    int i;
    for(i = 0;i < k - NUMBER_OF_COMPANIES;i++){
        contor++;
        /*if(contor<20){
            symbols1.push_back(de.getCompaniaDePePoz(i));
        }else{
                std::cout<<i<<" "<<i-20<<std::endl;
                de.fixezDateStockFAST(symbols1, stocks);
                contor = 1;
                symbols1.clear();
            }
         */
        
        if(contor<=40)symbols1.push_back(de.getCompaniaDePePoz(i));else
        if(contor>60 && contor<=100)symbols2.push_back(de.getCompaniaDePePoz(i));else
        if(contor>100 && contor<=140)symbols3.push_back(de.getCompaniaDePePoz(i));else
        if(contor>140 && contor<=180)symbols4.push_back(de.getCompaniaDePePoz(i));else
        if(contor>180 && contor<=220)symbols5.push_back(de.getCompaniaDePePoz(i));else
        if(contor>220 && contor<=260)symbols6.push_back(de.getCompaniaDePePoz(i));else
        if(contor>260 && contor<=300)symbols7.push_back(de.getCompaniaDePePoz(i));else
        if(contor>300 && contor<=340)symbols8.push_back(de.getCompaniaDePePoz(i));else
        if(contor>340 && contor<=380)symbols9.push_back(de.getCompaniaDePePoz(i));else
        if(contor>380 && contor<=420)symbols10.push_back(de.getCompaniaDePePoz(i));
        
        if(contor == 421){
            std::cout<<i-NUMBER_OF_COMPANIES+2<<" "<<i+1<<std::endl;
            std::thread t1(&dataExtractor::fixezDateStockFAST,&de, std::ref(symbols1), std::ref(stocks));
            std::thread t2(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols2), std::ref(stocks));
            std::thread t3(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols3), std::ref(stocks));
            std::thread t4(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols4), std::ref(stocks));
            std::thread t5(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols5), std::ref(stocks));
            std::thread t6(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols6), std::ref(stocks));
            std::thread t7(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols7), std::ref(stocks));
            std::thread t8(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols8), std::ref(stocks));
            std::thread t9(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols9), std::ref(stocks));
            std::thread t10(&dataExtractor::fixezDateStockFAST ,&de ,std::ref(symbols10), std::ref(stocks));
            t1.join();t2.join();t3.join();t4.join(); t5.join();t6.join();t7.join();t8.join();t9.join();t10.join();
            contor = 1;
            symbols1.clear();symbols2.clear();symbols3.clear();symbols4.clear();symbols5.clear();symbols6.clear();symbols7.clear();symbols8.clear();
            symbols9.clear();symbols10.clear();
        
        }
        
    }
    symbols1.clear();
    
    for(;i<k;i++){
        symbols1.push_back(de.getCompaniaDePePoz(i));
    }
    std::cout<<"ULTIMELE"<<std::endl;
    std::thread t1(&dataExtractor::fixezDateStockFAST,&de, std::ref(symbols1), std::ref(stocks));
    t1.join();
    symbols1.clear();

    
}


void VariableHolder::completezStocksVector(){
    int k = de.getNumberOfCompanies();
    
    
    
    
    for(int i = 0;i<k-40;i+=38){
        std::cout<<i<<" "<<i+37<<std::endl;
        Stock temp1, temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9, temp10,temp11,temp12,temp13,temp14,temp15,temp16,temp17, temp18,temp19,temp20,temp21,temp22,temp23,temp24,temp25, temp26,temp27,temp28,temp29,temp30,temp31,temp32,temp33,temp34,temp35,temp36,temp37,temp38,temp39,temp40,temp41,temp42;;
        std::thread t1(&dataExtractor::fixezDateStock,&de,std::ref(temp1),de.getCompaniaDePePoz(i));
        std::thread t2(&dataExtractor::fixezDateStock,&de,std::ref(temp2),de.getCompaniaDePePoz(i+1));
        std::thread t3(&dataExtractor::fixezDateStock,&de,std::ref(temp3),de.getCompaniaDePePoz(i+2));
         std::thread t4(&dataExtractor::fixezDateStock,&de,std::ref(temp4),de.getCompaniaDePePoz(i+3));
        std::thread t5(&dataExtractor::fixezDateStock,&de,std::ref(temp5),de.getCompaniaDePePoz(i+4));
        std::thread t6(&dataExtractor::fixezDateStock,&de,std::ref(temp6),de.getCompaniaDePePoz(i+5));
        std::thread t7(&dataExtractor::fixezDateStock,&de,std::ref(temp7),de.getCompaniaDePePoz(i+6));
        std::thread t8(&dataExtractor::fixezDateStock,&de,std::ref(temp8),de.getCompaniaDePePoz(i+7));
        std::thread t9(&dataExtractor::fixezDateStock,&de,std::ref(temp9),de.getCompaniaDePePoz(i+8));
        std::thread t10(&dataExtractor::fixezDateStock,&de,std::ref(temp10),de.getCompaniaDePePoz(i+10));
        std::thread t11(&dataExtractor::fixezDateStock,&de,std::ref(temp11),de.getCompaniaDePePoz(i+11));
        std::thread t12(&dataExtractor::fixezDateStock,&de,std::ref(temp12),de.getCompaniaDePePoz(i+12));
        std::thread t13(&dataExtractor::fixezDateStock,&de,std::ref(temp13),de.getCompaniaDePePoz(i+13));
        std::thread t14(&dataExtractor::fixezDateStock,&de,std::ref(temp14),de.getCompaniaDePePoz(i+14));
        std::thread t15(&dataExtractor::fixezDateStock,&de,std::ref(temp15),de.getCompaniaDePePoz(i+15));
        std::thread t16(&dataExtractor::fixezDateStock,&de,std::ref(temp16),de.getCompaniaDePePoz(i+16));
        std::thread t17(&dataExtractor::fixezDateStock,&de,std::ref(temp17),de.getCompaniaDePePoz(i+17));
        std::thread t18(&dataExtractor::fixezDateStock,&de,std::ref(temp18),de.getCompaniaDePePoz(i+18));
        std::thread t19(&dataExtractor::fixezDateStock,&de,std::ref(temp19),de.getCompaniaDePePoz(i+19));
        std::thread t20(&dataExtractor::fixezDateStock,&de,std::ref(temp20),de.getCompaniaDePePoz(i+20));
        std::thread t21(&dataExtractor::fixezDateStock,&de,std::ref(temp21),de.getCompaniaDePePoz(i+21));
        std::thread t22(&dataExtractor::fixezDateStock,&de,std::ref(temp22),de.getCompaniaDePePoz(i+22));
        std::thread t23(&dataExtractor::fixezDateStock,&de,std::ref(temp23),de.getCompaniaDePePoz(i+23));
        std::thread t24(&dataExtractor::fixezDateStock,&de,std::ref(temp24),de.getCompaniaDePePoz(i+24));
        std::thread t25(&dataExtractor::fixezDateStock,&de,std::ref(temp25),de.getCompaniaDePePoz(i+25));
        std::thread t26(&dataExtractor::fixezDateStock,&de,std::ref(temp26),de.getCompaniaDePePoz(i+26));
        std::thread t27(&dataExtractor::fixezDateStock,&de,std::ref(temp27),de.getCompaniaDePePoz(i+27));
        std::thread t28(&dataExtractor::fixezDateStock,&de,std::ref(temp28),de.getCompaniaDePePoz(i+28));
        std::thread t29(&dataExtractor::fixezDateStock,&de,std::ref(temp29),de.getCompaniaDePePoz(i+29));
        std::thread t30(&dataExtractor::fixezDateStock,&de,std::ref(temp30),de.getCompaniaDePePoz(i+30));
        std::thread t31(&dataExtractor::fixezDateStock,&de,std::ref(temp31),de.getCompaniaDePePoz(i+31));
        std::thread t32(&dataExtractor::fixezDateStock,&de,std::ref(temp32),de.getCompaniaDePePoz(i+32));
        std::thread t33(&dataExtractor::fixezDateStock,&de,std::ref(temp33),de.getCompaniaDePePoz(i+33));
        std::thread t34(&dataExtractor::fixezDateStock,&de,std::ref(temp34),de.getCompaniaDePePoz(i+34));
        std::thread t35(&dataExtractor::fixezDateStock,&de,std::ref(temp35),de.getCompaniaDePePoz(i+35));
        std::thread t36(&dataExtractor::fixezDateStock,&de,std::ref(temp36),de.getCompaniaDePePoz(i+36));
        std::thread t37(&dataExtractor::fixezDateStock,&de,std::ref(temp37),de.getCompaniaDePePoz(i+37));
        std::thread t38(&dataExtractor::fixezDateStock,&de,std::ref(temp38),de.getCompaniaDePePoz(i+38));
        /*std::thread t39(&dataExtractor::fixezDateStock,&de,std::ref(temp39),de.getCompaniaDePePoz(i+39));
        std::thread t40(&dataExtractor::fixezDateStock,&de,std::ref(temp40),de.getCompaniaDePePoz(i+40));
        std::thread t41(&dataExtractor::fixezDateStock,&de,std::ref(temp41),de.getCompaniaDePePoz(i+41));
        std::thread t42(&dataExtractor::fixezDateStock,&de,std::ref(temp42),de.getCompaniaDePePoz(i+42));*/
        t1.join();t2.join();t3.join();t4.join();t5.join();t6.join();t7.join();t8.join();
        t9.join();t10.join();t11.join();t12.join();t13.join();t14.join();t15.join();t16.join();
        t17.join();t18.join();t19.join();t20.join();t21.join();t22.join();t23.join();t24.join();
        t25.join();t26.join();t27.join();t28.join();t29.join();t30.join();t31.join();t32.join();
        t33.join();t34.join();t35.join();t36.join();t37.join();t38.join();/*t39.join();t40.join();t41.join();t42.join();*/
        stocks.push_back(temp1);stocks.push_back(temp2);stocks.push_back(temp3);stocks.push_back(temp4);
        stocks.push_back(temp5);stocks.push_back(temp6);stocks.push_back(temp7);stocks.push_back(temp8);
        stocks.push_back(temp9);stocks.push_back(temp10);stocks.push_back(temp11);stocks.push_back(temp12);
        stocks.push_back(temp13);stocks.push_back(temp14);stocks.push_back(temp15);stocks.push_back(temp16);
        stocks.push_back(temp17);stocks.push_back(temp18);stocks.push_back(temp19);stocks.push_back(temp20);
        stocks.push_back(temp21);stocks.push_back(temp22);stocks.push_back(temp23);stocks.push_back(temp24);
        stocks.push_back(temp25);stocks.push_back(temp26);stocks.push_back(temp27);stocks.push_back(temp28);
        stocks.push_back(temp29);stocks.push_back(temp30);stocks.push_back(temp31);stocks.push_back(temp32);
        stocks.push_back(temp33);stocks.push_back(temp34);stocks.push_back(temp35);stocks.push_back(temp36);
        stocks.push_back(temp37);stocks.push_back(temp38);/*stocks.push_back(temp39)stocks.push_back(temp40);
        stocks.push_back(temp41);stocks.push_back(temp42);*/
        t1.~thread();t2.~thread();t3.~thread();t4.~thread();t5.~thread();t6.~thread();t7.~thread();t8.~thread();
        t9.~thread();t10.~thread();t11.~thread();t12.~thread();t13.~thread();t14.~thread();t15.~thread();t16.~thread();
        t17.~thread();t18.~thread();t19.~thread();t20.~thread();
        t21.~thread();t22.~thread();t23.~thread();t24.~thread();t25.~thread();t26.~thread();t27.~thread();t28.~thread();
        t29.~thread();t30.~thread();t31.~thread();t32.~thread();t33.~thread();t34.~thread();t35.~thread();t36.~thread();
        t37.~thread();t38.~thread();/*t39.~thread();t40.~thread();t41.~thread();t42.~thread();*/
        
    }
}


VariableHolder::~VariableHolder(){
    exit(EXIT_FAILURE);
}



Strategy& VariableHolder::getStrategy(){
    return strategy;
}

void VariableHolder::completezStrategy(){
    strategy.completePicks(&stocks);
}






