#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {
  map  <char , int> m ;
  for (int i = 0 ;  i < s1.size() ;i++) 
   { 
      m[s1[i]]++ ;
   }
   map  <char , int> m2 ;
  for (int i = 0 ;  i < s2.size() ;i++) 
   { 
      m2[s2[i]]++ ;
   }
   int cnt = 0 ; 
   for (auto it :  m ) 
   {
     cnt+= (min(it.second , m2[it.first])*2) ;
   }
   return (s1.size()+s2.size() - cnt) ;
   
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
