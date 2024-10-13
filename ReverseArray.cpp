 #include<bits/stdc++.h>
 using namespace std;
void reverseArray(vector<int>&arr){
  reverse(arr.begin(),arr.end());
 }
 int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];      //time complexity O(n)  and space complexity is O(1)
  }
  reverseArray(arr);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
 }
 
 
 //time and space complexity O(n)
 /*
 #include<bits/stdc++.h>
 using namespace std;
 void reverseArrayrecursion(vector<int>&arr,int s,int e){
     if(s>=e)
     return;
     swap(arr[s],arr[e]);

     reverseArrayrecursion(arr,s+1,e-1);

}
 void reverse(vector<int>&arr,int n){
    reverseArrayrecursion(arr,0,n-1);  
 }  
 int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
    reverse(arr,n);

    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }

 }

*/




 //time complexity O(n)
 //space complexity O(1)
 /*
 #include<bits/stdc++.h>
 using namespace std;
 void reverseArray(vector<int>&arr, int n){
        for(int i=0; i<n/2; i++){
          swap(arr[i],arr[n-i-1]); 
         }
 } 
 int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  reverseArray(arr,n);
   
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
   }
 */
 
 
 //time O(n) and space complexity is O(1)

 
 /* #include<bits/stdc++.h>
using namespace std;
void reversearray(vector<int>&arr,int n){
int start=0;
int end=n-1;
while(start<end){
  swap(arr[start],arr[end]);
  start++;
  end--;
}
}
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  reversearray(arr,n);
  
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
}
*/


   //time complexity and space complexity is O(n)
   //naive approach now let optimised it

 /*
 #include<bits/stdc++.h>
using namespace std;
void Reversearray(vector<int>&arr,int n){
  vector<int>temp(n);
  for(int i=0; i<n; i++){
    temp[i]=arr[n-i-1];
  }
  for(int i=0; i<n; i++){
   arr[i]=temp[i];
  }                     
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
   Reversearray(arr,n);
 
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";

 }

} 
*/


