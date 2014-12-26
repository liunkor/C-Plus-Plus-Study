#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include "Sales_data.h"

int main() {
	Sales_data total;
	if(read(cin, total)) {
		Sales_data trans;
		while(read(cin, trans)) {
			if(total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	} else {
		cerr << " input error\n" << endl;
	}
	return 0;
}
