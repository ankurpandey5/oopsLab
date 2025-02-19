#include <iostream>
using namespace std;

class demo {
    private:
        int num1;
        int num2;
    public:
        void setValues(int num1,int num2) {
            this->num1 = num1;
            this->num2 = num2;
        }
        void display() {
            cout << "The Sum is: "<<(num1+num2)<<endl;
        }
};
int main() {
    demo d1;
    d1.setValues(10, 20); 
    d1.display(); 
    return 0;
}
