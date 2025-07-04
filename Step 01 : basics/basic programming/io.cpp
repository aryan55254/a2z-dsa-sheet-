#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "hello , what is your name ?" << endl;
    string x ;
    cin >> x;
    cout << "hello" << x << endl;
    string y;
    cout << "input something:" <<endl;
    cin.ignore(); // when we iput in x it leaves a enter buffer which get read by getline so to avoid that we use this 
    getline(cin , y); //if u want to input a full line
    cout << y;
    return 0;
}