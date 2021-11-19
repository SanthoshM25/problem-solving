#include <bits/stdc++.h>
using namespace std;

//returns the max no.of.pieces a rope can be cut into

int ropes(int n, int a, int b, int c){
    if(n==0) return 0;
    if(n<0) return -1;

    int res = max(ropes(n-a, a, b, c), ropes(n-b, a, b, c));
     res = max(res,  ropes(n-c, a, b, c));

    if(res == -1) return -1;
    return res + 1;
}
int main()
{
    cout<<ropes(8, 2, 2, 2);
    return 0;
}
