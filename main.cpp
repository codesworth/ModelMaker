#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <map>
#include <boost/archive/text_iarchive.hpp>
#include <sstream>
#include "Models/MMClass.h"
#include "Parsers/MMParser.h"


using std::cout;
using std::cin;
using std::string;
using std::endl;
namespace fs = boost::filesystem;
//using namespace boost::filesystem;

bool verifyCC(std::string cmds){

    if (cmds == "cc"){

    }else{
        cout << "Please enter 'cc' command to create Swift Model class" << endl;
        std::cin >> cmds;
        verifyCC(cmds);
    }
}

int main(int argc, char* argv[])
{
    std::string cmds = "";
    cout << "Hello Welcome to Model Maker, What will you like to make Today" << std::endl;
    getline (cin,cmds);
    verifyCC(cmds);
    std::string class_directive;
    cout << "Enter name of class you will like to create: \n" << endl;
    getline(cin,class_directive);


    MMClass cls = MMParser().parseClassDirectives(class_directive) ;
    cout << "Class created, Add some class properties with directives" << endl;
    std::string propscl;

    std::getline(cin,propscl);

    cout << "The props are: " << propscl << endl;
    cls.addProps(propscl);
    std::ofstream myfile;
    myfile.open("test.swift");
    myfile << cls.outputToFile() ;
    myfile.close();
    cout << cls.outputToFile() << endl;

    return 0;


}

