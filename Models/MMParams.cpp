//
// Created by Mensah Shadrach on 06/12/2018.
//

#include "MMParams.h"
#include "../Symbols/MMSymbols.h"

MMParams::MMParams(StringArray pkeys, String name, String type):paramName(name), prekeys(pkeys),type(type) {}


String MMParams::outPut(){
    String out =  paramName + __TKN_COLON;

    for(String key:prekeys){
        out += key + __SPACE_;
    }

    out += type;
    return  out;
}

String MMParams::getParamName() {
    return  paramName;
}
