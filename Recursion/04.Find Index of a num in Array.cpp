#include <bits/stdc++.h>
using namespace std;

  int foundnumindex(int a[],int n, int f){

    if(n==0) return -1;

    if(a[0]==f) return 0;

    int ans = foundnumindex(a+1,n-1,f); 
    if(ans>-1) return ans + 1;  ////very important to add 1 here and not in Line:10 as we are also dealing with return -1
    else return -1;
  
  }


int main(){
  int a[10];
  int n;
  cin>>n;
  for(int i = 0;i<n ;i++){
    cin>>a[i];
  }
  int f;
  cin>>f;
  cout<<foundnumindex(a,n,f)<<endl;
  

  return 0;
}