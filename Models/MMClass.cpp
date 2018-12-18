//
// Created by Mensah Shadrach on 30/11/2018.
//

#include <vector>
#include <sstream>
#include "../__HEADERS.h"
#include "../Utils/MMUtils.h"
#include "MMClass.h"
#include "MMInitializer.h"
#include <boost/algorithm/string.hpp>
#include <iostream>

MMClass::MMClass(std::string name, std::string super, std::string accessor,std::vector<std::string> protocols) {

    className = name;
    MMClass::super = super;
    MMClass::accessor = accessor;
    MMClass::protocols = protocols;
}

void MMClass::addProps(std::string expression) {
    std::vector<std::string> exprss = split(expression, (const char &) ",");


    for (auto i:exprss) {
        std::string name = "";
        std::string file_accessor = "v";
        std::string i_type = "a";

        boost::trim(i);
        std::vector<std::string> cmds = split(i, (const char &) " ");

        if (!cmds.empty()){

            name = cmds[0];
            if (cmds.size() > 1)i_type = cmds[1];
            StringArray axx = StringArray();
            for (std::string ax:cmds){
                if (ax != name && ax != i_type ){
                    axx.push_back(ax);
                }
            }
            MMProperties prop = MMProperties(name,i_type,axx);
            props.push_back(prop);

        }else{
            //throw Error
        }



    }
}

std::string def_classInfo(){

    return __CMD_IMP_FOUNDATION + __TKN_CG_RET;
}


std::string MMClass::def_classHeader(){
    std::string header;
    if (className != ""){
        header =  __TKN_CG_RET + accessor + __SPACE_ +
        __KW_CLASS + __SPACE_ + className;

    }else{

    }

    if (!protocols.empty()){
        header += __TKN_COLON ;
        for (std::string sup : protocols){
            header +=  sup + __TKN_CMMA;
        }

        header.erase(header.size() - 1);

    }


    return header + __TKN_OPEN_CBRACE;
}

std::string MMClass::outputToFile() {
    std::string out = "\n";
    for (int j = 0; j < props.size() ; ++j) {
        MMProperties prop = props[j];
        out +=  "\n" + prop.outPut() + "\n";
    }


    std::string aclass = def_classInfo() + def_classHeader() + __TKN_CG_RET + __TKN_TAB
            + out  + __TKN_CG_RET + def_init()+ __TKN_CG_RET + __TKN_CL_CBRACE;

    return  aclass;
}

String MMClass::def_init(){

    MMInitializer init = MMInitializer("",makeParams());
    return init.outPut();
}

std::vector<MMParams> MMClass::makeParams(){

    std::vector<MMParams> c = std::vector<MMParams>();
    for (MMProperties prop:props){
        MMParams param = MMParams(StringArray(), prop.getName(),prop.getType());
        c.push_back(param);
    }

    return c;
}

MMClass::MMClass() {}


/**
 * Class Synthesis:
 * Posible class Headers
 * [className  -s[AnyClass+Delegates+] -in*/
