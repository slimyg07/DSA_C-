#include<bits/stdc++.h>
using namespace std;

int ssum(int n){
    if(n==1)
    return 1;

    return n+ ssum(n-1);
}


int main(){

    
    cout<<ssum(10);


    int n= 10;
    int sum =0;
    while(n>0){
        sum = sum + n;
        n--;
    }

    cout<<endl<<sum;
        

    return 0;

}