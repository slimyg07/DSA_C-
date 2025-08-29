#include<bits/stdc++.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

// Call by value for structure as a parameter

int areaByValue (struct Rectangle r1){
    return r1.length*r1.breadth;
}

// call by reference for structure as a parameter

int area(struct Rectangle &r1){
    r1.breadth++;
    r1.length++;
    return r1.length*r1.breadth;
}

// call by address for structure as a parameter

int areaAdd (struct Rectangle *r1, int l){
    r1->length= l;

    return r1->length*r1->breadth;

}



int main(){

    struct Rectangle r1 = {10,5};
    cout<<r1.breadth*r1.length<<endl;
    printf("%d\n", area(r1));

    cout<<r1.length<<" "<<r1.breadth;
   
    
    return 0;

}