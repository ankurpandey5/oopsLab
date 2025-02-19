#include<iostream>
using namespace std;
class Area{
    public:
        int CalculateArea(int l){
            int area= l*l;
            return area;
        }
        int CalculateArea(int a,int b){
            int area = a*b;
            return area;
        }
        double CalculateArea(double base,double height){
            double area = (base*height)/2;
            return area;
        }
};
int main(){
    Area d1;

    cout<<"Area of square is: "<<d1.CalculateArea(4)<<endl;
    cout<<"Area of rectangle is: "<<d1.CalculateArea(2,3)<<endl;
    cout<<"Area of triangle is: "<<d1.CalculateArea(4.0,6.0)<<endl;
}