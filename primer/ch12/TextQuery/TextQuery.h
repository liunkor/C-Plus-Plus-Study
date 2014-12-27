#ifndef TEXTQUERY_H
#define TEXTQUERY_H
#include <memory>
using std::shared_ptr; 

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <map>
using std::map;

#include <set>
using std::set;

#include <fstream>
using std::ifstream;

#include "QueryResult.h"

class QueryResult;

class TextQuery {
public:	
	using line_no = vector<string>::size_type;
	TextQuery(ifstream &);
	QueryResult query(const string &s) const;
	//void display_map();
private:
	shared_ptr<vector<string>> file;
	map<string, shared_ptr<set<line_no>>> wm;
	static string cleanup_str(const string&);
};
#endif
