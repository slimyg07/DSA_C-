#include<iostream>
using namespace std;


void swap(int arr[], int l, int r){
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
}

void printArray(int arr[], int n){
    
    for(int i = 0 ; i< n; i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
}


void reverseArray(int arr[], int l, int r){
    

    while(l<r){
        swap(arr,l,r);
        l++;
        r--;

    }
}

bool rotateArray(int arr[], int n, int r){
    cout<<"If u want left rotation type '1' or if u want right rotation type '2' :: "<<endl;
    int ans;
    cin>>ans;

    if(ans==1){
        reverseArray(arr,0,r-1);
        reverseArray(arr,r,n-1);
        reverseArray(arr,0,n-1);
        return true;
        
    }
    else if(ans==2){
        reverseArray(arr,0,n-1);
        reverseArray(arr,0,r-1);
        reverseArray(arr,r,n-1);
        return false;

    }
    else cout<<"Wrong option selected bruh !! ";
    return false;
}


void reverseArray(int arr[], int n){
  

    cout<<"Your reversed array is :: "<<endl;
    printArray(arr,n);
}

int main(){

    cout<<"How many elements you want in your arrays :: "<<endl;
    int n;
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter the elements of your array :: ";
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    
    cout<<"By how many positions do u want to rotate the array :: "<<endl;
    int r;
    cin>>r;

    cout<<"Original Array :: ";
    printArray(arr, n);

    if(rotateArray(arr,n,r)){
    cout<<endl<<"Rotated by "<<r<<" positions :: ";
    printArray(arr,n);
    };
    

    return 0;
}