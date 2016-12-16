
#include <ostream>

///anonymous
class {
    int a;
    int b;

    void foo();
} unnamed;




///Base with all generated methods
class Base {
    int a;
    int b;

    void foo() {};
public:
    Base(int a, int b) : a(a), b(b) {}

    virtual ~Base() {

    }

    int getA() const {
        return a;
    }

    int getB() const {
        return b;
    }

    bool operator==(const Base &rhs) const {
        return a == rhs.a &&
               b == rhs.b;
    }

    bool operator!=(const Base &rhs) const {
        return !(rhs == *this);
    }

    bool operator<(const Base &rhs) const {
        if (a < rhs.a)
            return true;
        if (rhs.a < a)
            return false;
        return b < rhs.b;
    }

    bool operator>(const Base &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Base &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Base &rhs) const {
        return !(*this < rhs);
    }

    friend std::ostream &operator<<(std::ostream &os, const Base &base) {
        os << "a: " << base.a << " b: " << base.b;
        return os;
    }


    ///nested class
    class Nested {

    };
    ///friend
    friend class X_friend;
};


///child
class Child : Base {
public:
    Child(int a, int b) : Base(a, b) {}
};


///struct
struct Struct {

};

///without body
struct S;

///typedef struct
typedef struct typedefStruct {

};

///union
union Union {

};

///local
int foo_for_local_class() {

    struct Local {

    };
}

///template
template<typename T, class S>
class Temp {

};

///default
template <typename  T=int , class Y= long >
class default_temp_class{

};


///second template
template<typename K, typename V, template<typename A> typename C>
class Map {
    C<K> key;
    C<V> value;
};

///Particular Specialization of class Templates (only classes)
template< typename T, typename S > class Particular_Spec {};
template< typename U > class Particular_Spec < int, U > {};


///Explicit Specialization of class Templates
template<class T> class Explicit_spec;
template<> class Explicit_spec <int> {};


///Explicit and implicit Instantion
template<class T> struct Inst {
    void f() {}
    void g(); // never defined
};
template struct Inst<double>; //explicit instantiation of Inst<double>
Inst<int> a; // implicit instantiation of Inst<int>


///variadics
template<class T, typename ...>
class Varisdic {

};

///template friend
class A {
    template<typename T>
    friend class B; // every B<T> is a friend of A

    template<typename T>
    friend void f(T) {} // every f<T> is a friend of A
};