#include <cstddef>
using std::size_t;

#include <stack>
using std::stack;

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

int main() {
	
	stack<int> intstack;

	for(size_t ix = 0; ix != 10; ++ix)
		intstack.push(ix);

	while(!intstack.empty()) {
		int value = intstack.top();
		cout << value << "  ";
		intstack.pop();
	}
	cout << endl;
	return 0;
}

