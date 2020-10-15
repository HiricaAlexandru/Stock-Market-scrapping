///clasa contine informatii generale despre companie
///stock/aapl/company

#ifndef Company_hpp
#define Company_hpp

#include <string>
#include <iostream>


class Company{
private:
    std::string symbol;
    std::string companyName;
    std::string exchange;
    std::string industry;
    std::string website;
    std::string description;
    std::string CEO;
    std::string sector;
    
public:
    void setSymbol(std::string *symbol);
    void setcompanyName(std::string *companyName);
    void setexchange(std::string *exchange);
    void setindustry(std::string *industry);
    void setwebsite(std::string *website);
    void setdescription(std::string *description);
    void setCEO(std::string *CEO);
    void setsector(std::string *sector);
    
    std::string getSymbol();
    std::string getcompanyName();
    std::string getexchange();
    std::string getindustry();
    std::string getwebsite();
    std::string getdescription();
    std::string getCEO();
    std::string getsector();
    
    
};


#endif /* Company_hpp */
