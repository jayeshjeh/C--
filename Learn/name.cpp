#include<iostream>

using namespace std;

int main()
{
    string name;

    cout<<"May I know your name\n";
    getline(cin, name);
    //cin>>name;
    cout<<"Welcome Mr "<<name<<"\n";

    return 0;
}