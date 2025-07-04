int add (int a , int b){
    return a + b ;
}
//basic function this is also pass by value and default copy of variable is passed ,changes inside the function don't effect original 
int main (){
    cout << add(3,4);
}
//pass by refernce , refernce to og variable is passed changes affect the original & is used

void update(int &x) {
    x = x + 10;
}

int main() {
    int a = 5;
    update(a);
    cout << a;  // Output: 15 (changed)
}
