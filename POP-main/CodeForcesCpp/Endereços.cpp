#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> digits;
bool is_allowed[10] = {false};
vector<string> results;
bool isValidSegment(const string& s) {
    if (s.empty() || s.length() > 3) return false;
    if (s.length() > 1 && s[0] == '0') return false;
    int val = stoi(s);
    return val >= 0 && val <= 255;
}
bool usesAllDigits(const string& ip) {
    bool used[10] = {false};
    int count = 0;
    for (char c : ip) {
        if (c >= '0' && c <= '9') {
            int d = c - '0';
            if (!used[d]) {
                used[d] = true;
                count++;
            }
        }
    }
    return count == n;
}
void checkAndSplit(const string& pal) {
    int len = pal.length();
    for (int i = 1; i <= 3 && i < len; ++i) {
        for (int j = 1; j <= 3 && i + j < len; ++j) {
            for (int k = 1; k <= 3 && i + j + k < len; ++k) {
                int l = len - (i + j + k);
                if (l >= 1 && l <= 3) {
                    string p1 = pal.substr(0, i);
                    string p2 = pal.substr(i, j);
                    string p3 = pal.substr(i + j, k);
                    string p4 = pal.substr(i + j + k, l);

                    if (isValidSegment(p1) && isValidSegment(p2) && 
                        isValidSegment(p3) && isValidSegment(p4)) {
                        
                        string ip = p1 + "." + p2 + "." + p3 + "." + p4;
                        if (usesAllDigits(ip)) {
                            results.push_back(ip);
                        }
                    }
                }
            }
        }
    }
}

void generateHalf(string current, int target_total_len) {
    int half_len = (target_total_len + 1) / 2;
    if ((int)current.length() == half_len) {
        string pal = current;
        string rev = current;
        if (target_total_len % 2 != 0) {
            rev.pop_back();
        }
        reverse(rev.begin(), rev.end());
        pal += rev;
        
        checkAndSplit(pal);
        return;
    }

    for (int d : digits) {
        current.push_back('0' + d);
        generateHalf(current, target_total_len);
        current.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!(cin >> n)) return 0;

    digits.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
        is_allowed[digits[i]] = true;
    }
    if (n > 6) {
        cout << 0 << "\n";
        return 0;
    }
    for (int len = 4; len <= 12; ++len) {
        generateHalf("", len);
    }
    cout << results.size() << "\n";
    for (const string& ip : results) {
        cout << ip << "\n";
    }

    return 0;
}