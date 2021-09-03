#include <bits/stdc++.h>
using namespace std;

int clearBit(int n,int i,int j){
  int a = ~0 << j+1;
  int b = (1<<i) - 1;
  int mask = a | b;
  return n & mask;
}

int main(){
 
int n = 15, m = 2;
int i = 1, j = 3;
n = clearBit(n,i,j);

m = m<<i;
n = n | m;
cout<<n<<endl;

  return 0;
}
  
