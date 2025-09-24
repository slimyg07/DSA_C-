#include<iostream>
using namespace std;


void printArray(int *p, int n) {
    cout<< "Your array elements are : ";
    for(int i = 0 ; i < n ; i++)
        cout<<p[i]<<" ";
    cout<<endl;
    return;
}

void mergeArray(int p[], int q[], int arr[], int mn, int m, int n)
{
    int i =0 ;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(p[i]<q[j]){
            arr[k] = p[i];
            k++;
            i++;

        }
        else{
            arr[k] = q[j];
            j++;
            k++;
        }
    }
        while(i<n){
            arr[k] = p[i];
            k++;
            i++;
        }
        while(j<m){
            arr[k] = q[j];
            j++;
            k++;
        }

    }




int main(){

  int n;
  
  
  int p[] = {1,2,3,4,5,6,7,8,9,10};
  int q[] = {1,3,4,5,7,10,14,16,14,20};
  n = 10;
  int m = 10;

    int mn = m+ n;
    int arr[mn];

    mergeArray(p,q,arr,mn,m,n);
    printArray(arr,mn);


    return 0 ;
} 
