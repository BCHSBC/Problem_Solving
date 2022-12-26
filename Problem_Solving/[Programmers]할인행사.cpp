/*
#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;
map <string, int> m;
map <string, int> valid;
int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    for (int i = 0; i < want.size(); i++) {
        m[want[i]] = number[i];
        valid[want[i]] = 1;
    }
    int total = 10;
    for (int i = 0; i < 10; i++) {
        if (valid[discount[i]] == 1) {
            m[discount[i]]--;
            if (m[discount[i]] >= 0) total--;

            if (total == 0) {
                answer++;
            }
        }
    }
    for (int i = 10; i < discount.size(); i++) {
        if (valid[discount[i]] == 1) {
            m[discount[i]]--;
            if (m[discount[i]] >= 0) total--;
        }
        if (valid[discount[i - 10]] == 1) {
            m[discount[i - 10]]++;
            if (m[discount[i - 10]] > 0) total++;
        }

        if (total == 0) {
            answer++;
        }
    }
    return answer;
}
*/