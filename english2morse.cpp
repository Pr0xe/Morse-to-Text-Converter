#include <iostream>
#include <cstdlib>

using namespace std;

string morse(char x) {

switch (x) {

    case ' ':
        return "/";
    case 'A':
        return ".-";
    case 'B':
        return "-...";
    case 'C':
        return "-.-.";
    case 'D':
        return "-..";
    case 'E':
        return ".";
    case 'F':
        return "..-.";
    case 'G':
        return "--.";
    case 'H':
        return "....";
    case 'I':
        return "..";
    case 'J':
        return ".---";
    case 'K':
        return "-.-";
    case 'L':
        return ".-..";
    case 'M':
        return "--";
    case 'N':
        return "-.";
    case 'O':
        return "---";
    case 'P':
        return ".--.";
    case 'Q':
        return "--.-";
    case 'R':
        return ".-.";
    case 'S':
        return "...";
    case 'T':
        return "-";
    case 'U':
        return "..-";
    case 'V':
        return "...-";
    case 'W':
        return ".--";
    case 'X':
        return "-..-";
    case 'Y':
        return "-.--";
    case 'Z':
        return "--..";
    case '0':
        return "-----";
    case '1':
        return ".----";
    case '2':
        return "..---";
    case '3':
        return "...--";
    case '4':
        return "....-";
    case '5':
        return ".....";
    case '6':
        return "-....";
    case '7':
        return "--...";
    case '8':
        return "---..";
    case '9':
        return "----.";
}
    return morse(x);
}
void morsenc(string s) {
	int i, is_digit, is_upper, is_space;
	for (i = 0; s[i]; i++){
		is_digit = (s[i] >= '0' && s[i] <= '9'); 
		is_upper = (s[i] >= 'A' && s[i] <= 'Z');
		is_space = (s[i] == ' ');
		if(!is_digit && !is_upper && !is_space){
			cout << "No valid entry to encode!" << endl;
			exit(1);
		}
	
    	}
    	for(int i = 0; s[i]; i++){
	    	cout << morse(s[i]) <<" ";
    	}
	cout << endl;
}
int main() {
    string s;
    getline(cin,s);
    morsenc(s);
    return 0;
} 
