#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {

	string s("hello c++ primer!!!");
	decltype (s.size()) punct_cnt = 0;
	for(auto c : s)
		if(ispunct(c))
			punct_cnt++;
	cout << punct_cnt << "  " << s << endl;

	string str;
	cin >> str;
	for(auto &c : str)
		c = toupper(c);
	cout << str << endl;
	return 0;
}
