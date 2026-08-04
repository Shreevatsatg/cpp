#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    vector<vector<string>> ans;     // Stores all valid partitions
    vector<string> path;            // Current partition

    // Function to check whether s[left...right] is a palindrome
    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    // Backtracking function
    void solve(int start, string &s) {

        // If we have used the entire string,
        // store the current partition.
        if (start == s.size()) {
            ans.push_back(path);
            return;
        }

        // Try every possible substring starting from 'start'
        for (int end = start; end < s.size(); end++) {

            // Proceed only if substring is palindrome
            if (isPalindrome(s, start, end)) {

                // Choose
                path.push_back(s.substr(start, end - start + 1));

                // Explore remaining string
                solve(end + 1, s);

                // Undo choice (Backtracking)
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        solve(0, s);
        return ans;
    }
};

int main(){
    Solution s1;
    string input = "aab";
    vector<vector<string>> result = s1.partition(input);

    // Print the result
    for (const auto &partition : result) {
        cout << "[";
        for (const auto &str : partition) {
            cout << str << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}