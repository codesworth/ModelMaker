cmake_minimum_required(VERSION 3.9)
project(ModelMaker)

set(CMAKE_CXX_STANDARD 17)



#BOOST
#set(boost_min_ver 1.50.0)
#set(boost_libs system filesystem)
#find_package(Boost ${boost_min_ver})
FIND_PACKAGE(Boost COMPONENTS filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(ModelMaker main.cpp Models/MMClass.cpp Models/MMClass.h Models/MMProperties.cpp Models/MMProperties.h Symbols/MMSymbols.h Utils/MMUtils.cpp Utils/MMUtils.h Parsers/MMParser.cpp Parsers/MMParser.h Symbols/MMSymbols.cpp Models/MMInitializer.cpp Models/MMInitializer.h Models/MMParams.cpp Models/MMParams.h __HEADERS.h Lexers/BaseLexer.cpp Lexers/BaseLexer.h)
target_link_libraries(ModelMaker ${Boost_FILESYSTEM_LIBRARY})
add_definitions(-DBOOST_ERROR_CODE_HEADER_ONLY)


