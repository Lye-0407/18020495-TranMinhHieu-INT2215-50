#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<string> permutation(string character_list)
{
    if(character_list.length() == 1)
        return {character_list};
    vector<string> res = {};
    for(int i = 0; i < character_list.length(); i++)
    {
        char first_char = character_list[i];
        string new_character_list = character_list;
        new_character_list.erase(new_character_list.begin() + i);

        vector<string>permutation_list = permutation(new_character_list);

        for(string permu_str: permutation_list)
        {
            res.push_back(first_char + permu_str);
            return res;
        }
    }
}
int main()
    vector<string> permutation_result = permutation(abc)
    for(string s: permutation_result)
        cout << s << endl;
    return 0;

