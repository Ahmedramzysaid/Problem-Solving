#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
  int t ;  cin >> t ;
  queue<int>q ;
  while(t--)
  {
    int a ;  cin >>a  ;
    if (a==1) 
    {
      int b ;  cin >> b ;
      q.push(b)  ;
      
      
    }else if (a==2)
    {
      if (!q.empty())
      {
        q.pop() ;
      }
    }
    else{
      if (!q.empty())
      {
        cout << q.front() << endl ;
      }
    }
  }
    return 0;
}
