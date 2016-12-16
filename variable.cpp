#include <form.h>

//
// Created by jetbrains on 16/12/16.
//
#define DEF 1;

///types

typedef  int typedef_type;
using using_type = char;


typedef_type typedef_var = 100;
using_type using_var = '1';


///variables
int define_var = DEF;
int global;
const int constint = 0;
const volatile int CV_var = 1;
auto auto_var = 1;

namespace namesp{
    int insideof_namespace;
}

int func(int param){
    int insideof_func;
}

struct cl{
    int insideof_class;
};

int main_func(){
    global=0;
    namesp::insideof_namespace=1;
    func(2);
    cl cl1;
    cl1.insideof_class=3;
}