#include<iostream>
using namespace std;


void printArray(int *p, int n) {
    cout<< "Your array elements are : ";
    for(int i = 0 ; i < n ; i++)
        cout<<p[i]<<" ";
    cout<<endl;
    return;
}


bool binarySearch(int p[], int n, int target){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(p[mid]== target){
            cout<<mid<<" is the index of the target "<<p[mid];
            return true;
        }
        else if(p[mid]>target) high = mid-1;
        else low = mid+1;

        
    }

    return false;
}



int main(){

  int n;
  
  
  int p[] = {1,2,3,4,5,6,7,8,9,10};
  n = 10;

  printArray(p,n);

  if(binarySearch(p,n,7)){
    cout<<"\n foundddd";
  }



    return 0 ;
} 
