#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int d1 = 0;
    int d2 = 0;
    cin >> n;
    vector<vector<int>> ar(n, vector<int>(n));
    for (int i = 0; i <n; i++){
        for (int j = 0; j < n; j++){
            cin >> ar[i][j];
            if(i==j)d1+=ar[i][j];
            if(i+j==n-1)d2+=ar[i][j];
        }
    }
    cout << abs(d1-d2);
}