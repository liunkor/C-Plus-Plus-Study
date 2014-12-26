#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::cout; using std::endl;

int main() {

	string s = "some string", s2 = "some other string";

	s.insert(s.begin(), s2.begin(), s2.end());
	cout << s << endl;

	s = "some string";
	s.insert(0, s2);
	cout << s << endl;

	s = "some thing";
	s.insert(0, s2, 0, s2.size());
	cout << s << endl;
	return 0;
}
