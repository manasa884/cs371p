// -----------
// Mon, 30 Jan
// -----------

int f (...) {
    ...
    if (<something wrong>)
        throw H(...);      // throw always copies what it throws
    ...}

int g (...) {
    ...
    try {
        ...
        int i = f(...);
        ...}
    catch (E& e) {
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

{
    int i = 2;
}

void f (int j) {
    ++j;}

int g () {
    int i = 2;
    f(i);
    cout << i; // 2

string s = "abc";
string t = "abc";
cout << (s == t);
cout << (s == "abc");

option #1 there is an == with a C++ string on one side and a char* on the other

option #2 the c-string becomes a c++ string

void f (string t) {
    ...}

void g () {
    f("abc"); // not ok
    string s = "abc";
    f(s);















