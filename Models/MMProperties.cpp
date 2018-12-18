//
// Created by Mensah Shadrach on 30/11/2018.
//

#include "MMProperties.h"
#include "../Symbols/MMSymbols.h"


MMProperties::MMProperties(std::string name, std::string type, StringArray acessor) {
   MMProperties::name = std::move(name);
    MMProperties::accessors = std::move(acessor);
    MMProperties::type = type;



}

std::string MMProperties::outPut() {
    std::string as = __KW_VAR;
    std::string fas = "";
    std::string output =  __TKN_TAB;
    if (accessors.empty()){
        output+= __ACCESS_PUBLIC + __SPACE_ ;
    }else{

         fas = parseAccesors(accessors[0]);
        if(accessors.size() > 1) as = parseAccesors(accessors[1]);

    }

    if (as == fas){
        return output + as  + __SPACE_ + name + ":" + parseType();
    }else{
        return  output + fas + __SPACE_ + as + __SPACE_ + name + ":" + parseType();
    }




}

std::string MMProperties::parseAccesors(std::string acc) {


    if (acc == "l" || acc == "L"){
        return __KW_LET;

    }else if (acc == __DIRECTIVE_PRIVATE){
         return __ACCESS_PRIVATE ;
    }else if (acc == __DIRECTIVE_FILEPRIVATE){
        return __ACCESS_FLPRIVATE;
    }else if (acc == __DIRECTIVE_PRIVATE_SET){
        return  __ACCESS_PUBLIC + __SPACE_ + __ACCESS_PRIVATE + __SPACE_ + __ACCESS_SET
                  + __SPACE_;

    }
    else{
        return  __KW_VAR;
    }
}

std::string MMProperties::parseType() {

    if (type == "s" || type == "S"){
        return __TYPE_STRING;
    }else if (type == "i" || type == "I"){
        return  __TYPE_INT;
    }else if (type == "b" ||type == "B"){
        return  __TYPE_BOOL;
    } else if (type == "d" ||type == "D"){
        return  __TYPE_DOUBLE;
    }else{
        if (type.size() > 3){
            return type;
        }
        return __TYPE_NS_ANY;
    }
}

String MMProperties::getName() {
    return  name;
}

String MMProperties::getType() {
    return  type;
}



/**
 * Possible syntax formats for swift variables
 * 1. Public all access variables [public var name:SwiftType]
 * Command directives -> [name type] || [name type v||l ]
 *
 * 2.Private || File Private No Access Outside Class
 * Command Directives -> [name type -p||-f] || [name type  v||l -p||-f]
 *
 *3.Public Getter Private Set [public private (set) name:SwiftType]
 * Command Directives -> [name type -ps] || [name type v|| l -ps]
 *
 * */

