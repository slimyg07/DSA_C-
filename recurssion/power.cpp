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

 int main(){
    cout<<ans(2,5);


    return 0;
 }