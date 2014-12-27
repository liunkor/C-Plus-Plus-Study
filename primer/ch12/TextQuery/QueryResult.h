#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include <memory>
using std::shared_ptr;

#include <string>
using std::string;

#include <set>
using std::set;

#include <map>
using std::map;

#include <vector>
using std::vector;

#include <iostream>
using std::ostream; 

class QueryResult {
friend ostream & print(ostream &, const QueryResult &);
public:
	typedef vector<string>::size_type line_no;
	typedef set<line_no>::const_iterator line_it;
	QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f):
		sought(s), lines(p), file(f) { }
	set<line_no>::size_type size() const {
		return lines->size();
	}
	line_it begin() const { return lines->cbegin(); }
	line_it end() const { return lines->cend(); }
	shared_ptr<vector<string>> get_file() { return file; }

private:
	string sought;
	shared_ptr<set<line_no>> lines;
	shared_ptr<vector<string>> file;
};

ostream & print(ostream &, const QueryResult &);
#endif
