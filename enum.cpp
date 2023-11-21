// enum

enum color {
    red,
    yellow,
    green = 20,
    blue
};

//enum class
enum class altitude: char {
    high = 'h',
    low = 'l',
    // trailing comma only allowed after CWG 518
};

// unnamed
enum {
    d,
    e,
    f = e + 2
};

//enum struct  - since C++11
enum struct E11 { x, y };

//local enum  -  OK in pre-C++11
struct E98 {
    enum { x, y };
};

