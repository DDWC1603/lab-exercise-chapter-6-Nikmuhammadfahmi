#include <iostream>
#include <conio.h>
using namespace std;

int arr[10];
int sum;
int x;

int main ()
{
cout<<"Enter the 10 numbers:"<<endl;
for(x=0;x<10;x++)
{
cin>>arr[x];

sum=sum+arr[x];
}
cout<<"the sum of the 10 numbers : "<<sum<<endl;

std::cin.get();
}
