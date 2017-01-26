// -----------
// Wed, 25 Jan
// -----------

/*
Unit tests represent white-box testing.
Acceptance tests represent black-box testing.

Collatz.c++ represents the kernel of the solution.
RunCollatz.c++ is the run harness.
TestCollatz.c++ is the test harness.

Combine Collatz.c++ and RunCollatz.c++ into a separate file to then send to HackerRank.

Collatz.c++ needs to abstract where input is coming from and where output is going to.

cin is of type istream.
cout is of type ostream.
istringstream is a subclass of istream.
ostringstream is a subclass of ostream.

So, RunCollatz.c++ provides cin and cout, and
TestCollatz.c++ provides an istringstream and an ostringstream object.

ostringstream.str() retrieves the C++ string that is inside of the ostringstream object.

The solution to the Collatz problem is best structured as a read-eval-print-loop (REPL).

You can use "_" as a variable name, when you don't need the value of the variable.
*/
