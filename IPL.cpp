// Link to theProblem: https://www.codechef.com/ZCOPRAC/problems/ZCO14004
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main() {
	// your code goes here
	int n;
  cin >> n;
  int arr[n];
  int dp[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  dp[0] = arr[0];
  dp[1] = arr[1];
  dp[2] = arr[2];
  int sum = 0;
  for(int i = 0; i < n; i++){ 
    sum += arr[i];
    }
  for(int i = 3; i < n; i++){
    dp[i] = arr[i] + min({dp[i-1],dp[i -2], dp[i - 3]});
    
  }
  cout << sum - min({dp[n-1], dp[n-2], dp[n-3]});
  }
