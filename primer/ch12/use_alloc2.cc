#include <memory>
using std::allocator; using std::uninitialized_copy;
using std::uninitialized_fill_n;

#include <vector>
using std::vector;

#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include <cstddef>
using std::size_t;

int main() {

	vector<int> vi{1,2,3,4,5,6,7,8,9};

	allocator<int> alloc;
	auto p = alloc.allocate(vi.size() * 2);
	auto q = uninitialized_copy(vi.begin(), vi.end(), p);

	uninitialized_fill_n(q, vi.size(), 42);

	for(size_t i = 0; i != vi.size(); ++i)
		cout << *(p + i) << " ";
	cout << endl;
	for(size_t i = 0; i != vi.size(); ++i) 
		cout << *(q + i) << " ";
	cout << endl;

	return 0;
}
