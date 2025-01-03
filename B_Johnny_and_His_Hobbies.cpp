#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=-1;
    for(int i=1;i<=1024;i++){
      vector<int> temp;
      for(int j=0;j<n;j++){
        temp.push_back(v[j]^i);
      }
      sort(temp.begin(),temp.end());
      if(temp==v){
        ans=i;
        break;
      }
    }
    cout<<ans<<endl;
  }
}