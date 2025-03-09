#include<iostream>
#include<cmath>
using namespace std;
void roots(int a,int b,int c)
{
    int k=sqrt((b*b) - (4*a*c));   //condition to check ,roots are imaginary or real
    if(k>0)
    {
    int root1= (-b+k)/2*a;
    cout<<"First root is"<<root1<<endl;
    int root2= (-b-k)/2*a;
    cout<<"Second root is"<<root2<<endl;
    }
    else cout<<"roots are imaginary " <<endl;
    
}
int main()
{
    cout<<"Enter the Coefficient of quadratic equation"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    roots(a,b,c);
    return 0;
}
