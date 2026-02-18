#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> a) {
    int i=0;
    int j=a.size()-1;
    while(i<j){ 
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    return a;
}
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result = reverseArray(a);

    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
