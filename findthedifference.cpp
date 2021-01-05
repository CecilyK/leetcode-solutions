#include<iostream>
using namespace std;

char findTheDifference(string s, string t) {
        char v = 0;
        for (char c: s) v ^= c;//bitwise operation to check odd one out
        for (char c: t) v ^= c;
        return v;
    }
    
int main(){
	string s,t;
	cout<<"Enter string"<<endl;
	cin>>s;
	cin>>t;
	cout<<findTheDifference(s,t);
	return 0;
}

