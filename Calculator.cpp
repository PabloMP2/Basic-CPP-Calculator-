
// stringstreams
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string mystr;
	float price = 0;
	int64_t quantity = 0;
	cout << "What's your name? ";
	getline(cin, mystr);
	cout << "Hello " << mystr << ".\n";
	cout << "Enter The Number In Which I Will Times: ";
	getline(cin, mystr);
	stringstream(mystr) >> price;
	cout << "Enter How Many Times I Should Times It: ";
	getline(cin, mystr);
	stringstream(mystr) >> quantity;
	cout << "Total: " << price * quantity << endl;
	return 0;
}