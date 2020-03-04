#include <iostream>

using namespace std;

string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
string morse[36] = {".-","-...","-.-.","-.."
	,".","..-.","--.","....","..",".---"
	,"-.-",".-..","--","-.","---",".--."
	,"--.-",".-.","...","-","..-","...-"
	,".--","-..-","-.--","--.."
	,".----","..---","...--","....-","....."
	,"-....","--...","---..","----.","-----"};
//Function that collecting morse symbols
char morse_to_text (const string flag){   
	//Returns if the string is empty 
	if (flag.empty())
		return ' ';
     //check if morse code match with letter 
     //and return letter
    for (int i=0; i<36; i++){
	    if (morse[i] == flag){
		    return text[i];}
    }
    return ' ';
}
//Printing the final result with 
//decrypted message
void morseEnglish(){
	string  message, token, result;
	getline(cin, message);
	message += ' ';
    	for (int i=0; i<message.length(); i++){
		if (message[i] == ' '){
			result += morse_to_text(token);
			//Erases the contents of the string,
	     		//which becomes an empty string
	    		token.clear ();
        	}
        	else
            		token += message[i];
	}
    		cout << result << endl;  
}
int main(){
	morseEnglish();
	return 0;
}
