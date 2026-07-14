#include <iostream>
#include <vector>

using namespace std;
// leetcode question no: 443

int compress(vector<char> &chars)
{
    int idx = 0; // write pointer
    int i = 0;   // read pointer
    int n = chars.size();
    while (i < n)
    {
        char current = chars[i];
        int count = 0;
        while (i < n && chars[i] == current)
        {
            count++;
            i++;
        }
        chars[idx++] = current;
        if (count > 1)
        {
            string str = to_string(count);
            for (char dig : str)
            {
                chars[idx++] = dig;
            }
        }
    }
    return idx;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int len = compress(chars);

    cout << "Compressed Length: " << len << endl;

    cout << "Compressed Array: ";
    for (int i = 0; i < len; i++)
    {
        cout << chars[i] << " ";
    }

    cout << endl;

    return 0;
}