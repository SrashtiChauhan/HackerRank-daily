#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRotation( int d, vector<int> a) {
    int n=a.size();
    d=d%n;

    vector<int> result;
    for(int i=d; i<n; i++){
        result.push_back(a[i]);
    }

    for(int i=0; i<d; i++){
        result.push_back(a[i]);
    }
    return result;


}
int main() {
    int n,d;
    cin>>n>>d;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> result=leftRotation(d,a);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}