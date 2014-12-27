#include <memory>
using std::allocator;

#include <iostream>
using std::cout; using std::endl; 

#include <string>
using std::string;

#include <fstream>
using std::ifstream;

#include <cstddef>
using std::size_t;

int main() {
	const size_t n = 100;
	allocator<string> alloc;
	auto p = alloc.allocate(n);

	auto q = p;
	alloc.construct(q++);
	cout << *(q - 1) << endl;

	alloc.construct(q++, 10, 'c');
	cout << *(q - 1) << endl;

	alloc.construct(q++, "hello allocator");
	cout << *(q - 1) << endl;
	
	cout << *p << endl;

	while( q != p)
		alloc.destroy(--q);
	alloc.deallocate(p, n);

	p = alloc.allocate(n);
	string s;
	q = p;
	ifstream in("./DataFile");
	while(in >> s && q != p + n) 
		alloc.construct(q++, s);
	
	size_t size = q - p;
	cout << "readed " << size << " strings " << endl;

	for(q = p + size - 1 ; q != p; --q)
		alloc.destroy(q);
	alloc.deallocate(p, n);
	
	in.close();
	in.open("./DataFile");
	p = new string[n];
	q = p;

	while(in >> s && q != p + n)
		*q++ = s;
	size = q - p;
	cout << " readed " << size << " strings " << endl;

	delete []p;

	return 0;
}
