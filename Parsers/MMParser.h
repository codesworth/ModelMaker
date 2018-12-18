//
// Created by Mensah Shadrach on 02/12/2018.
//

#ifndef MODELMAKER_CLASSPARSER_H
#define MODELMAKER_CLASSPARSER_H

#include <vector>
#include <string>
#include "../Models/MMClass.h"

using std::vector;
using std::string;

class MMParser {

public:
    MMClass parseClassDirectives(string cmds);

    std::vector<string> parseProtocols(string protocols);
};


#endif //MODELMAKER_CLASSPARSER_H
