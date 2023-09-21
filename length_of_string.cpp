#include<bits/stdc++.h>
using namespace std;

int lengthOfString(char ch[]){

    int count=0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main()
{
    char name[10];
    cout<<"Enter your name : ";
    cin>>name;

    cout<<"The length is: "<<lengthOfString(name);
    return 0;
}
