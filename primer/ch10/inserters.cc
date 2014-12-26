#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

#include <algorithm>
using std::copy;

#include <list>
using std::list;

#include <iterator>
using std::inserter; using std::front_inserter;

void print(const string &label, const list<int> &lst) {
	cout << label << endl;
	for(auto it : lst) 
		cout << it << " ";
	cout << endl;
}

int main() {
	list<int> lst = {1, 2, 3, 4};
	print("lst", lst);

	list<int> lst2, lst3;
	copy(lst.cbegin(), lst.cend(), front_inserter(lst2));

	copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.begin()));
	print("lst2", lst2);
	print("lst3", lst3);

	vector<int> v = {1,2,3,4,5};
	list<int> new_lst = {6,7,8,9};
	auto it = new_lst.begin();
	copy(v.begin(), v.end(), inserter(new_lst,it));
	print("new_lst", new_lst);

	return 0;

}
