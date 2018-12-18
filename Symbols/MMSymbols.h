//
// Created by Mensah Shadrach on 30/11/2018.
//

#ifndef MODELMAKER_CONSTANTS_H
#define MODELMAKER_CONSTANTS_H

#include <string>
#include <vector>


extern std::string fileAccessor(std::string acess);
extern std::string __KW_SELF;
extern std::string __KW_LET;
extern std::string __KW_VAR;
extern std::string __TYPE_STRING;
extern std::string __TYPE_INT;
extern std::string __TYPE_BOOL;
extern std::string __TYPE_DOUBLE;
extern std::string __TYPE_NS_ANY;
extern std::string __ACCESS_PUBLIC;
extern std::string __ACCESS_PRIVATE;
extern std::string __ACCESS_SET;
extern std::string __ACCESS_FLPRIVATE;
extern std::string __ACCESS_OPEN;
extern std::string __SPACE_;
extern std::string __KW_CLASS;
extern std::string __TKN_OPEN_CBRACE;
extern std::string __TKN_CL_CBRACE;
extern std::string __TKN_TAB;
extern std::string __TKN_CG_RET;
extern std::string __CMD_IMP_FOUNDATION;
extern std::string __TKN_COLON;
extern std::string __TKN_CMMA;
extern std::string __DIRECTIVE_PRIVATE;
extern std::string __DIRECTIVE_FILEPRIVATE;
extern std::string __DIRECTIVE_PRIVATE_SET;
extern std::string __DIRECTIVE_SUP_PROTO;
extern std::string __KW_INIT;
extern std::string __TKN_BRACKET_OPEN;
extern std::string __TKN_BRACKET_CLOSE;
extern std::string __TKN_PERIOD;
extern std::string __TKN_ASSIGN;

//AFPViewRemover -s[AVFoundations+NSObjectProtocol+UINavigtionProtocol] o


//#include <algorithm>
//#include <functional>
//#include <cctype>
//#include <locale>
//
//// trim from start (in place)
//static inline void ltrim(std::string &s) {
//    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
//                                    std::not1(std::function<int, int>(std::isspace))));
//}
//
//// trim from end (in place)
//static inline void rtrim(std::string &s) {
//    s.erase(std::find_if(s.rbegin(), s.rend(),
//                         std::not1(std::function<int, int>(std::isspace))).base(), s.end());
//}
//
//// trim from both ends (in place)
//static inline void trim(std::string &s) {
//    ltrim(s);
//    rtrim(s);
//}
//
//// trim from start (copying)
//static inline std::string ltrim_copy(std::string s) {
//    ltrim(s);
//    return s;
//}
//
//// trim from end (copying)
//static inline std::string rtrim_copy(std::string s) {
//    rtrim(s);
//    return s;
//}
//
//
//// trim from both ends (copying)
//static inline std::string trim_copy(std::string s) {
//    trim(s);
//    return s;
//}



#endif //MODELMAKER_CONSTANTS_H
