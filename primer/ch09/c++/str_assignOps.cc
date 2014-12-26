#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

int main() {
	
	string s = "some string", s2 = "some other string";
	s.insert(s.begin(), s2.begin(), s2.end());
	cout << "insert iterators version: " << s << endl;

	s = "some string";
	s.insert(0, s2);
	cout << "insert string at given pos: " << s << endl;

	s = "some string";
	s.insert(0, s2, 0, s2.size());
	cout << "insert postitional version: " << s << endl;

	s = " ";
	vector<char> vec(1, 'a');
	s.insert(s.begin(), vec.begin(), vec.end());
	s.insert(s.size(), 5, '!');
	cout << s << endl;

	s.erase(s.size() -5, 5);
	cout << s << endl;

	s = "";
	const char *cp = "stately, plump buck";
	s.assign(cp, 7);
	cout << s << endl;
	s.insert(s.size(), cp + 7);
	cout << s << endl;

	s = "C++ primer";
	s2 = s;
	s.insert(s.size(), " 4th Ed. ");
	s2.append(" 4th Ed.");
	cout << s << " " << s2 << endl;

	s.erase(11,3);
	s.insert(11,"5th");

	s2.replace(11,3,"5th");
	cout << s << " " << s2 << endl;
	s.replace(11, 3, "Fifth");

	auto pos = s2.find("5th");
	if(pos != string::npos)
		s2.replace(pos, 3, "Fifth");
	else
		cout << "something's wrong, s2 is: " << s2 << endl;
	cout << s << " " << s2 << endl;


	return 0;
}
