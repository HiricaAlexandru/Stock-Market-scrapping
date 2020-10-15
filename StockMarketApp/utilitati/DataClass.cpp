//
//  DataClass.cpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 15/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#include "DataClass.hpp"
#include <string.h>
#include <iostream>
Data::Data(int zi, int luna, int an){
    this->zi = zi;
    this->luna = luna;
    this->an = an;
}
Data::Data(){
    Data(1,1,1990);
}


Data::Data(std::string data){
    char a[30], *p;
    strcpy(a, data.c_str());
    an = atoi(a);
    
    p = strchr(a, '-');
    luna = atoi(p+1);
    
    p = strchr(p+1, '-');
    zi = atoi(p+1);
    

}

void Data::setZi(int zi){this->zi = zi;}
void Data::setLuna(int luna){this -> luna = luna;}
void Data::setAn(int an){this -> an = an;}

int Data::getZi(){return zi;}
int Data::getLuna(){return luna;}
int Data::getAn(){return an;}
