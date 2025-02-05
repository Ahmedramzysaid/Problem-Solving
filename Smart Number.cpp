#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_smart_number(int num) {
   int cnt =0 ; 
    for (int i = 1 ; i*i <=  num ;i++) 
    {
      if (num %i == 0) 
      {
        cnt++; 
        if (num/i !=  i) cnt++ ;
      }
    }
    if (cnt%2 == 0) return false; 
    return  true ;
}

int main() {
    
    int test_cases;
    cin >> test_cases;
    int num;
    for(int i = 0; i < test_cases; i++) {
        cin >> num;
        bool ans = is_smart_number(num);
        if(ans) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}



