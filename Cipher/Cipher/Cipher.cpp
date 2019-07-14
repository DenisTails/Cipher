
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
void cipher(string alfabet, string keys_Cipher) {
	
	string input{ "" };
	string output{ "" };
	cout << "Write word to cipher."<<endl << "Input: ";
	getline(cin, input);
	for (int i{ 0 }; i < input.length(); i++) {
		for (int j{ 0 }; j < alfabet.length(); j++) {
			if (input[i] == alfabet[j]) {
				output += keys_Cipher[j];
			}
		}
	}
	cout << "Output: " << output;
}
void uncipher(string alfabet, string keys_Cipher) {

	string input{ "" };
	string output{ "" };
	cout << "Write word to uncipher." << endl<< "Input: ";
	getline(cin, input);
	for (int i{ 0 }; i < input.length(); i++) {
		for (int j{ 0 }; j < keys_Cipher.length(); j++) {
			if (input[i] == keys_Cipher[j]) {
				output += alfabet[j];
			}
		}
	}
	cout <<"Output: "<< output;
}
int main()
{
	string alfabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ !?,." };
	string keys_Cipher{ "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba56789" };
	
	string choice{ "" };
	while (true) {
		
			cout << "\nYou want to cipher or uncipher your word?\nPress '0' for cipher or '1' for uncipher.\n";
			cout << "You want to quit? (Y)\n";
			getline(cin, choice);
			
			if (choice == "0") {
				cipher(alfabet, keys_Cipher);
			}
			if (choice == "1") {
				uncipher(alfabet, keys_Cipher);
			}
			if (choice == "Y" || choice == "y") {
				break;
			}
	}
}
