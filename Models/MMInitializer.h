//
// Created by Mensah Shadrach on 06/12/2018.
//

#ifndef MODELMAKER_MMINITIALIZER_H
#define MODELMAKER_MMINITIALIZER_H

#include "../__HEADERS.h"
#include "MMParams.h"

class MMInitializer {

private:
    MMInitializer(String key, std::vector<MMParams> params, String ret);

    String preKey;
    std::vector<MMParams> allparams;
//    String ret_type;

public:
    MMInitializer(String key,std::vector<MMParams> params);


    String init_header();

    String outPut();

    String init_body();
};


#endif //MODELMAKER_MMINITIALIZER_H
