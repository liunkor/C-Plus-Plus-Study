#include <iostream>
using std::cin;
using std::cout;
using std::flush;
using std::istream;
using std::cerr;

#include <stdexcept>
using std::runtime_error;

int main() {
	int val;
	bool flag = false;
	while(cin >> val, !cin.eof()) {
		if(cin.bad())
			throw runtime_error("IO stream corrupted");
		if(cin.fail()) {
			cerr << "bad data, try again";
			cin.clear(istream::failbit);
			flag = true;
		}
		if(flag)
			continue;
		cout << val ;
	}
	cout << flush;
	
}
