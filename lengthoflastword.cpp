#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
    int count=0;//counter for length
    for(int i=s.size()-1;i>=0;--i)//traverse from right to left
    {
		if(s[i] !=' ')//count if not whitespace
		{
			count++;
		}
		else
		break;
	}
	return count;
}
int main(){
	string s;
	cout<<"Enter string:"<<endl;
	cin>>s;
	cout<<lengthOfLastWord(s);
	return 0;
}
