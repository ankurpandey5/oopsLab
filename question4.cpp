#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=-1;
    for (int k=0;k<n;k++){
        int sum=arr[k], x=1,j;
        for (int i=k+1;i<n;i+=x){
            if((i+x)<n){
                for (j=i;j<=x+i;j++){
                    sum+=arr[j];
                }
                x++;
            }
        }
        if(sum>max){
            max=sum;
        }
    }
    cout<<"Maximum special sum: "<<max;
    return 0;
}