#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> freq;
    for (string s : stringList) {
        freq[s]++;
    }
    vector<int> result;
    for (string q : queries) {
        result.push_back(freq[q]);
    }
    return result;
}
int main() {
    int n ;
    cin>>n;
    vector<string> stringList(n);
    for (int i = 0; i < n; i++) {
        cin>>stringList[i];
    }
    int q;
    cin>>q;
    vector<string> queries(q);
    for (int i = 0; i < q; i++) {
        cin>>queries[i];
    }
    vector<int> result = matchingStrings(stringList, queries);
    for(int count : result) {
        cout<<count<<endl;
    }
    return 0;
}