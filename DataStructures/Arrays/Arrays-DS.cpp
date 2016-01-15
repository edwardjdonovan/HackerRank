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
    cin >> n;
    vector<int> r_arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> r_arr[(n-1)-arr_i];
    }
   for(int r_arr_i = 0; r_arr_i < n; r_arr_i++){
        cout << r_arr[r_arr_i] << " ";
    }
    return 0;
}