#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main() {
	
	cout << "Input Score beteween 0 - 100 " << endl;
	vector<unsigned> scores(11, 0);
	unsigned grades;
	
	while(cin >> grades) {
		if(grades <= 100)
			++scores[grades / 10];
	}

	auto it = scores.begin();
	while(it != scores.end()) {
		cout << *it << "  ";
		it++;
	}
	return 0;
}
