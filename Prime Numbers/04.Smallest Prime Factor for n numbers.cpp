//Time Complexity = O(nloglogn)
//Based on Sieve Eratosthenes

#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 
 vector<int> isPrime(n+1,0);

 for(int i = 2; i<=n ; i++){        
    if(isPrime[i]==0){
      cout<<i<<" ";
      for(int j=i*i; j<=n; j = j+i)  
       if(isPrime[j]==0)  //Very important, for multiples of 30 it was showing wrong
        isPrime[j]=i;
    }
    else  cout<<isPrime[i]<<" ";  
  }

}
  

