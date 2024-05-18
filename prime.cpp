#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main (){
    int n;
    cout << "Enter N: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        if(isPrime(i))
        cout << i << " ";
    }
    return 0;
}