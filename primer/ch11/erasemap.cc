#include <map>
using std::map;

#include <string>
using std::string;

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main() {

	map<string, size_t> word_count;
	string word;
	while(cin >> word) 
		++word_count[word];

	string removal_word = "the";

	if(word_count.erase(removal_word))
		cout << "ok:" << removal_word << " removed\n";
	else 
		cout << "oops: " << removal_word << "not found\n";

	removal_word = "The";
	map<string, size_t>::iterator where;
	where = word_count.find(removal_word);

	if(where == word_count.end())
		cout << " oops : " << removal_word << " not found\n";
	else {
		word_count.erase(where);
		cout << "ok: " << removal_word << " removed\n";
	}

	auto map_it = word_count.begin();
	while(map_it != word_count.end()) {
		cout << map_it->first << ", " << map_it->second << endl;
		map_it++;
	}
	return 0;
}
