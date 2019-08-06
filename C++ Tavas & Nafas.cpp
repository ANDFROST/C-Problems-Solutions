//A. Tavas and Nafas
//time limit per test 1 second
//memory limit per test 256 megabytes
//input standard input
//output standard output
//Today Tavas got his test result as an integer score and he wants to share it with his girlfriend, Nafas.
//His phone operating system is Tavdroid, and its keyboard doesn't have any digits! He wants to share his score with Nafas via text, so he has no choice but to send this number using words.

//He ate coffee mix without water again, so right now he's really messed up and can't think.
//Your task is to help him by telling him what to type.
//Input
//The first and only line of input contains an integer s (0?=?s?=?99), Tavas's score.
//Output
//In the first and only line of output, print a single string consisting only from English lowercase letters and hyphens ('-'). Do not use spaces.
//Sample test(s)
//input
//6
//output
//six
//input
//99
//output
//ninety-nine
//input
//20
//output
//twenty
//Note
//You can find all you need to know about English numerals in http://en.wikipedia.org/wiki/English_numerals .


#include <iostream>
using namespace std;

int n;
string a[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","","fifteen"};
string c[] = {"teen","ty"};
string d[] = {"twen","thir","fif"};

int main(){
	cin>>n;
	if(n<=10){
		cout<<a[n];
	}
	else if(11<=n<=15&&n!=""){
		cout<<b[n];
	}
	else if(16<=n<=19){
		cout<<a[n]
	}

}
