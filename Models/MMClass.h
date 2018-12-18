//
// Created by Mensah Shadrach on 30/11/2018.
//

#ifndef MODELMAKER_MMCLASS_H
#define MODELMAKER_MMCLASS_H


#include <string>
#include "MMProperties.h"
#include "MMParams.h"


class MMClass {
public:
    MMClass(std::string name, std::string super, std::string accessor,std::vector<std::string> protocols);
    void addProps(std::string expression);
    MMClass();
    std::string outputToFile();

private:
    std::string className;
    std::string super;
    std::string accessor;
    std::vector<std::string> protocols;
    std::vector<MMProperties> props;


    std::string def_classHeader();

    String def_init();

    std::vector<MMParams> makeParams();
};


#endif //MODELMAKER_MMCLASS_H
