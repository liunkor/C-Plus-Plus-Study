#include <iostream>
using std::cin;
using std::endl;
using std::cout;

#include <fstream>
using std::ifstream;

#include <vector>
using std::vector;

#include <string>
using std::string;

void process(ifstream &is ) {
	string s;
	while(is >> s) 
		cout << s << endl;
}

int main() {

	vector<string> files;
	string s = "./ifstream01.cc";
	//while((cin >> s) != "end") 
		files.push_back(s);

	vector<string>::const_iterator it = files.begin();
	ifstream input;
	while(it != files.end()) {
		ifstream input(it->c_str());
		if(!input)
			break;
		process(input);
		++it;
	}
	return 0;
}
