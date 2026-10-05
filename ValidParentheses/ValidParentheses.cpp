#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string input = "";
long length = 0;
bool checkLength = false;

string returnInputString(string input);
bool checkTheLength(string input, long &length);
void InvalidInputStringMessage(bool result);


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



void InvalidInputStringMessage(bool result){

	if(result == false){
		cout << "Invalid Parentheses String." << endl;
	}

}