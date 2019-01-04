#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
long int countA=0,countO=0;

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(long int s,long int t,long int a,long int b, vector<long int> apples, vector<long int> oranges) {
    while (!apples.empty())
  {
      if((apples.back()+a)>=s&&(apples.back()+a)<=t)
      countA++;
      apples.pop_back();
  }
    cout<<countA<<endl;

 while (!oranges.empty())
  {
      if((oranges.back()+b)>=s&&(oranges.back()+b)<=t)
      countO++;
     oranges.pop_back();
  }
    cout<<countO;

}


int main()
{
    string st_temp;
    getline(cin, st_temp);

    vector<string> st = split_string(st_temp);

   long int s = stoi(st[0]);

    long int t = stoi(st[1]);

    string ab_temp;
    getline(cin, ab_temp);

    vector<string> ab = split_string(ab_temp);

    long int a = stoi(ab[0]);

   long int b = stoi(ab[1]);

    string mn_temp;
    getline(cin, mn_temp);

    vector<string> mn = split_string(mn_temp);

   long int m = stoi(mn[0]);

    long int n = stoi(mn[1]);

    string apples_temp_temp;
    getline(cin, apples_temp_temp);

    vector<string> apples_temp = split_string(apples_temp_temp);

    vector<long int> apples(m);

    for (int i = 0; i < m; i++) {
        long int apples_item = stoi(apples_temp[i]);

        apples[i] = apples_item;
    }

    string oranges_temp_temp;
    getline(cin, oranges_temp_temp);

    vector<string> oranges_temp = split_string(oranges_temp_temp);

    vector<long int> oranges(n);

    for (int i = 0; i < n; i++) {
        long int oranges_item = stoi(oranges_temp[i]);

        oranges[i] = oranges_item;
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
