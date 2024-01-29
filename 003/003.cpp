#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 

    int n, quizNum; 
    cin >> n >> quizNum; 

    int sum[100000] = {};

    for(int i=1; i<=n; i++) {
        int ivalue; 
        cin >> ivalue;
        sum[i] = sum[i-1] + ivalue; 
    }
    

    for(int i=0; i<n; i++){
        int start, end; //1 3
        cin >> start >> end;
        int res = sum[end] - sum[start - 1];
        cout << res << "\n"; 
    }
    return 0;
}