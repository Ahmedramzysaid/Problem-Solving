#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

bool check(int x) {
    long long num = static_cast<long long>(x) * x;
    string numStr = to_string(num);
    int d = to_string(x).size();
    int len = numStr.size();
    
    string rightStr = numStr.substr(len - d);
    string leftStr = len - d > 0 ? numStr.substr(0, len - d) : "0";
    
    long long left = stoll(leftStr);
    long long right = stoll(rightStr);
    
    return (left + right == x);
}



void kaprekarNumbers(int p, int q) {
  bool  flag =  true  ;
for (int i   = p ;i<=q; i++)
{
  if (check(i)){ cout << i <<  " " ; flag = false ;}
}
if (flag) cout << "INVALID RANGE" ;
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
