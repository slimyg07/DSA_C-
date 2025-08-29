#include<iostream>
using namespace std;

void swap(int arr[], int l, int r){
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
}


void printArray(int arr[], int n){

    cout<<"Original Arrays :: "<<endl;
    
    for(int i = 0 ; i< n; i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
}

void reverseArray(int arr[], int n){
    int l = 0 ;
    int r = n-1;

    while(l<r){
        swap(arr,l,r);
        l++;
        r--;

    }

    cout<<"Your reversed array is :: "<<endl;
    printArray(arr,n);
}

int main(){
    cout<<"Enter the number of elements u want in ur array"<<endl;
    int n;

    cin>>n;
    int *arr = new int[n];

    cout<<"Enter the elements of the Array"<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    printArray(arr,n);

    reverseArray(arr,n);

    delete(arr);

    return 0;

}