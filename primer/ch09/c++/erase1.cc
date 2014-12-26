#include <algorithm>
using std::find;

#include <string>
using std::string;

#include <list>
using std::list;

#include <vector>
using std::vector;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	list<string> slist;
	string s;
	
	for(int i = 0; i < 5; ++i) {
		cin >> s;
		slist.push_back(s);
	}

	auto iter = find(slist.begin(), slist.end(), "abc");
	if(iter != slist.end())
		slist.erase(iter);

	auto orig = slist;
	slist.clear();
	cout << "after clear, size : " << slist.size() << endl;

	slist = orig;
	slist.erase(slist.begin(), slist.end());
	cout << "after erase begin to end, size: " << slist.size() << endl;

	slist = orig;
	auto elem1 = slist.begin(), elem2 = slist.end();
	elem1 = slist.erase(elem1,elem2);
	cout << "after erase elem1 to elem2 size: " << slist.size() << endl;

	if(elem1 != elem2)
		cout << "somethings wrong" << endl;
	else
		cout << "okay, they're equal" << endl;

	return 0;
}
