#include <iostream>
using std::cout; using std::endl;

#include <memory>
using std::unique_ptr;

#include <string>
using std::string;

int main() {

	unique_ptr<string> p1(new string("Hello unqiue_ptr"));

	unique_ptr<string> p2(p1.release());
	if(p1 == NULL)
		cout << "now p1 is null" << endl;
	cout << "*p2: " << *p2 << endl;
	
	unique_ptr<string> p3(new string("text3"));
	p2.reset(p3.release());
	cout << "*p2: " << *p2 << endl;

	if(p3)
		cout << "p3 not null " << endl;
	
	return 0;
}
