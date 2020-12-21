#include<iostream>
using namespace std;

int lengthOfLastWord(string s) {
    int count=0;
    for(int i=s.size()-1;i>=0;--i)//traverse from end
    {
		if(s[i] ==' ' )//if space
		{
            if(count !=0){//if count is not equal to 0
                break;
            }
            continue;//if count = 0 continue means space is at the end
            
        }
		count++;
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
