#include<iostream>
using namespace std;
//addition of  digits of a given number 
//using loops
int usingloop(int a )
{
    int c=0;
    while(a>0)
    {
        c=c+a%10;
        a=a/10;
    }
    return c;

}
//using recursive function
int usingrec(int a)
{
    if(a==0)
    {return 0;}
    else 
    return a%10+usingrec(a/10);
    
}
int main()
{
    cout<<"Enter a four digit number "<<endl;
    int num1;
    cin>>num1;
    cout<<"The sum is loop "<<usingloop(num1)<<endl;
    cout<<"The sum using recursion is "<<usingrec(num1)<<endl;
    
    return 0;
}