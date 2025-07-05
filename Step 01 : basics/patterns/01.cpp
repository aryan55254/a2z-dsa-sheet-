//*****
//*****
//*****
//*****
//*****
//outer loop count no of lines 
//inner loop focus on columns connect them somehow to the rows 
//print whatever it is inside the inner loop 
//observe symmetry (optional)
#include <iostream>
using namespace std;

int main(){
    for (int i = 0 ; i < 5 ; i++){
     for(int j = 0; j < 5 ; j++){
        cout << "*" ;
     }
     cout << endl;
    }
    return 0;
}