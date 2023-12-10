#include <iostream>
#include <set>
#include <string>

using namespace std;

void updateSet(set<int>& s, int type, int number) {
    switch (type)
    {
    case 1:
        s.insert(number);
        break;
    case 2:
        s.erase(number);
        break;
    case 3:
        set<int>::iterator it = s.find(number);
        string msg = (it != s.end()) ? "Yes" : "No";
        cout << msg;
        break;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q{0}, y{0}, x{0};
    set<int> s;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> y >> x;
        updateSet(s, y, x);
    }
    return 0;
}