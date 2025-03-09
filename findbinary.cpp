#include<iostream>
using namespace std;
void DecimaltoBinary(int a)
{
    if(a>1)
    {
    DecimaltoBinary(a/2);
    }
    cout<<a%2;
}
int main()
{
    int num1=0;
    cout<<"Enter the Decimal Number "<<endl;
    cin>>num1;
    DecimaltoBinary(num1);
    return 0;
}