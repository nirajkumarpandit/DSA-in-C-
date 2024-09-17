#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={22,5,9,4,-8};
    int size=5;
    int smallest = INT_MAX;   // INT_MAX (+ Infinity)
    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]<smallest){
            smallest=arr[i];  //smallest update
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"smalleest is = "<<smallest<<endl;
    cout<<"largest is = "<<largest<<endl;
}

