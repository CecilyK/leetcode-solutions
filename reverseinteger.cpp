#include<iostream>
#include<vector>

using namespace std;

 int reverse(int x) {
	long int rev=0;//initialize reverse as 0
        while(x!=0)
        {
            rev=rev*10 +(x%10);
            if(rev>2147483647 || rev<-2147483647){//return 0 if reverse overflows
                 return 0;
            }
               
            x=x/10;
        }
        return rev;
}
int main(){
	int n;
	cout<<"Enter number"<<endl;
	cin>>n;
	cout<<reverse(n);
	return 0;
}

