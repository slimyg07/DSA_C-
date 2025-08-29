#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

struct Student{
    int rollNo;
    string Name;
    string standards;

};


int main(){
    struct Student S{1,"Harsh", "VII"};
    // cout<<"Name : "<<S.Name<<" Roll No : "<<S.rollNo<<" Class : "<<S.standards<<endl;

    S.Name = "Vardhan";
    S.rollNo = 11;
    S.standards = "X";

    // cout<<"Name : "<<S.Name<<" Roll No : "<<S.rollNo<<" Class : "<<S.standards<<endl;

    // cout<<sizeof(S);
    int arr[]= {1,2,3,4,5};

    int *pa;
    pa = arr;
        cout<<sizeof(string)<<endl;


    // cout<<endl<<pa[2]<<endl;

    struct Student *p;
    p = &S;
    cout<<sizeof(p)<<endl;
    // cout<<p<<endl<<p->Name<<endl;

    int *mal;
    mal = new int[5];
    int count = 0;
    cout<<sizeof(mal);
    for(int i = 0 ; i < 5; i++){
        count++;
        // mal[i] = count;
    }
    // cout<<mal<<endl;
    for(int i = 0; i<5 ; i++){
    // cout<<mal[i]<<" ";
    }
    delete [] mal;

    int x= 5;
    int *xa = &x;
    printf("\n%d", *xa++);
    printf("\n%d", ++*xa);


}