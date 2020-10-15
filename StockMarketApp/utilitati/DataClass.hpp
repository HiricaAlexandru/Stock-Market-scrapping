//
//  DataClass.hpp
//  stockMarketapp-0.01
//
//  Created by Alexandru Hirica on 15/01/2019.
//  Copyright © 2019 Vesca. All rights reserved.
//

#ifndef DataClass_hpp
#define DataClass_hpp

#include <string>

class Data{
private:
    int zi;
    int luna;
    int an;
    
public:
    Data(int zi, int luna, int an);
    Data();
    Data(std::string data); ///yyyy-mm-dd
    void setZi(int zi);
    void setLuna(int luna);
    void setAn(int an);
    
    int getZi();
    int getLuna();
    int getAn();
    
};

#endif /* DataClass_hpp */
