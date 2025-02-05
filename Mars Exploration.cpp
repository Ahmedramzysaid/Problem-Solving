#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
int cnt =0 ; 
string str ="SOS" ;
int j = 0 ;
for (int i  =0  ; i <  s.size() ;i++) 
{ 
    if(s[i] !=  str[j%3])
      cnt++ ;
      j++ ;
}
return cnt ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
