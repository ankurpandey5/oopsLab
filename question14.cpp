#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        void setReal(int real){
            this->real = real;
        }
        void setImg(int img){
            this->img = img;
        }
        Complex operator +(Complex d2){
            Complex d3;
            d3.real = real + d2.real;
            d3.img = img + d2.img;
            return d3;
        }
        Complex operator -(Complex d2){
            Complex d3;
            d3.real = real - d2.real;
            d3.img = img - d2.img;
            return d3;
        }
        bool operator ==(Complex d2){
            if(real==d2.real && img==d2.img){
                return true;
            }
            else{
                return false;
            }
        }
        void show(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};
int main(){
    Complex d1,d2,d3;
    d1.setReal(8);
    d1.setImg(5);
    d2.setReal(8);
    d2.setImg(5);
    d3 = d1 + d2;
    d3.show();
    d3=d1 - d2;
    d3.show();
    int temp = (d1 == d2);
    if(temp==1){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
}
