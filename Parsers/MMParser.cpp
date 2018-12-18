//
// Created by Mensah Shadrach on 02/12/2018.
//

#include "MMParser.h"
#include "../Utils/MMUtils.h"
#include <boost/algorithm/string.hpp>
#include <iostream>



std::string fileAccessor(std::string acess){
    if (acess == "f" || "F"){
        return __ACCESS_PUBLIC;
    }else if (acess == "v" || "V"){
        return  __ACCESS_FLPRIVATE;
    }if (acess == "o" || "v"){

        return  __ACCESS_OPEN;
    }else {
        return __ACCESS_PUBLIC;
    }
}


MMClass MMParser::parseClassDirectives(string cmds) {
    std::vector<string> protocols;
    std::string classAccess = "";
    std::vector<string> dirs = split(cmds, (const char &) " ");
    if (dirs.empty()){
        //throw error
    }else{
        std::string classNmae = dirs[0];
        if (dirs.size() > 1){

            std::string proto = dirs[1];
            protocols = parseProtocols(proto);
            if (dirs.size() > 2){
                classAccess = fileAccessor(dirs[3]);
            }

            return MMClass(classNmae,protocols[0],classAccess,protocols);

        }else{
            return MMClass(classNmae,"",__ACCESS_PUBLIC,std::vector<string>());
        }
    }

    return MMClass();

}


std::vector<string> MMParser::parseProtocols(string protocols) {
    boost::trim(protocols);
    protocols.erase(0,1);
    std::cout << "Thos is the rmeianing : " << protocols << std::endl;
    protocols.erase(0,1);
    std::cout << "Thos is the rmeianing : " << protocols << std::endl;
    boost::erase_all(protocols,"[");
    boost::erase_all(protocols,"]");
    std::vector<string> protos = split(protocols,(const char &)"+");
    return protos;


}



