#include <iostream>
using std::cout; using std::endl;

#include <memory>
using std::shared_ptr; using std::weak_ptr; using std::make_shared;

int main() {

	auto p = make_shared<int> (100);

	weak_ptr<int> wp(p);

	p.reset();

	if(shared_ptr<int> np = wp.lock()) {
		cout << *np << endl;
	//	cout << *wp << endl;  // 不能使用weak_ptr直接访问对象
	}
	cout << " Done!" << endl;

}
