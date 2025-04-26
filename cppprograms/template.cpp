#include<iostream>
using namespace std;
template<class t>
void add(t& a, t& b,t& c)
{
  c=a+b;
}
int main()
{
  int a,b,c=0;
  cout<<"enter two vaulues";
  cin>>a>>b;
  add(a,b,c);
  cout<<c;
}