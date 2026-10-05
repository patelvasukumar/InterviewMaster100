#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string input = "";

string returnInputString(string input);

int main(){


  
}

string returnInputString(string input){

		cout << "Enter the parentheses string: ";
		getline(cin >> ws,input);
		input.erase( remove(input.begin(), input.end(), ' '), input.end() );
		
		return input; 
}
