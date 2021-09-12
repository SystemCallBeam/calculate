#include<bits/stdc++.h>
using namespace std;

int main (){
    int str = 49, end = 50, chr = 62;
    double ans=0;
    for (int i = str; i <= end; i++)
    {
        ans += pow(chr,i);
    }
    cout << ans;
    return 0;
}