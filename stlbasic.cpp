#include <bits/stdc++.h>
using namespace std;

void explainlist() {
    list<int> l = {10, 20, 30};

    // Add
    l.push_back(40);
    l.push_front(90);
    l.insert(++l.begin(), 99);

    // Remove
    l.pop_back();
    l.pop_front();
    l.erase(l.begin());
    l.remove(20);

    // Access elements
    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;

    // Access middle element safely
    if (l.size() > 1) {
        auto it = l.begin();
        advance(it, 1);
        cout << "Middle Element: " << *it << endl;
    }
}

void explainvector() {
    vector<int> v(5, 20);
    cout << v[0] << endl;

    vector<int> v1 = {2, 3, 5};
    vector<int> v2(v1);

    cout << v1[2] << endl;
    cout << v2[2] << endl;

    vector<int> v4 = {3, 4, 5, 6};

    v4.push_back(8);
    v4.insert(v4.begin() + 1, 99);

    cout << v4[0] << endl;
    cout << v4.at(3) << endl;
    cout << v4.front() << endl;
    cout << v4.back() << endl;

    cout << v4.size() << endl;
    cout << v4.capacity() << endl;

    vector<int> v0 = {4, 5, 6, 7};

    // Index Loop
    for (int i = 0; i < (int)v0.size(); i++)
        cout << v0[i] << " ";
    cout << endl;

    // Range-based Loop
    for (int x : v0)
        cout << x << " ";
    cout << endl;

    // Iterator
    for (auto it = v0.begin(); it != v0.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Reverse Iterator
    for (auto it = v0.rbegin(); it != v0.rend(); ++it)
        cout << *it << " ";
    cout << endl;
}

int main() {
    explainlist();
    return 0;
}