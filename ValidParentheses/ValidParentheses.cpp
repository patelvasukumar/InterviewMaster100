#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string input = "";
long length = 0;

string returnInputString(string input);
void checkTheLength(string input, long &length);

int main(){


  
}

string returnInputString(string input){

		cout << "Enter the parentheses string: ";
		getline(cin >> ws,input);
		input.erase( remove(input.begin(), input.end(), ' '), input.end() );
		
		return input; 
}

void checkTheLength(string input, long &length) {
		
		length = input.length();
		
}