//Decreasing & Increasing order of number using recursion

#include <bits/stdc++.h>
using namespace std;

void sums(int n){
  if(n==0){
    cout<<endl;
    return;
   } 

  cout<<n<<" ";   //Prints number in decreasing order
  sums(n-1);
  cout<<n<<" ";   //Prints number in increasing order
}

int main(){
 int n;
 cin>>n;
 sums(n);
}
  


