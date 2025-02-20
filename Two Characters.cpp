#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'alternate' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int alternate(string s) {
set <char> a  ; 
for(auto  it  : s) a.insert(it) ;
vector<char> v; 
for(auto it : s) v.push_back(it) ;
int ans = 0 ; 

for(int  i =0  ; i < v.size() ;i++)
{
    for (int  j = i+1 ; j < v.size() ;j++)
    {
      string  str ="" ;
          for (int m = 0 ;  m < s.size() ;m++)
          {
              if (s[m] == v[i] ||  s[m] == v[j])
                 str+= s[m] ;
          }
          bool flag =  true   ;
          for (int k  = 0  ;k  <  str.size()-1 ;k++)
          {
             if (str[k] ==  str[k+1]) flag = false  ;
          }
          if(flag)
          ans = max(ans , (int)str.size());
    }
}
return ans  ;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

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
