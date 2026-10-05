#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string input = "";
long length = 0;
bool checkLength = false;

string returnInputString(string input);
bool checkTheLength(string input, long &length);
bool checkValidCharacters(string input);
bool starting3Char(string input);
bool endinf3Char(string input);

void invalidInputStringMessage(bool result);



int main(){


  
}

string returnInputString(string input){

		cout << "Enter the parentheses string: ";
		getline(cin >> ws,input);
		input.erase( remove(input.begin(), input.end(), ' '), input.end() );
		
		return input; 
}

bool checkTheLength(string input, long &length) {
		
		length = input.length();

		if (length >= 1 && length <= 10000){
		  return true;
		}

		return false;
		
}

bool checkValidCharacters(string input){  

	for (char c: input) {
		
		if( c == '(' || c == ')' || c = '{' || c = '}' || c = '[' || c = ']') {
		return true;
		}
		else {
		return false;
		}
		
	}

}

bool starting3Char(string input) {
	  
	for (int i = 0; i < 3 && i < length; i++) {

		if ( input[i] == ')' || input[i] == '}' || input[i] == ']') {
			return false;
		}

	}

	return true;
}

bool ending3Char(string input) {

	for (int i = (length-1); i >= (length - 3) && i >= 0; i--) {

		if (input[i] == '(' || input[i] == '{' || input[i] == '[') {
			return false;
		}

	}
	return true;
}

void invalidInputStringMessage(bool result){

	if(result == false){
		cout << "Invalid Parentheses String." << endl;
		exit(0); 
	}

}