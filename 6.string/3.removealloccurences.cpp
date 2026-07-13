#include<iostream>
#include <string>

//leet code problem no:1910

using namespace std;

string removeOccurrences(string s, string part) {
        while (s.length()>0 && s.find(part) < s.length()){
            int str = s.find(part);
            s.erase(str,part.length());
        }
        return s;
    };

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<<removeOccurrences(s,part); //exected = "dab"
    return 0;
}