#include<iostream>

using namespace std;

int main()
{
    int n =0, sum =0;

    cout<<"Enter the number to sum up : \n";
    cin>>n;

    sum = n * (n+1) /2;
    cout<<"Total Sum is : "<<sum<<"\n";

    return 0;
}