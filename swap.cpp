#include<iostream>
using namespace std;
void swap(int *a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=*a;
}
int main()
{
    int num1,num2;
    cout<<"Enter the two Numbers to swap"<<endl;
    cin>>num1>>num2;
    swap(&num1,&num2);
    cout<<"The swapped numbers "<<num1<<num2<<endl;
    return 0;
}