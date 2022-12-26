/*
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x = s[0];
    int same=0,diff=0;
    bool flag = false;
    for(int i = 0;i<s.length();i++){
        if(flag) {
            x = s[i];
            flag = false;
        }
        char c = s[i];
        if(c == x){
            same++;
        }else{
            diff++;
        }
        if(same == diff){
            answer++;
            flag = true;
            same = diff = 0;
        }
    }
    if(same != 0 || diff != 0) answer++;
    return answer;
}
*/