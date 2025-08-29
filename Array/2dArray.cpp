#include<iostream>
using namespace std;


void stackHeapArray(int m , int n){
   int *p[m];
   for(int i = 0 ; i<n; i++){
    p[i] = new int[n];
   }

   cout<<"Enter your Stack stored Array's element :: "<<endl;

   for(int i = 0 ; i<m; i++){
    for(int j = 0 ; j<n; j++)
        cin>>p[i][j];
   }

   cout<<"Your Stack based Array is :: "<<endl;

   for(int i = 0 ; i<m; i++){
    for(int j = 0 ; j<n; j++)
        cout<<p[i][j]<<" ";
    cout<<endl;
   }

   for(int i = 0 ; i <m; i++)
    delete[] p[i];

}

int ** HeapArray(int m , int n){
    int **p ;
    p = new int* [m];
    for(int i = 0 ; i<m ; i++){
        p[i] = new int [n];
    }

    cout<<"Enter the elements of your Heap based elements :: "<<endl;


   for(int i = 0 ; i<m; i++){
    for(int j = 0 ; j<n; j++)
        cin>>p[i][j];
   }

   cout<<"Your Heap based Array is :: "<<endl;

   for(int i = 0 ; i<m; i++){
    for(int j = 0 ; j<n; j++)
        cout<<p[i][j]<<" ";
    cout<<endl;
   }

   return p;

   




}




int main(){
    cout<<"How many row elements u want ?? : "<<endl;
    int m ;
    cin>> m;
    cout<<"How may column elements u want?? :: "<<endl;
    int n ;
    cin>>n;

    // stackHeapArray(m,n);

   int **p = HeapArray(m,n);
   for(int i = 0 ; i <m; i++)
    delete[] p[i];

   delete[] p;

}