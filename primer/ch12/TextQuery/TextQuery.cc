#include <cstddef>
using std::size_t;

#include <memory>
using std::shared_ptr;

#include <string>
using std::string;  using std::getline;

#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout; using std::endl;
using std::ostream; using std::ostream; using std::cerr;

#include <fstream>
using std::ifstream;

#include <sstream>
using std::istringstream;

#include <cctype>
using std::tolower; using std::ispunct;

#include <utility>
using std::pair;

#include "TextQuery.h"

TextQuery::TextQuery(ifstream &is): file(new vector<string>) {
	string text;
	while(getline(is, text)) {
		file->push_back(text);
		int n = file->size() - 1;
		istringstream line(text);
		string word;
		while(line >> word) {
			word = cleanup_str(word);
			auto &lines = wm[word];
			if(!lines)
				lines.reset(new set<line_no>);
			lines->insert(n);
		}
	}
}

string TextQuery::cleanup_str(const string &word) {
	string ret;
	for(auto it = word.begin(); it != word.end(); ++it) {
		if(!ispunct(*it)) 
			ret += tolower(*it);
	}
	return ret;
}

QueryResult TextQuery::query(const string &sought) const {
	static shared_ptr<set<line_no>> nodata(new set<line_no>);

	auto loc = wm.find(cleanup_str(sought));
	if(loc == wm.end()) 
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);

}

ostream & print(ostream & os, const QueryResult &qr) {
	os << qr.sought << " occurs " << qr.lines->size() << " times " << endl;
	for(auto num : *qr.lines)
		os << "\t(line " << num + 1 << " ) " << *(qr.file->begin() + num) << endl;
	return os;
}
