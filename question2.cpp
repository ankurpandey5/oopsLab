#include<iostream>
#include<string>
using namespace std;
int main(){
    string string,newString="";
    char element;
    cout<<"Enter the string: ";
    getline(cin,string);
    cout<<"Enter the element: ";
    cin>>element;
    int length=string.length();
    int i;
    for (i=0;i<length;i++){
        if(string[i] != element){
            newString+=string[i];
        }
    }
    cout<<"Updated String: "<<newString;
}