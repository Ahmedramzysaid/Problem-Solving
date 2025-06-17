#include <bits/stdc++.h>
using namespace std;

int main() {
   long unsigned int n , k ;  cin >> n >> k ; 
    vector<long unsigned int>v(n) ;
   for(auto &it : v) cin >> it ; 
    vector<long unsigned int> freq(k, 0);
   
    for (long unsigned int num : v) {
        freq[num % k]++;
    }

    long unsigned int res = 0;

    
    res += min(freq[0],(long unsigned int) 1);

    
    for (int i = 1; i <= k / 2; i++) {
        if (i == k - i) {
            
            res += min(freq[i], (long unsigned int)1);
        } else {
            res += max(freq[i], freq[k - i]);
        }
    }

    cout<<  res;
    
    return 0 ;
}
