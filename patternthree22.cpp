#include <iostream>
using namespace std;

int main() {
    int n, row, col;
    cout<< "Enter the number: ";
    cin>> n;
    for(row = 1; row <= n; row=row+1) {
        for(col = 1; col <= n - row; col=col+1) {
            cout << "  "; 
        }
        for(col = row; col >= 1; col=col-1) {
            cout<< col << " "; 
        }
        cout<< endl;
    }
    
}
