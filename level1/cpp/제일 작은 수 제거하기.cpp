#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    arr.erase(min_element(arr.begin(),arr.end()));
    if(!arr.size()){
        answer.push_back(-1);
    }else{
        answer = arr;
    }
    return answer;
}