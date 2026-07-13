#include<iostream>
#include<string>
#include<algorithm>

//leetcode problem no: 125

using namespace std;

bool isAlphanumeric(char ch){
    if(((ch>='0' &&ch<='9')) || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    else{
        return false;
    }
}

bool checkpalindrome(string &s){
    int str=0;
    int end=s.size()-1;
    while(str<end){
        if(isAlphanumeric(!s[str])){
            str++ ; continue;
        }
        if(isAlphanumeric(!s[end])){
            end-- ; continue;
        }
        if(tolower(s[str])!=tolower(s[end])){
            return false;
        }
        str++;
        end--;
        
    }
    return true;
}

int main(){
    string s="madam";
    if(checkpalindrome(s)){
        cout<<"  palindrome";
    }
    else{
        cout<<"  not a palindrome";
    }
    return 0;
} 