#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
string  res = "" ;
long long num  ;
num= s[0] -'0' ;
num  =  num *10 + s[1]- '0' ;
if (s[s.size()-2] == 'P')
{
  if (num  < 12 ) num+= 12 ; 
} 
else  num = num %12 ;
int x  =  num ; 
while (num) {
res+=  num%10+ '0' ; 
num/=10 ;
}
if (x < 12)
{
  s[0] = '0' ;
  if (x !=0 )
  s[1] = res[0] ;
  else s[1] ='0' ;
  
}
else {
s[0] =  res[1] ;
s[1] =  res[0] ; 
}
res ="" ;
for (int i = 0 ;  i  < s.size()-2 ; i++) 
res += s[i] ;
return  res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
