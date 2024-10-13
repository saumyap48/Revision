#include<bits/stdc++.h>
using namespace std;
int maxelement(vector<int>&arr,int n){
  int maxi=INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i]>maxi)
    maxi=arr[i];
  }
  return maxi;
}
int minelement(vector<int>&arr,int n){
  int mini=INT_MAX;
  for(int i=0; i<n; i++){
    if(arr[i]<mini)
    mini=arr[i];
  }
  return mini;
}
int main(){
  int n;
  cin>>n; 
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int maxim=maxelement(arr,n);
  int minim=minelement(arr,n);
 cout<<minim<<" ";
 cout<<maxim<<" ";
}