//
//  Company.cpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 15/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#include "Company.hpp"


void Company::setSymbol(std::string *symbol){
    if(symbol != NULL && symbol->size() != 0)
        this->symbol = *symbol;
}
void Company::setcompanyName(std::string *companyName){
    if(companyName != NULL && companyName->size() != 0)
        this->companyName = *companyName;
}
void Company::setexchange(std::string *exchange){
    if(exchange != NULL && exchange->size() != 0)
        this->exchange = *exchange;
}
void Company::setindustry(std::string *industry){
    if(industry != NULL && industry->size() != 0)
        this->industry = *industry;
}
void Company::setwebsite(std::string *website){
    if(website != NULL && website->size() != 0)
        this->website = *website;
}
void Company::setdescription(std::string *description){
    if(description != NULL && description->size() != 0)
        this->description = *description;
}
void Company::setCEO(std::string *CEO){
    if(CEO != NULL && CEO->size() != 0)
        this->CEO = *CEO;
}
void Company::setsector(std::string *sector){
    if(sector != NULL && sector->size() != 0)
        this->sector = *sector;
}

std::string Company::getSymbol(){
    return symbol;
}
std::string Company::getcompanyName(){
    return companyName;
}
std::string Company::getexchange(){
    return exchange;
}
std::string Company::getindustry(){
    return industry;
}
std::string Company::getwebsite(){
    return website;
}
std::string Company::getdescription(){
    return description;
}
std::string Company::getCEO(){
    return CEO;
}
std::string Company::getsector(){
    return sector;
}
