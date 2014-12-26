
#include <algorithm>
using std::find;

#include <iterator>
using std::begin; using std::end;

#include <vector>
using std::vector;

#include <list>
using std::list;

#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

int main() {
	int ia[] = {27, 210, 12, 47, 109, 83};
	int val = 83;
	int * result = find(begin(ia), end(ia), val);
	cout << "the value " << val << (result == end(ia) ? " is not occured " : " is occured " ) << endl;
	
	result = find(ia + 1, ia + 4, val);
	cout << "the value " << val << (result == end(ia) ? " is not occured " : " is occured " ) << endl;

	vector<int> vec = {27, 210, 12, 47, 109, 83};
	val = 42;
	auto result2 = find(vec.cbegin(), vec.cend(), val);

	cout << " the value " << val
		 << (result2 == vec.end() ? " is not occured " : " is occured ") << endl;

	list<string> lst = {"val1", "val2", "val3"};

	string sval = "a value";

	auto result3 = find(lst.cbegin(), lst.cend(), sval);
	cout << " the value " << sval
		 << (result3 == lst.end() ? " is not present " : " is present " ) << endl;
	return 0;
}
