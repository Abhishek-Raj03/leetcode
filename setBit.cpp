#include<iostream>
using namespace std;
main()
{
    cout<<"Enter number and position u want to set"<<endl;
    int n,i;
    cin>>n>>i;
    cout<<(n|(1<<i));
}
