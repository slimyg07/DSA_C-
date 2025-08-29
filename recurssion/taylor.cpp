#include<iostream>
using namespace std;


 int ans(int num, int pow){
    if(pow == 0)
        return 1;

    if(pow%2==0)
        return ans(num*num, pow/2);
    return num*ans(num*num, (pow-1)/2);

    // return num*ans(num,pow-1);
 }



int fact(int n){
    
    if(n==1 )
        return 1;
    return n*fact(n-1);
}

int taylor(int x, int n){
    static double num = 0;
    if(n==0)
        return 1;
    num = num +(double)(ans(x,n))/fact(n);
    return taylor(x, n-1);

}

int main(){

    cout<<taylor(2,10);

}