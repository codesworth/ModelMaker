//
// Created by Mensah Shadrach on 30/11/2018.
//

#ifndef MODELMAKER_MMPROPERTIES_H
#define MODELMAKER_MMPROPERTIES_H

#include <string>
#include "../Symbols/MMSymbols.h"
#include "../__HEADERS.h"


class MMProperties {
private:
    std::string name;
    StringArray accessors;
    std::string type;


public:
    MMProperties(std::string name, std::string type, StringArray acessor);
    std::string outPut();
    std::string parseAccesors(std::string acc);
    std::string parseType();
    String getName();


    String getType();
};


#endif //MODELMAKER_MMPROPERTIES_H
