#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	const string hexdigits = "0123456789ABCDEF";
	cout << "Input a number between 0 and 15: ";
	string result;
	string::size_type n;
	while(cin >> n) {
		if(n < hexdigits.size())
			result +=hexdigits[n];
		else 
			result += " ";
	}
	cout << result << endl;
	return 0;
}
