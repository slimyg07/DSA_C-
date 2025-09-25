#include<bits/stdc++.h>
using namespace std;        

void ceiling(int arr[], int n,int target){
    int start = 0 ;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]==target){
            cout<<"Element is already in the array at index : "<<mid;
        }

        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid +1;
        }

    }

    cout<<"The target number "<<target<<" should be present at index "<<start<<" next to "<<arr[end]<<endl;

}

int main(){
  int n;
  int p[] = {1,2,3,4,6,7,8,9,10,12};
  n = 10;


  ceiling(p,n,11);
}