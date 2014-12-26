
#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::istream; using std::ostream; 
using std::cin; using std::cout; using std::endl;

#include <memory>
using std::make_shared; using std::shared_ptr;

#include "Foo.h"

shared_ptr<Foo> factory(T arg) {

	return make_shared<Foo>(arg);
}

shared_ptr<Foo> use_factory(T arg) {
	shared_ptr<Foo> p = factory(arg);
	print(cout, *p);
	cout << endl;

	return p;
}

int main() {

	T arg;
	while(cin >> arg) 
		use_factory(arg);

	return 0;
}
