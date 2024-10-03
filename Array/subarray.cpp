/*
       ****Algorithim****
       Print --->>> all possible subarray (always continuous)= n*(n+1)/2 --->> Formula
        1 12 123 1234 12345 
        2 23 234 2345       
        3 34 345 
        4 45 
        5 
       step 1: start;
       step 2: int size of array and input element 
       step 3: set start and end
                for(int st=0; st<n; st++){
                for(int end =st; end<n; end++){
                (start to end )[loop]
                }
             }
        step 4: print  
        step 5: Exit 
*/  


#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
           cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}