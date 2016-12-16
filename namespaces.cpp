//
// Created by jetbrains on 16/12/16.
//

///main namespace
namespace mainnamesp{
    void foo_from_main_namesp(){};
    namespace nested{
        void foo_from_main_nested(){};
        namespace {
            void foo_from_main_unnamed(){};

        }
    }
}

int func1(){

    using namespace mainnamesp;
    foo_from_main_namesp();
   // foo_from_main_nested(); -error
   //  foo_from_main_unnamed(); -error

};

int func2(){
    using namespace mainnamesp::nested;
 //   foo_from_main_namesp(); -error
    foo_from_main_nested();
    foo_from_main_unnamed();
}
