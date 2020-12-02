#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'equalStacks' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h1
 *  2. INTEGER_ARRAY h2
 *  3. INTEGER_ARRAY h3
 */

int height(vector<int>a)
{
    int sum=0;
    for(long unsigned int i=0; i<a.size();i++)
    {
        sum = sum + a[i];
    }
    return sum;

}

vector<int> reverse(vector<int>v)
{
    vector<int>res;
    stack<int>s;
    for(long unsigned int i=0; i<v.size();i++)
    {
        s.push(v[i]);
    }


    while (!s.empty())    {
        res.push_back(s.top());
        s.pop();
    }

    return res;



}

int result(vector<int> h1, vector<int> h2, vector<int> h3)
{

    int h1_height=height(h1);
    int h2_height=height(h2);
    int h3_height=height(h3);

    int min_height = min(h1_height, min(h2_height,h3_height));
    while(1)
    {
    while(h1_height>min_height)
    {
        int top= h1.back();
        h1.pop_back();
        h1_height=h1_height-top;
    }

    min_height= min(h1_height, min(h2_height,h3_height));

    while(h2_height>min_height)
    {
        int top = h2.back();
        h2.pop_back();
        h2_height = h2_height -top;

    }
    min_height= min(h1_height, min(h2_height,h3_height));
    while(h3_height>min_height)
    {
        int top = h3.back();
        h3.pop_back();
        h3_height = h3_height-top;

    }
    min_height= min(h1_height, min(h2_height,h3_height));
    if( (min_height==h1_height) && (min_height==h2_height)&& (min_height==h3_height))
        break;
    // else
    //     return  result (h1, h2, h3);
    }
    return min_height;

}


int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    vector<int>h1_reverse= reverse(h1);
    vector<int>h2_reverse= reverse(h2);
    vector<int>h3_reverse= reverse(h3);

    return result(h1_reverse,h2_reverse,h3_reverse);


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n1 = stoi(first_multiple_input[0]);

    int n2 = stoi(first_multiple_input[1]);

    int n3 = stoi(first_multiple_input[2]);

    string h1_temp_temp;
    getline(cin, h1_temp_temp);

    vector<string> h1_temp = split(rtrim(h1_temp_temp));

    vector<int> h1(n1);

    for (int i = 0; i < n1; i++) {
        int h1_item = stoi(h1_temp[i]);

        h1[i] = h1_item;
    }

    string h2_temp_temp;
    getline(cin, h2_temp_temp);

    vector<string> h2_temp = split(rtrim(h2_temp_temp));

    vector<int> h2(n2);

    for (int i = 0; i < n2; i++) {
        int h2_item = stoi(h2_temp[i]);

        h2[i] = h2_item;
    }

    string h3_temp_temp;
    getline(cin, h3_temp_temp);

    vector<string> h3_temp = split(rtrim(h3_temp_temp));

    vector<int> h3(n3);

    for (int i = 0; i < n3; i++) {
        int h3_item = stoi(h3_temp[i]);

        h3[i] = h3_item;
    }

    int result = equalStacks(h1, h2, h3);

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
