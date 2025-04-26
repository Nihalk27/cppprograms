#include<iostream>
using namespace std;
int simpleInterest(int a, int b,int c)
{
    int SI=(a*b*c)/100;
    
    return SI;
}
int main()
{
    float ammount;

    int principle,rate,time;
    cout<<"Enter the principal amount :";
    cin>>principle;
    cout<<"Enter the rate of interest per year  :";
    cin>>rate;
    cout<<"Enter the Number of years :";
    cin>>time;
    cout<<"Simple interest is "<<simpleInterest(principle,rate,time)<<endl;
    cout<<"Total return will be  "<<(simpleInterest(principle,rate,time)+principle)<<endl;
    return 0;
}