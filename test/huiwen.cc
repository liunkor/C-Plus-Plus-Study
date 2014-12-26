#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

bool checkNum(const char * str);

int main(void) {
	const char *str1 = "22";
	const char *str2 = "123454321";
	const char *str3 = "1221";
	if(checkNum(str1)) 
		cout << "Huiwen " << str1 << endl;
	else 
		cout << "Not huiwen: " << str1 << endl;

	if(checkNum(str2)) 
		cout << "Huiwen " << str2<< endl;
	else 
		cout << "Not huiwen: " << str2 << endl;

	if(checkNum(str3)) 
		cout << "Huiwen " << str3 << endl;
	else 
		cout << "Not huiwen: " << str3 << endl;


	return 0;
}

bool checkNum(const char * str) {
	if(str == NULL)
		return false;
	
	const char *p = str;
	while(*p != '\0') 
		p++;
	p--;

	if(p == str)
		return true;
	while(p > str) {
		if(*p == *str) {
			p--;
			str++;
		} 
		else 
			return false;
	}
	
	if(p == str)
		return true;
	else 
		return false;
}
