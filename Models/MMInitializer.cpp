//
// Created by Mensah Shadrach on 06/12/2018.
//

#include "MMInitializer.h"
#include "../Symbols/MMSymbols.h"

MMInitializer::MMInitializer(String key, std::vector<MMParams> params, String ret):preKey(key),allparams(params) {}



String MMInitializer::outPut(){
    return init_header() + init_body();
}


String MMInitializer::init_header(){

    String head = __TKN_TAB + __KW_INIT + __TKN_BRACKET_OPEN;;

    for(MMParams param:allparams){
        head += param.outPut() + __TKN_CMMA;
    }

    head.erase(head.size() - 1,1);

    head += __TKN_BRACKET_CLOSE + __TKN_OPEN_CBRACE;

}

String MMInitializer::init_body(){

    String body = "";
    for(MMParams param:allparams){
        body += __TKN_TAB + __TKN_TAB +
                __KW_SELF + __TKN_PERIOD +
                param.getParamName() + __SPACE_ +
                __TKN_ASSIGN + __SPACE_ +
                param.getParamName() + __TKN_CG_RET + __TKN_OPEN_CBRACE;
    }
}