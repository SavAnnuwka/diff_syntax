

#include <string>
///return different
int return_int(){};


///with default param
void foo_with_default_param(int a, int b = 0);
void foo_with_default_param(int a, int b) {}


///with unnamed parameter
void foo_with_unnamed_param(int, char) {};
void foo_with_unnamed_default_param(int, std::string= "aaa") {};



///friend
class class_for_friend{
    friend void func_friend();
};

void func_friend() {
}


///pure virtual/default/deleted
class Helper{
public:
    virtual  void virt(){};
    virtual  void pure_virt()=0;
    Helper()= default;
    virtual void delete_func()= delete;
   void func_const() const{};
    virtual void func_final() final{};
    void func_noexp () noexcept(1){}
};


///override
class inherit : Helper{
    void virt() override {
        Helper::virt();
    }

    void pure_virt() override {

    }

};

///auto retirn (C++14)
auto auto_func (int arg) -> double (*)(double){}

///constructors

////////////////////////////////////////////////////////
///template
template<class T>
void simple_template(T) {}

///instalation
template void simple_template<int>(int);

template void simple_template(char);

template<class T>
void explicit_spec(T t) {};

///Explicit specialization of f with 'char'
/// with the template argument explicitly specified
template<>
void explicit_spec<char>(char c) {}

///Explicit specialization of f with 'double'
/// with the template argument deduced
template<>
void explicit_spec(double d) {};

///Partial Ordering of Function Templates
template<class T>
void part_ord(T) {};

template<class T>
void part_ord(T *) {};

template<class T>
void part_ord(const T *) {};


struct X {
    template<class T>
    void member_func(T t) {}
};





///call all func
void call_all_func() {

    X x;
    int *a;
    const int *b;
    int c= return_int();
    foo_with_default_param(1);
    foo_with_default_param(1, 2);
    foo_with_unnamed_param(1, 'a');
    foo_with_unnamed_default_param(2);

    simple_template(2.0);
    simple_template(1); //instalation1
    simple_template('1'); //instalation2

    explicit_spec<int>(1); //template
    explicit_spec<char>('1'); //explicit char
    explicit_spec(1.1); //explicit double

    part_ord(1); //part 1
    part_ord(a); //part 2
    part_ord(b); //part 2

    x.member_func(1);

   func_friend();

}