#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

	string s;
    getline(cin, s);

	for(decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);
	cout << s << endl;
	return 0;
}
