#include <string>
using std::string; 
#ifndef STRING_NUMERIC_CONVS
using std::stod; using std::to_string;
#endif

#include <iostream>
using std::cout; using std::endl;

int main() {

	int i = 109;
	string s = to_string(i);
	double d = stod(s);
	cout << " i = " << i << " s = " << s << " d is: " << d << endl;

	string s2 = "pi : 3.14abcdef";
	d = stod(s2.substr(s2.find_first_of("+-.0123456789")));
	cout << " d = " << d << endl;
	return 0;
}
