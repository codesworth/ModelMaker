//
// Created by Mensah Shadrach on 06/12/2018.
//

#ifndef MODELMAKER_MMPARAMS_H
#define MODELMAKER_MMPARAMS_H

#include "../__HEADERS.h"

class MMParams {

private:
    StringArray prekeys;
    String paramName;
    String type;

public:
    MMParams(StringArray pkeys,String name, String type);
    MMParams();
    String getParamName();
    String outPut();
};


#endif //MODELMAKER_MMPARAMS_H
