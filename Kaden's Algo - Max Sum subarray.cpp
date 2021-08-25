#include <bits/stdc++.h>
using namespace std;

int kaden(int arr[], int n){

  int current_sum = 0;
  int max_sum = 0;

  for(int i=0; i<n ; i++){
    current_sum = current_sum + arr[i];
    max_sum = max(current_sum, max_sum);
    if(arr[i] < 0) current_sum = 0;
  } 

  return max_sum;
}

int main(){
 
  int n;
  int arr[10];
  cin>>n; 

  for(int i=0; i<n; i++){
    cin>>arr[i];
  cout<<kaden(arr, n)<<endl;

  return 0;
}
  }
