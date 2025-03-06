#include<iostream>
#include<cmath>
using namespace std;
float compoundInterest(float  principal,float num ,float time ,float rate)
{
    double amount =principal*(pow((1+(rate/num)),time*num));
    
    
    return amount;
}
int main()
{
    float principal;
    float rate;
    float time;
    float num;

    cout<<"Enter the Pricipal amount "<<endl;
    cin>>principal;
    cout<<"Enter the percentage of rate of interest"<<endl;
    cin>>rate;
    rate=rate/100;
    cout<<"Enter the Number of years"<<endl;
    cin>>time;
    cout<<"Enter the number of times in a year that interest is compounded"<<endl;
    cin>>num;
    cout<<"The  Total amount with compound interest is :"<<compoundInterest(principal,num,time,rate);
    
    return 0;
}
