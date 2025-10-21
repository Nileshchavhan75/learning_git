#include<iostream>
using namespace std;
int main(){
    int a, sum = 0, rem, temp;
    cout<<"Enter number to check armstrong or not: ";
    cin>>a;

    temp = a;

    while (a > 0)
    {
     rem = a % 10;
     sum = sum + (rem*rem*rem);
     a = a /10;   
    }

    if(temp == sum){
        cout<<"ArmStrongNumber";
    }else{
        cout<<"Not ArmStrongNumber";
    }
    return 0;
}