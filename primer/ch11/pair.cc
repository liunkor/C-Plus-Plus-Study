#include <string>
using std::string;

#include <list>
using std::list;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

#include <iterator>
using std::istream_iterator; using std::ostream_iterator;

#include <utility>
using std::pair; using std::make_pair;

#include <iostream>
using std::cin; using std::cout; using std::endl;

#include "../ch07/Sales_data.h"

pair<string, string> anon;
pair<string, size_t> word_count;
pair<string, vector<int>> line;

pair<string, string> author{"James", "Joyce"};

typedef pair<string, string> Author;
Author proust("Marcel", "Proust");  // construct a pair
Author joyce{"James", "Joyce"};     // list initialize a pair
Author austen = make_pair("Jane", "Austen"); // use make_pair

void preliminaries(vector<string> &v) {
	istream_iterator<string> input(cin), eof;
	copy(input, eof, back_inserter(v));
	sort(v.begin(), v.end(),
		[](const string &a, const string &b) {return a.size() < b.size(); });

}

pair<string, int> process(vector<string> &v) {
	if(!v.empty()) 
		return {v.back(), v.back().size()};
	else
		return pair<string, int>();
}

pair<string, int> process2(vector<string> &v) {
	if(!v.empty()) 
		return make_pair(v.back(), v.back().size());
	else
		return pair<string, int>();
}

pair<string, int> process3(vector<string> &v) {
	if(!v.empty())
		return pair<string, int>(v.back(), v.back().size());
	else
		return pair<string, int>();
}

int main() {

	vector<string> v;
	string s;
	while(cin >> s) 
		v.push_back(s);
	
	preliminaries(v);
	
	auto biggest = process(v);
	cout << biggest.first << " " << biggest.second << endl;
	biggest = process2(v);
	cout << biggest.first << " " << biggest.second << endl;
	biggest = process3(v);
	cout << biggest.first << " " << biggest.second << endl;

	return 0;
}
