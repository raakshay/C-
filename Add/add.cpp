#include<iostream>
using namespace std;

int add (int a, int b)
{
	return a+b;
}

int main()
{
	int a,b,sum;
	cout<<"\n please enter the numbers:";
	cin>>a>>b;
	sum =add(a,b);
	cout<<"\n sum:"<<sum;
	return 0;
}


