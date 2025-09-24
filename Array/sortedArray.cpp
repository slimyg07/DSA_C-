#include<iostream>
using namespace std;


void printArray(int *p, int n) {
    cout<< "Your array elements are : ";
    for(int i = 0 ; i < n ; i++)
        cout<<p[i]<<" ";
    cout<<endl;
    return;
}


bool isSorted(int p[], int n){
    for(int i = 0 ; i < n-1; i++){
        if(p[i]>p[i+1])
            return false;
    }

    return true;
}



int main(){

  int n;
  
  
  int p[] = {1,2,3,4,5,6,1,8,9,10};
  n = 10;


  if(isSorted(p,n)){
    cout<<"Sorted\n";
  }
  else cout<<"Not sorted\n";



    return 0 ;
} 
