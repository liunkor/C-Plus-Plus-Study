#include <iostream>
using std::cout; using std::endl;

#include <memory>
using std::shared_ptr; using std::unique_ptr;

int main() {
	unique_ptr<int[]> up(new int[10]);
	for(size_t i = 0; i != 10; ++i) {
		up[i] = i;
		cout << up[i] << "  ";
	}
	cout << endl;
	up.release();

	shared_ptr<int> sp(new int[10], [](int *p) { delete [] p;});
	for(size_t i = 0; i != 10; ++i) {
		*(sp.get() + i) = i;
		cout << *(sp.get() + i) << "  ";
	}
	cout << endl;
	sp.reset();
	return 0;
}
