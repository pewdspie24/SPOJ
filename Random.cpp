#include <bits/stdc++.h>
using namespace std;
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
int main()
{
    srand((int)time(0));
    int r;
    for(int i = 0; i < 10; ++i){
        r = random(1,100);
        printf("%d ",r);
    }    
}
