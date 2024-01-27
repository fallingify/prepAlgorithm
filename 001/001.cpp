#include <iostream>
using namespace std;

int main() {
    int n; 
    string str;
    cin >> n;
    cin >> str;
    int sum; 

    for (int i = 0; i < str.length(); i++){
        sum += str[i] - '0'; 
    }
    cout << sum << "\n";
    return 0;
}