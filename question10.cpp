#include<iostream>
using namespace std;
class Invoice{
    private:
        string partNumber;
        string partDescription;
        int quantity;
        double price;
    public:
        Invoice(){
            partNumber="6345896";
            partDescription="healthy";
            quantity=10;
            price=2000;
        }
        void setPartNumber(string partNumber){
            this->partNumber = partNumber;
        }
        void setPartDescription(string partDescription){
            this->partDescription = partDescription;
        }
        void setQuantity(int quantity){
            this->quantity = quantity;
        }
        void setPrice(double price){
            this->price = price;
        }
        string getPartNumber(){
            return partNumber;
        }
        string getPartDescription(){
            return partDescription;
        }
        int getQuantity(){
            return quantity;
        }
        double getPrice(){
            return price;
        }
        double getInvoiceAmount(double price, int quantity){
            if(price<0){
                price=0;
            }
            if(quantity<0){
                price=0;
            }
            return price*quantity;
        }
};
int main(){
    Invoice d1;
    d1.setPartNumber("6568962");
    d1.setPartDescription("it is healthy");
    d1.setQuantity(20);
    d1.setPrice(2000);

    string partNumber = d1.getPartNumber();
    string partDescription = d1.getPartDescription();
    int quantity = d1.getQuantity();
    double price = d1.getPrice();

    double res = d1.getInvoiceAmount(price,quantity);
    cout<<"Number of part: "<<partNumber<<endl;
    cout<<"Description: "<<partDescription<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Invoice Amount: "<<res<<endl;
}
