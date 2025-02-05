#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
map <char , int> m ; 
for (int i = 0 ;i < s.size() ;i++) 
{ 
  m[s[i]]++ ;
}
int cnt  = 0 ; 
for (auto it :  m) 
{
  if (it.second % 2 !=0) cnt++ ;
}
if (cnt  == 1 ||  cnt == 0) return "YES";
return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
