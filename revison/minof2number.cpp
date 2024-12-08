#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cout <<  "enter two number :"<<endl;
    cin>>num1 >> num2;
    if(num1>=num2){
        cout << "Num1 is greater than num2" << endl;
    }
    else{
        cout << "Num2 is greater than num1" << endl;
    }
    return 0;
}
