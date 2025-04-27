#include<iostream>
using namespace std;
int main(){
  //reverse an array 
  int size ;
  cout << "Enter the size of an array" << endl;
  cin >> size;
  int arr[size];
  cout << "Enter the " << size << " elements" << endl;
  for ( int i = 0; i < size; i++){
        cin >> arr[i];
  }
  // this can be also used to reverse the array 
  // create one temp variable then save , temp = arr[i],arr[i] = arr[j], arr[j] = temp
  // use this condition in while loop 
  int i = 0;
  int j = size - 1;
  while ( i < j){
    if (arr[i] != arr[j]){
      cout << "Its is not a palindrom ";
      break;
    }
    else {
      cout << "Its a palindrom" << endl;
    break;
    }
  }
}