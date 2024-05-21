#pragma once
#include <iostream>
#include "MyEx.h"
class shape {
protected:
    std::string name;
    int countsides;

public:
    shape();
    virtual void print_info();
      
    



};