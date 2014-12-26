#include <string>
using std::string;

#include <vector>
using std::vector; 

#include <iostream>
using std::cout; using std::endl;

#include <set>
using std::multiset; using std::set;

int main() {

	vector<int> ivec;
	for(vector<int>::size_type i = 0; i != 10; i++) {
		ivec.push_back(i);
		ivec.push_back(i);
	}
	set<int> iset(ivec.cbegin(), ivec.cend());
	multiset<int> miset(ivec.cbegin(), ivec.cend());

	cout << ivec.size() << endl;
	cout << iset.size() << endl;
	cout << miset.size() << endl;

	auto it = iset.count(1);
	cout << it << endl;
	it = iset.count(11);
	cout << it << endl;

	it = miset.count(1);
	cout << it << endl;
	it = miset.count(11);
	cout << it << endl;

	set<string> set1;
	set1.insert("one");
	set1.insert("two");
	auto i1 = set1.begin();
	while(i1 != set1.end()) {
		cout << *i1 << " ";
		++i1;
	}
	cout << endl;

	ivec = {2,4,6,8,2,4,6,8};
	set<int> set2;
	set2.insert(ivec.cbegin(), ivec.cend());
	set2.insert({1,3,5,7,1,3,5,7});

	auto i2 = set2.begin();
	while(i2 != set2.end()) {
		cout << *i2 << " ";
		++i2;
	}
	cout << endl;


	return 0;
}
