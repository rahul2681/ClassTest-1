 //Name--Rahul Kumar
 //Roll No--2010991985
 //Set No--04
 //Q-2
 #include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

if(n<=1){
    return false;
  }

  int min=*min_element(arr,arr+n);
  int max=*max_element(arr,arr+n);

  if(max-min==n-1){
    cout<<"The array contains consecutive integers "<<min<<" to "<<max;
  }

  map<int ,int> mp;

  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(auto it=mp.begin();it!=mp.end();it++){
    if(it->second>1){
      cout << "The array does not contain consecutive integers as element "<<it->first<<" is repeated";
        }
  }

  return 0;
}