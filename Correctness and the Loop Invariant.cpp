#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n ;  cin >> n ; 
   vector<int> v(n) ;
   for (auto &it :  v) cin >> it; 
   sort(v.begin() , v.end()) ;
   for (auto it : v) cout << it << " " ;  
    return 0;
}
