//Time Complexity = O(nloglogn)
//With naive method it would have been = O(n^3/2) -> very bad

#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 
 vector<bool> isPrime(n+1,true);

 for(int i = 2; i<=n ; i++){        //Condition is not i*i<=n because we want to iterate over every index of iPrime
  if(isPrime[i]){
    cout<<i<<" ";
    for(int j=i*i; j<=n; j = j+i)   //It's easy, just look and think carefully
      isPrime[j]=false;
  }
 }
  
 } 
