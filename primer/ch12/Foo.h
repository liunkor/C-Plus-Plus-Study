#ifndef FOO_H
#define FOO_H

#include <iostream>
using std::ostream;

typedef int T;

struct Foo {
	Foo(T t) : val(t) {}
	T val;
};

ostream & print(ostream & os, const Foo &f) {
	os << f.val;
	return os;
}

#endif
