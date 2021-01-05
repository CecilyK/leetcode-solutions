#include<iostream>
using namespace std;

 int getSum(int a, int b) {
        int sum=a^b;
        int carry= a&b;
        if (carry==0)
            return sum;
        else    
            return (sum , carry<<1);
    }
int main()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<getSum(a,b);
}
