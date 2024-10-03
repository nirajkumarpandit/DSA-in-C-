#include<iostream>
using namespace std;
 int main(){
    int n=7;
    int arr[n]={3,-4,5,4,-1,7,-8};
    int maxsum=INT16_MIN;
    for(int st=0; st<n; st++){
        int currsum=0; //initilize current sum
        for(int end=st; end<n; end++){
            currsum +=arr[end];     // update our sum 
            maxsum= max(currsum, maxsum); //find max sum 

        }
    }
    cout<<"The max subarray sum = "<<maxsum;
    return 0;
 }
 //the time complexity is O(n^2)