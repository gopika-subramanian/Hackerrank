#include <bits/stdc++.h> 
using namespace std; 
#define MAXN 10000000 

int minimumSteps(int n, int m, int a, int b) 
{ 
    if (n > m) 
        return MAXN; 
   
    if (n == m) 
        return 0; 
  
   
    return min(1 + minimumSteps(n * a, m, a, b), 
               1 + minimumSteps(n * b, m, a, b)); 
} 

int main() 
{ 
    int n, m; 
    int a = 2, b = 3; 
    cin>>n;
    cin>>m;
    if(minimumSteps(n, m, a, b)==10000001){cout<<-1;}
    else
    cout << minimumSteps(n, m, a, b); 
    return 0; 
}
