//EXPERIMENT-5
// PALAK SONI
// 24070123069
// ENTC - A3
//Problem Statement:Write a program to find the largest number in C++

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a."<<endl;
    cin>>a;
     cout<<"Enter the value of b."<<endl;
    cin>>b;
     cout<<"Enter the value of c."<<endl;
    cin>>c;
    
    if(a>b& a>c){
        cout<<"a is the largest number."<<endl;
    }else if(b>c & b>a){
        cout<<"b is the largest number."<<endl;
    }else{
       
    cout<<"c is the largest number."<<endl;
    }
    
    
    return 0;
    
}

/*
Output
Enter the value of a.
67
Enter the value of b.
89
Enter the value of c.
90
c is the largest number.
*/
