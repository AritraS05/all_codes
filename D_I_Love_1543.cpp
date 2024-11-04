#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int counts(const string& layer, const string& target) {
    string temp = layer + layer.substr(0, target.size() - 1);
    int count = 0;
    int n = temp.size(), m = target.size();
    for (int i = 0; i <= n-m; ++i) {
        if (temp.substr(i, m) == target) {
            ++count;
        }
    }
    return count;
}

vector<string> res11(int n, int m, const vector<string>& costings) {
    vector<string> stck;
    int sortedleft = 0, enterright = n - 1, sortedcorner = 0, entercorner = m - 1;
    
    while (sortedleft <= enterright && sortedcorner <= entercorner) {
        string temp;
        temp.append(costings[sortedleft].substr(sortedcorner, entercorner - sortedcorner + 1));
        for (int i = sortedleft + 1; i < enterright; ++i) {
            temp.push_back(costings[i][entercorner]);
        }
        if (sortedleft < enterright) {
            temp.append(costings[enterright].substr(sortedcorner, entercorner - sortedcorner + 1));
            reverse(temp.end() - (entercorner - sortedcorner + 1), temp.end());
        }
        if (sortedcorner < entercorner) {
            for (int i = enterright - 1; i > sortedleft; --i) {
                temp.push_back(costings[i][sortedcorner]);
            }
        }
        stck.push_back(temp);
        sortedleft++;
        enterright--; 
        sortedcorner++; 
        entercorner--;
    }
    return stck;
}

vector<int> c1543(int t, const vector<pair<pair<int, int>, vector<string>>>& cases) {
    const string target = "1543";
    vector<int> results;
    
    for (int i = 0; i < t; ++i) {
        int n = cases[i].first.first;
        int m = cases[i].first.second;
        const vector<string>& costings = cases[i].second;
        
        vector<string> stck = res11(n, m, costings);
        int total = 0;
        
        for (const string& layer : stck) {
            total += counts(layer, target);
        }
        
        results.push_back(total);
    }
    
    return results;
}
int main(){
    int t;
    cin>>t;
    vector<pair<pair<int, int>, vector<string>>> res(t);
    for(int i = 0; i<t; i++){
        int n, m;
        cin >> n >> m;
        vector<string> costings(n);
        for (int j = 0; j < n; ++j) {
            cin >> costings[j];
        }
        res[i] = make_pair(make_pair(n, m), costings);
    }
    vector<int> results = c1543(t, res);
    
    for (int result : results) {
        cout << result << endl;
    }
    return 0;
}