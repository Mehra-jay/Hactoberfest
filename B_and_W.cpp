#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  int i=0,j=k-1;
  int c=0;
  for(int d=i;d<=j;d++){
      if(s[d]=='W'){
        c++;
      }
  }
  int a=c;
  i++;j++;
  while(j<n){
    if(s[i-1]=='W'){
      c--;
    }  
    if(s[j]=='W'){
      c++;
    }
    a=min(a,c);
    i++;j++;
  }
  cout<<a<<"\n";
  return;
}
int main(){
  long long t=1;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}