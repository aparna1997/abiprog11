#include <iostream>
using namespace std;
int main() 
{
	int i,rem,j=0;
	cin>>i;
	if(i>0)
	{
	for(int k=0;i>0;k++)
	{
	rem=i%10;
            j=j+(rem*rem);
	i=i/10;
           	}
		cout<<j;
	}
	else
	{
		cout<<"invalid";
	}
	return 0;
}
