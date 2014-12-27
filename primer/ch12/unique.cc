#include <string>
using std::string;

#include <iostream>
using std::ostream; using std::cin; using std::cout; using std::endl;

#include <memory>
using std::shared_ptr;

int main() {

	shared_ptr<string> p(new string("hello unique"));
	shared_ptr<string> p2(p);
	string newVal(" append!");

	if(!p.unique())
		p.reset(new string(*p));
	*p += newVal;

	cout << *p << " *** " << *p2 << endl;
	return 0;
}
