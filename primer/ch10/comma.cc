#include <algorithm>
using std::find;

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main() {

	string line;
	getline(cin, line);

	auto comma = find(line.cbegin(), line.cend(), ',');
	cout << string(line.cbegin(), comma) << endl;

	auto rcomma = find(line.crbegin(), line.crend(), ',');
	cout << string(line.crbegin(), rcomma) << endl;

	cout << string(rcomma.base(), line.cend()) << endl;

	return 0;
}
