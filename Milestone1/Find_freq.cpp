#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q, type; cin >> q; 
    map<string,int> mp; 
    string name;
    int marks;
    for (int i=0; i<q; ++i)
    {
        cin >> type >> name;
        if (type == 1){
            cin >> marks;
            mp[name] += marks;
        }
        else if (type == 2)
            mp.erase(name);
        else
            cout << mp[name] << "\n";
    }
    return 0;
}



