#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'waiter' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY number
 *  2. INTEGER q
 */
   vector<int> res; 
void prime( )
{
   vector<bool> v(10001, true);
   v[0] =  v[1] =  false ;
   for (int i  =2  ;i*i<= 10001 ; i++)
   {
     for (int j = i*2  ;  j<= 10001 ;j+=i)
     {
       if (v[j])
         v[j]= false ;
     }
   }
   for (int i =  2; i  < 10001 ;i++) 
   {
     if(v[i]) res.push_back(i) ;
   }
  // return  res[pos-1];
}
map<int,bool> m ;
vector<int> waiter(vector<int> number, int q) {
 prime() ;
 vector<int> ans ;
 bool  flag =  true ;
 for (int i = 0 ; i< q ;i++  )
 {
   int a =  res[i] ;
   if (flag)
   {
     for (int j =0 ;  j <number.size();j++)
   {
     if (number[j] % a == 0)
     {
       if (!(m[j]))
       {
         ans.push_back(number[j]) ;
       }
       m[j] = true; 
     }
   }
   flag =  false ;
   }
   else {
      for (int j =number.size()-1 ;  j>= 0 ; j--)
   {
     if (number[j] % a == 0)
     {
       if (!(m[j]))
       {
         ans.push_back(number[j]) ;
       }
       m[j] = true; 
     }
   }
   flag =  true  ;
     
   }
   
   
 }
 if (number.size() !=  ans.size())
 {
   if (!(flag))
   {
      for (int i =0 ;  i <number.size();i++)
   {
     if (!(m[i])) ans.push_back(number[i]) ;
   }
   }
   else {
       for (int i =number.size()-1 ; i>=0 ; i--)
   {
     if (!(m[i])) ans.push_back(number[i]) ;
   }
   }
  
 }
 return   ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int q = stoi(first_multiple_input[1]);

    string number_temp_temp;
    getline(cin, number_temp_temp);

    vector<string> number_temp = split(rtrim(number_temp_temp));

    vector<int> number(n);

    for (int i = 0; i < n; i++) {
        int number_item = stoi(number_temp[i]);

        number[i] = number_item;
    }

    vector<int> result = waiter(number, q);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
