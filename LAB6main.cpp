#include <iostream>
using namespace std;

double eq(double n){
    if(n > 0)   {
        return ((double(n)/double((n+2))-10)) * eq(n-1);
    }
    else
        return 1;
}

double eq(){
    int x;
    cout<<"Please enter an integer: "<<endl;
    cin >> x;

    if(x > 0){
        return (x / (x + 2)) - 10;   }
    else{
        return 1; }
}

int main() {
    cout << "Please enter a number: " << endl;
    int n;
    cin >> n;
    cout << eq(n) << endl;
    cout << eq() << endl;
}
