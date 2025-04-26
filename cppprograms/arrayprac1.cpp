#include<iostream>
using namespace std;
int main(){
  //find the square of numbers upto given number and storing them using array 
  
  cout<<"Enter the number for series of squares"<<endl;
  int a;
  cin>>a;
  int arr[a];
  arr[0]=1;
  for( int i = 1; i<a ;i++){
        arr[i]= (i+1)* (1+i);
  }
  for(int i = 0; i<a ; i++){
    cout<<arr[i]<<endl;
  }
  {
    //for given array change the odd index to *2 and even to *10
    int brr[]={10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(brr)/4;
    cout<<"\nprinting the old array  "<<endl;
    for( int i = 0; i<size;i++){
      cout<<brr[i]<<" ";
    }
    cout<<endl;
     
    
    for ( int i = 0; i < size; i++){
      if(i%2==0){
        brr[i] = brr[i]*10;
      }
      if(i%2 != 0){
        brr[i] = brr[i]*2;
      }
    }
    cout<<"\nprinting the new array "<<endl;
    for( int i = 0; i<size;i++){
      cout<<brr[i]<<" ";
    
  }
  // To find the element in the array which are greater than the given number 
  int count =0;
  int sample;
  cout<<"\nEnter the Number  ";
  cin>>sample;
  for(int i = 0; i<size; i++){
    if(brr[i] > sample){
      count++;
    }
  }
  cout<<"The Number of elements greater than "<<sample<<" In the array is "<<count<<endl;

  
  //Difference between the sum of the elements at odd and even index
 int evenSum=0;
 int oddSum=0;
  for ( int i = 0; i < size; i++){
      if(i%2==0){
        evenSum = evenSum+brr[i];
      }
      if(i%2 != 0){
        oddSum = oddSum + brr[i];
      }
    }
    int diff = evenSum - oddSum  ;
    cout<<"\nThe difference is "<<diff<<endl;
    //finding the second largest 
    int smax=INT_MIN;
    int mx=INT_MIN;
    for ( int i =0 ; i< size ; i++){
      mx= max(mx,brr[i]);
    }
    for( int i=0; i<size ; i++){
      if(brr[i] != mx){
          smax = max(smax, brr[i]);
      }
    }
    cout<<"max is "<<mx<<" Second max is "<<smax<<endl;

    // to copy an array in reverse order 
    int brrCopy[size];
    for( int i = 0; i<size ;i ++){
      brrCopy[size-1-i]=brr[i];
     
    }
    for(int i =0;i<size;i++){
      cout<<brrCopy[i]<<" ";
    }
  
  }
  return 0;
}