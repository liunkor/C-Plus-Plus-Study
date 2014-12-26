#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main() {

	string word;
	vector<string> text;
	
	while(cin >> word)
		text.push_back(word);
	
	auto w = text.begin();
	while(w != text.end()) {
		cout << *w << "  ";
		w++;
	}
	
	return 0;
}
