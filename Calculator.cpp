#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string mystr;
  string iguhgj;
  static float price = 0;
  static u_int64_t quantity = 0;
  cout << "What's your name? ";
  getline(cin, mystr);
  
	cout << "Hello " << mystr << ".\n";
	stringstream(mystr) >> price;
  
  cout << "Number: ";
  getline(cin, mystr);


  cout << "Add Times Or Subtract Or Divide: ";
  getline(cin, iguhgj);
	stringstream(mystr) >> price;
  
  
  if(iguhgj == "+"){
    cout << "Enter How Many Times I Should Add It: ";
    getline(cin, mystr);
	  stringstream(mystr) >> quantity;
    cout << "Total: " << price + quantity << endl;
  }
    
	else if(iguhgj == "-"){
    cout << "Enter How Many Times I Should Take It: ";
    	getline(cin, mystr);
	stringstream(mystr) >> quantity;
    cout << "Total: " << price - quantity << endl;
  }
    
  else if(iguhgj == "*"){
    cout << "Enter How Many Times I Should Times It: ";
    	getline(cin, mystr);
	stringstream(mystr) >> quantity;
    cout << "Total: " << price * quantity << endl;
  }
    else if(iguhgj == "/"){
    cout << "Enter How Many Times I Should Times It: ";
    	getline(cin, mystr);
	stringstream(mystr) >> quantity;
    cout << "Total: " << price / quantity << endl;
  }



  
	//cout << "Total: " << price * quantity << endl;
  //cout << "Enter The Number In Which I Will Times: ";
	//getline(cin, mystr);
  //
    
}
