#include <bits/stdc++.h>
using namespace std;

int raisepower(int x, int n){
  if(n==1)
    return x;
  int result = raisepower(x,(n-1));
  return result * x;
}

int main(){
  //int x,n;
  //cin >>x>>n;
  cout<<"Output: "<<raisepower(2,5)<<endl;
  return 0;
}