#include <iostream>
using std::cin; using std::cout; using std::endl; 

#include <algorithm>
using std::find;

#include <vector>
using std::vector;

#include <iterator>
using std::istream_iterator; using std::ostream_iterator;

int main() {
	vector<int> vec;
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;

	while(in_iter != eof)
		vec.push_back(*in_iter++);
	
	ostream_iterator<int> out_iter(cout, " ");
	copy(vec.begin(), vec.end(), out_iter);
	cout << endl;

	for(auto e : vec)
		*out_iter++ = e;
	cout << endl;
	return 0;

}
