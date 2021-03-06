#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <map>
#include <stack>
#include <set>
#include <vector>
#include <queue>
#include <time.h>
#define eps 10e-7
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define rep0(j,n) for(int j=0;j<n;++j)
#define rep1(j,n) for(int j=1;j<=n;++j)
#define pb push_back
#define set0(n) memset(n,0,sizeof(n))
#define ll long long
//#define OJ
using namespace std;
int read(){
    char c=getchar();int f=1,x=0;
    while(!isdigit(c)){if(c=='-') f=-1;c=getchar();}
    while(isdigit(c)){x=x*10+c-'0';c=getchar();}
    return f*x;
}
char get_ch(){
    char c=getchar();
    while(!isalpha(c)) c=getchar();
    return c;
}
const int MAXINT = 1000;
struct edge{
    int v;
    edge* next;
    edge(int _v,edge* nxt):v(_v),next(nxt){}
    edge();
}memp[MAXINT*MAXINT];
edge* e[MAXINT];
int cnt;
void add_edge(int u,int v){
    memp[cnt]=edge(v,e[u]);
    e[u]=&memp[cnt++];
}
int main() {
    #ifndef OJ
    freopen(".in","r",stdin);
    freopen(".out","w",stdout);
    #endif // OJ

    return 0;
}

