#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main() {
	
	vector<int> nums;
	int numToFind;
	cin >> numToFind;
	cout << "Input the nums list" << endl;
	int num;
	while(cin >> num)
		nums.push_back(num);
	auto low = nums.begin();
	auto high = nums.end();
	auto mid = low + (high - low) / 2;

	while(mid != nums.end() & *mid != numToFind) {
		if(*mid > numToFind) {
			high = mid;
		} else
			low = mid + 1;
		mid = low + (high - low) / 2;
	}

	if(*mid == numToFind) 
		cout << "found the num " << numToFind ;
	if(mid == nums.end())
		cout << "not found the num" << numToFind;
	return 0;
}
