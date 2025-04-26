#include<iostream>
using namespace std;
//function to check even odd
void evenodd(int a )
{
    if (a%2==0)
    {
        cout<<a<<" is an even number "<<endl;
    }
    else
    {
        cout<<a<<" is an odd number "<<endl;
    }
}
int main()
{
    int n=0;
    cout<<"Enter the Number  ";
    cin>>n;
    evenodd(n);
    return 0;
    
}