#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

void printVec(vector<int> &vec) {
	auto iter = vec.begin();
	while(iter != vec.end())
		cout << *iter++ << " ";
	cout << endl;
}
int main() {
	
	vector<int> vec = {0,1,2,3,4,5,6,7,8,9};
	printVec(vec);

	auto iter = vec.begin();
	while(iter != vec.end()) {
		if(*iter % 2) {
			iter = vec.insert(iter, *iter);
			iter += 2;
		} else {
			iter = vec.erase(iter);
		}
	}

	printVec(vec);
	return 0;
}
