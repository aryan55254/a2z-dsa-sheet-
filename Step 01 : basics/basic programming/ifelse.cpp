//if else 
#include <iostream>
using namespace std;

int main(){
    cout << "write a no for odd or even" << endl;
    int x ;
    cin >> x;
    if (x%2==0){
        cout << "it is even" << endl;
    }
    else if (x%2 == 1){
        cout << "it is odd" << endl;
    }
    else cout << "invalid shit" ;
    return 0;
}