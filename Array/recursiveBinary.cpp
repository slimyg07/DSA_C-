#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int p[], int low, int high, int target){
  
    if(low>high){
        cout<<"Not found";
    return false;
    }


    int mid = (low+high)/2;
    if(p[mid]==target){
        cout<<target<<" Found at index "<<mid;
        return true;
    }
    else if(p[mid]>target)
    return binarySearch(p,low,mid-1,target);

    else return binarySearch(p,mid+1,high,target);
}

int main(){

    int n;
  
  
  int p[] = {1,2,3,4,5,6,7,8,9,10};
  n = 10;


  if(binarySearch(p,0,n-1,6)){
    cout<<"\n foundddd";
  }


}