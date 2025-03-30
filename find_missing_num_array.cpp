#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout<< "Enter the value of n: ";
    cin>>n;

    int arr[n - 1];

    cout  << n - 1 ;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];    // Take array input
        sum += arr[i];
    }

    int ans = n * (n + 1) / 2;    // Sum of first n natural numbers
    cout << ans - sum;

    return 0;
}

