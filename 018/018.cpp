#include <iostream>
#include <vector>

using namespace std;

int main(){
  ios::sync_with_stdio(false); 
  cin.tie(NULL); cout.tie(NULL); 
  int n; cin >> n;  

  vector<int> a(n, 0); 

  for(int i=0; i<n; i++) {
    cin >> a[i]; 
  }

  vector<int> s(n, 0);

  for(int i=0; i<n; i++) { // 0 1 2 3 ... n

    int insert_point = i; 
    int insert_value = a[i]; 

    for(int j=i-1; j>=0; j--) { //n n-1 ... 3 2 1 0
      if(a[j] < a[i]){
          insert_point = j + 1;
          break; 
      } //들어갈 자리 찾기
      if(j == 0){
        insert_point = 0; 
      }

    }

    for(int j=i; j>insert_point; j++) {
      a[j] = a[j-1]; 
    } // 한칸씩 뒤로 미룸

    a[insert_point] = insert_value;  //값 넣음

  }
  s[0] = a[0]; 

  for(int i=1; i< n; i++) {
    s[i] = s[i-1] + a[i]; 
  } //자신앞사람들 인출시간합 + 자신인출시간

  int sum = 0; 
  for(int i=0; i<n; i++) {
    sum = sum + s[i]; 
  }
  cout << sum; 


  return 0; 
}