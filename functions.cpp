#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a,int b,int c,int d){
    int arr[] = {a,b,c,d};
    int n = sizeof(arr) / sizeof(arr[0]);
    return *max_element(arr, arr + n);
}
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
