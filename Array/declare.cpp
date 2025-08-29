#include<iostream>
using namespace std;

void initialize(int arr[], int n){
    cout<<"Now enter the elements :";
    for(int i = 0 ; i < n ; i++)
        cin>> arr[i];
    return;
}

void printArray(int arr[], int n){
    cout<<"Your Arrray is : "<<endl;
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    return;
}

void addressArray(int arr[], int n){
    cout<<"Address of each array is : "<<endl;
    for(int i =0 ; i < n ; i++){
        cout<<&arr[i]<<endl;
    }

    return;
}

int main(){

    int n ;

    cout<<"How many elements u want?";
    cin>>n;

    int arr[n];

    initialize(arr, n);

    printArray(arr, n);

    addressArray(arr, n);

    return 0;
}