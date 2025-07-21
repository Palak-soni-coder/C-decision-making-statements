// EXP-5
// PALAK SONI
// 24070123069
// ENTC A3
//Problem statement: Write a program to find whether character entered by user is vowel or consonant.


#include <iostream>
using namespace std;

int main(){
    
    char ch;
    cout<<"Enter a character."<<endl;
    cin>>ch;
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        cout<<"The given character is a vowel."<<endl;
    }
    else{
        cout<<"The given character is a consonant."<<endl;
        
    }
    return 0;
}

/*output
Enter a character.
p
The given character is a consonant.
*/
