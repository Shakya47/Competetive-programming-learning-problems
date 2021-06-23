#include <bits/stdc++.h>
using namespace std;

int main(){
  string string1,string2;
  cin>>string1>>string2;
  //string str;
  int n=string2.size();
for(int i=0;i<n;i++){
    string1.erase(remove(string1.begin(),string1.end(),string2[i]),string1.end());
}
//cout<<string2<<endl;
cout<<string1;

}