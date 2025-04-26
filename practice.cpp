 
#include<iostream>
using namespace std;
int main(){
  // int arr[5];
  // { //calculating the sum of a all elementes in  array
  //  cout<<"Enter the Element in array "<<endl;
  // for(int i = 0 ; i < 5; i++){
  //  cin>>arr[i];
  // }
  // int sum = 0;
  // for(int i = 0; i< 5 ; i++){
  //   sum = sum + arr[i];
  // }
  // cout<<"The sum is : "<<sum<<endl;
  // }
  // {
  //   // to calculate the product of an given array 
  //   int brr[] = {9,8,7,6,5,4,3};
  //   int size = sizeof(brr)/4;
  //   int product=1;
  //   for (int i = 0 ; i< size ; i++){
  //       product = product * brr[i];
  //   }
  //   cout<<"the Product is :"<<product<<endl;
  // }
  {
    // to find max in array without sorting it
     int crr[] = {91,845,2347,62,564,324,223};
     int s = sizeof(crr)/4;
     int max = crr[0];
     for(int i = 1; i< s;i++ ){
      if ( crr[i] > max){
        max = crr[i];
      }
     }
     cout<<"Max is is this is what is : "<<max<<endl;
  }
  return 0;
}

