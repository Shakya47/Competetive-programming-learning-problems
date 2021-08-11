#include <bits/stdc++.h>
using namespace std;

  int sumarr(int a[],int n){

    if(n==0) return 0;

    return a[0] + sumarr(a+1,n-1); 
  
  }


int main(){
  int a[10];
  int n;
  cin>>n;
  for(int i = 0;i<n ;i++){
    cin>>a[i];
  }
  cout<<sumarr(a,n)<<endl;
  

  return 0;
}