#include <bits/stdc++.h>
using namespace std;

// 整数部分、分子、分母、百分数数字部分用这个
string rev_int(string x) {
    reverse(x.begin(), x.end());

    // 去掉前导 0
    while (x.size() > 1 && x[0] == '0') {
        x.erase(x.begin());
    }

    return x;
}

// 小数点后面的部分用这个
string rev_dec(string x) {
    reverse(x.begin(), x.end());

    // 去掉末尾多余的 0
    while (x.size() > 1 && x.back() == '0') {
        x.pop_back();
    }

    return x;
}

int main() {
    string s;
    cin >> s;

    int pos;

    // 小数
    pos = s.find('.');
    if (pos != string::npos) {
        string a = s.substr(0, pos);
        string b = s.substr(pos + 1);

        cout << rev_int(a) << "." << rev_dec(b);
        return 0;
    }

    // 分数
    pos = s.find('/');
    if (pos != string::npos) {
        string a = s.substr(0, pos);
        string b = s.substr(pos + 1);

        cout << rev_int(a) << "/" << rev_int(b);
        return 0;
    }

    // 百分数
    pos = s.find('%');
    if (pos != string::npos) {
        string a = s.substr(0, pos);

        cout << rev_int(a) << "%";
        return 0;
    }

    // 整数
    cout << rev_int(s);

    return 0;
}