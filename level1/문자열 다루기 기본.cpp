#include <string>
#include <vector>
#include <cctype>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length() !=4 && s.length() !=6){
        answer = false;
    }
    for(char ch : s){
        if(!isdigit(ch)){
            answer = false;
        }
    }
    return answer;
}