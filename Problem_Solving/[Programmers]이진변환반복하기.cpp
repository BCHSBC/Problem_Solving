/*
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int turn = 0;
    int eli = 0;
    while (s != "1") {
        turn++;
        string tmp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') tmp += s[i];
            else eli++;
        }
        int len = tmp.length();
        tmp = "";
        while (len > 0) {
            if (len % 2 == 0) {
                tmp = "0" + tmp;
            }
            else {
                tmp = "1" + tmp;
            }
            len /= 2;
        }
        s = tmp;
    }
    answer.push_back(turn);
    answer.push_back(eli);
    return answer;
}
*/