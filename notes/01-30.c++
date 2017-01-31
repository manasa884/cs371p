// -----------
// Mon, 30 Jan
// -----------

int f (...) {
    ...
    if (<something wrong>)
        throw E(...);      // throw always copies what it throws
    ...}

int g (...) {
    ...
    try {
        ...
        int i = f(...);
        ...}
    catch (E& e) {      // always catch by reference
        ...}
    ...}

...
g(...)
...

// In Java

A x = new A(...);

// In C++

A x(...);
A* p = new A(...);

void f (int j) { // pass by value
    ++j;}

void g () {
    int i = 2;
    f(i);
    cout << i;} // 2

string s = "abc";
string t = "abc";
cout << (s == t);
cout << (s == "abc"); // ok
cout << ("abc" == s); // also ok

/*
option #1 there is an == with a C++ string on one side and a char* on the other

option #2 a c-string becomes a c++ string
*/

void f (string t) {
    ...}

void g () {
    string s = "abc";
    f(s);
    f("abc");} // ok!
