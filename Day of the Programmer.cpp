#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

/*
  int y;
    scanf("%d", &y);
    int daysInFebruary;
    if (y == 1918) {
        daysInFebruary = 28 - 13;
    } else if (y < 1918) {
        if (y % 4 == 0) {
            daysInFebruary = 29;
        } else {
            daysInFebruary = 28;
        }
    } else {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            daysInFebruary = 29;
        } else {
            daysInFebruary = 28;
        }
    }
    int day = 256 - 31 - daysInFebruary - 31 - 30 - 31 - 30 - 31 - 31;
    assert(1 <= day && day <= 30);
    printf("%02d.%02d.%04d", day, 9, y);
*/
string dayOfProgrammer(int year) {
int x   ;
if (year == 1918) {
        x = 28 - 13;
    } else if (year < 1918) {
        if (year % 4 == 0) {
            x = 29;
        } else {
            x = 28;
        }
    } else {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            x = 29;
        } else {
            x = 28;
        }
    }
    int d = 256 - 31 - x - 31 - 30 - 31 - 30 - 31 - 31;
    string res=  "" ;
    while (d) {
    res += d%10 + '0' ;
    d/=10 ;
    }
    int i = 0 , l = res.size()-1 ;
    while (i<l) {
    swap(res[i] , res[l]) ;
    l-- ;
    i++ ;
    } 
    string res1 ="" ;
     while (year) {
    res1 += year%10 + '0' ;
    year/=10 ;
    }
    int r = 0 , l1 = res1.size()-1 ;
    while (r<l1) {
    swap(res1[r] , res1[l1]) ;
    l1-- ;
    r++ ;
    } 
    return res+".09."+res1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

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
