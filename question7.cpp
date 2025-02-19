#include<iostream>
using namespace std;
class bankAccount{
    private:
        string depositer;
        long int accountNumber;
        string accountType;
        long int balanceAmount;
    public:
        void setInitialValues(string depositer,long int accountNumber,string accountType,long int balanceAmount){
            this->depositer = depositer;
            this->accountNumber = accountNumber;
            this->accountType = accountType;
            this->balanceAmount = balanceAmount;
        }
        void deposit(int depositAmount){
            cout<<"Balance before deposit: "<<this->balanceAmount<<endl;
            this->balanceAmount = this->balanceAmount + depositAmount;
        }
        void withdraw(int withdrawAmount){
            if(this->balanceAmount < withdrawAmount){
                cout<<"Insufficient Balance"<<endl;
            }
            else{
                cout<<"--------Withdrawing-------"<<endl;
                cout<<"Current Balance: "<<this->balanceAmount<<endl;
                this->balanceAmount = this->balanceAmount - withdrawAmount;
                cout<<"Balance after withdrawl: "<<this->balanceAmount<<endl;
            }
        }
        void display(){
            cout<<"Display: "<<endl;
            cout<<"Name of depositer: "<<this->depositer<<endl;
            cout<<"Account Number: "<<this->accountNumber<<endl;
            cout<<"Account Type: "<<this->accountType<<endl;
            cout<<"Balance Amount: "<<this->balanceAmount<<endl;
        }
};
int main(){
    bankAccount d1;
    d1.setInitialValues("Ankur",1256348,"Savings",20000);
    d1.deposit(500);
    d1.withdraw(2000);
    d1.display();
}