#include <bits/stdc++.h>
using namespace std;

int maxPF(int n){
  int res = -1;

  for(int i=2; i*i<=n; i++){
    while(n%i==0){
      res = i;
      n = n/i;
    }
  }
  if(n>1) res = n;
  return res;

}

int main(){
 
  int n, fact;
  cin>>n>>fact;

  int p = maxPF(n);

  int res = 0;
  while(fact>0){
    fact = fact/p;
    res += fact;

  }

  cout<<res;

} 
