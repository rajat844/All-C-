#include <bits/stdc++.h>

using namespace std;
bool isValid(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (isalpha(word[i]) == false or word[i] != '-' or word[i] != '?' or word[i] != '!' or word[i] != ',' or word[i] != '.')
            return false;
    }
    return true;
}
int howMany(string sentence)
{
    int wc = 0;
    unordered_map<string, int> mp;
    int i = 0;
    string word = "";
    while (i < sentence.length())
    {
        
        if (sentence[i] == ' ')
        {
            if (isValid(word) == true)
            {
                mp[word]++;
                word = "";
            }
            else
                word = "";
        }
        else
        {
            word += sentence[i];
        }

        i++;
    }

    return mp.size();
}

int main()
{
    return 0;
}