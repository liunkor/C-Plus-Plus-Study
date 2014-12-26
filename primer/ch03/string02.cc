#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	string line;
	while(getline(cin, line))
		if(line.size() > 10)
			cout << line << endl;
	return 0;
}
