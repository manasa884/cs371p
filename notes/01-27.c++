// -----------
// Wed, 25 Jan
// -----------

/*
assertions are not good for testing
and they're not good for user errors

unit tests are good for testing
exceptions are good for user errors

let's explore what we can do in the absence of exceptions

three avenues of communication between functions:

1. return values
2. global variables
3. parameters

Java can only hold primitive types by value   (e.g. int, double)
Java can only hold composite types by address (e.g. ArrayList)

C++ can only hold primitive types or user types by value, by address, or by reference

for paramter passing to work in C++, we need an address or a reference, see below
*/

int f (..., int* h2) {
    ...
    if (<something wrong>) {
        *h2 = -1;
        return 0;}
    ...}

int g (...) {
    ...
    int h = 0;
    int i = f(..., &h);
    if (h == -1)
        <something wrong>
    ...}

int main () {
    ...
    g(...);
    ...
    return 0;}
