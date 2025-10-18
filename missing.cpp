#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = n*(n+1)/2;
    int sum2 = 0;
    for(int i = 0; i<n; i++){
        sum2 += arr[i];
    }
     sum  = sum - sum2;
    cout<<"Missing Number: "<<sum;
    return 0;
}