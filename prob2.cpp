#include <iostream>
#include <string>
using namespace std;



int main() {
	// Write your code here

	string input;
	cin >> input;

	if(input == "Integer"){
		return 4;
	}
	else if (input == "Long"){
		return 8;
	}
	else if ( input == "Float"){
		return 4;
	}
	else if(input == "Double"){
		return 8;
	}
	else if(input == "Character"){
		return 1;
	}else{
		return -1;
	}
    return 0;
}