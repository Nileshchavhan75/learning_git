#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number: ";
    cin>>a;

    if(a < 1){
        return 0;
    }
    for(int i = 2; i*i<a; i++){
        if(a % i == 0){
            cout<<"Not prime"<<endl;
            return 0;
        }
    }
    cout<<"Prime";
}