#include<iostream>
#include<string.h>
using namespace std;
class nonRepeating{
    private:
        string str;
        int length;
    public:
        nonRepeating(){
            str="";
            length=0;
        }
        void setString(string str){
            this->str=str;
        }
        void setLength(int length){
            this->length=length;
        }
        void check(){
            int counter;
            for(int i=0;i<length;i++){
                counter=0;
                for(int j=0;j<length;j++){
                    if(str[j]==str[i]){
                        counter++;
                    }
                }
                if(counter<=1){
                    cout<<" "<<str[i]<<" ";
                }
            }
        }
};
int main(){
    nonRepeating d1;
    string string;
    cout<<"Enter the string : "<<endl;
    getline(cin,string);
    int length=string.length();
    d1.setString(string);
    d1.setLength(length);
    d1.check();
    return 0;
}
