#include<iostream>
using namespace std;

void initialize (int *p, int n){
    cout<< "Enter the details of the array  : ";
    for(int i = 0 ; i < n ; i++)
        cin>>p[i];

    return ;

}

void printArray(int *p, int n) {
    cout<< "Your array elements are : ";
    for(int i = 0 ; i < n ; i++)
        cout<<p[i]<<" ";
    cout<<endl;
    return;
}

void sizeExtend(int * &p, int n, int newSize){
    int *q = new int[newSize];

    for(int i = 0 ; i < newSize; i++){
        if(i<n)
        q[i] = p[i];
        else
        q[i] = 0;
    }
    delete[] p;
    p = q;
    
    return;     
}

void addValues(int *p , int n){
    for(int i = 0 ; i < n ; i++){
        if(p[i]==0)
            cin>>p[i];
        
    }

    return;
}

int main(){

  int n;
  cout<<"How many elements u want in ur array ? :: ";
  cin>> n;
  int *p = new int[n];

  initialize(p,n);
  printArray(p,n);

  cout<< "How many new elements u wanna add ?? :: ";
  int q;
  cin>>q;

 sizeExtend(p, n, n+q);
  n = n+q;

  printArray(p,n);

  cout<<"Enter the new values : "<<endl;

  addValues(p, n);

  printArray(p, n);

  delete(p);


    return 0 ;
} 
