/*

**Objective
Today, we're working with regular expressions. Check out the Tutorial tab for learning materials and an instructional video!

**Task
Consider a database table, Emails, which has the attributes First Name and Email ID. Given @N rows of data simulating the Emails
table, print an alphabetically-ordered list of people whose email address ends in "@gmail.com".

**Input Format

The first line contains an integer, @N, total number of rows in the table.
Each of the @N subsequent lines contains  space-separated strings denoting a person's first name and email ID, respectively.

**Constraints

2 <= N <= 30
Each of the first names consists of lower case letters [a - z] only.
Each of the email IDs consists of lower case letters [a - z], '@' and '.' only.
The length of the first name is no longer than 20.
The length of the email ID is no longer than 50.

**Output Format

Print an alphabetically-ordered list of first names for every user with a gmail account. Each name must be printed on a new line.

**Sample Input

6
riya riya@gmail.com
julia julia@julia.me
julia sjulia@gmail.com
julia julia@gmail.com
samantha samantha@gmail.com
tanya tanya@gmail.com

**Sample Output

julia
julia
riya
samantha
tanya

*/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector <string> aux;

    for (int N_itr = 0; N_itr < N; N_itr++) {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        string firstName = firstNameEmailID[0];

        string emailID = firstNameEmailID[1];

        //cout << emailID.find("@gmail.com") << firstName.length() << endl;

        //int beginGmail = emailID.find ("@gmail.com");

        if (emailID.find ("@gmail.com") < firstNameEmailID_temp.length())
            aux.push_back (firstName);
    }

    sort (aux.begin(), aux.end());

    for (vector<string>::iterator it = aux.begin(); it != aux.end (); ++it) {
        cout << *it << endl;
    }

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
