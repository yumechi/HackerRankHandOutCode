#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    vector<int> vec;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        vec.push_back(t);
    }
    
    int x;
    cin >> x;
    vec.erase(vec.begin()+x);    
    
    int s, e;
    cin >> s >> e;
    
    vec.erase(vec.begin()+s-1, vec.begin()+e-1);
    
    cout << vec.size() << endl;
    for(int i = 0; i < vec.size() ; i++) {        
        cout << vec[i] << ((i == vec.size() - 1) ? "" : " ");
    }
    cout << endl;
    return 0;
}
