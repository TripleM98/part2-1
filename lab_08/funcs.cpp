#include <iostream>
using namespace std;
string removeLeadingSpaces(string line){
	
//	string s ;
//	while (cin >> line){ You do not need the while loop.
	//	for (int i = 0; i < line.length(); i++){
	int i=0;
	while(isspace(line[i])){
		i++;
			//if (!isspace(line[i])){ //This code gets rid of all the spaces, not just the leading spaces.
			//s += line[i];	
		}
	//

	return line.substr(i, line.length()-1);
	//}
	
}

//int countChar(string line, char c){
//
//}

/*

int main should be in main.cpp
int main(){ 
	string word;
	while(cin >> word ) //You forgot to cin a variable. Fixed it by 
	
}
*/