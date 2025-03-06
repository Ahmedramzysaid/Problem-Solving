#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int t  ;  cin >> t; 
 while (t--) {
 int n ,m ;  cin >>n  >>m ; 
 vector<long long>v(n) ;
 for (auto &it : v) cin >>it; 
 deque<long long> dq ;
 //long long mx =-1000 ;
      vector<long long> res;
         for (int i = 0; i < m; i++) {
           
            while (!dq.empty() && v[dq.back()] <= v[i])
                dq.pop_back();
            dq.push_back(i);
        }
        res.push_back(v[dq.front()]);
        for (int i = m; i < n; i++) {
         
            if (!dq.empty() && dq.front() <= i - m)
                dq.pop_front();

            while (!dq.empty() && v[dq.back()] <= v[i])
                dq.pop_back();

            dq.push_back(i);
            res.push_back(v[dq.front()]);
        }

 for (auto it : res) cout << it  << " " ;
 cout << endl ;
 }
    return 0;
}
