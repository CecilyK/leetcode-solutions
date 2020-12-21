#include<iostream>
using namespace std;

bool isPalindrome(int x)
{
	if(x<0 || x>=2147483647)//if number is a negative or exceeds the 32bit limit
		return false;
	long int rev=0;//initialize reverse as 0
	int y=x; //store orignal number
	while(x>0)
	{
		rev=rev*10 + (x%10);//modulus=reminder
		if(rev>2147483647)
			return false;
		x=x/10;
	}
	if(rev==y)//if reverse=original number
		return true;
	else
		return false;
}
int main()
{
	int n;
	cout<<"Enter number"<<endl;
	cin>>n;
	cout<<isPalindrome(n);
	return 0;
}

