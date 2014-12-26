#include <iostream>
using std::cout; using std::cerr; using std::endl;

#include <cstddef>
using std::size_t;

#include <stack>
using std::stack;

int main() {

	stack<int> istack;

	for(size_t i = 0; i != 10; i++) 
		istack.push(i);

	while(!istack.empty()) {
		int value = istack.top();
		cout << value << endl;
		istack.pop();
	}
	return 0;
}
