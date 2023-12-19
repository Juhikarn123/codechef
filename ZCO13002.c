
#include <stdio.h>



#include <stdlib.h>

#define true 1
#define false 0
int b[505][505];
int sf[505][505];
int cou[505][505];
int mk[505][505];
int x[10005],y[10005],st[10005];

int MAX(int a, int b){
    return (a>b)?a:b;
}

int MIN(int a, int b){
    return (a<b)?a:b;
}

void marksafe(int x, int y, int k, int n){
    int la,lb,lc;
    for(la=y-k;la<=y+k;la++){
        if(la<y && la<1)
            continue;
        if(la>y && la>n)
            break;
        for(lb=x-k;lb<=x+k;lb++){
            if(lb<x && lb<1)
                continue;
            if(lb>x && lb>n)
                break;
            if(abs(la-y)+abs(lb-x)<=k)
                sf[lb][la]=true;
        }
    }
}

/*void marksafe(int x, int y, int k, int n){
    int la,lb;
    for(la=y-k;la<=y+k;la++){
        for(lb=x-k;lb<=x+k;lb++){
            if(abs(la-y)+abs(lb-x)<=k)
                sf[lb][la]=true;
        }
    }
}*/

void path(int n){
    int la,lb;
    if(sf[1][1]){
        mk[1][1]=true;
        cou[1][1]=b[1][1];
    }
    for(la=1;la<=n;la++){
        for(lb=1;lb<=n;lb++){
            if(la==1 && lb==1)
                continue;
            if(sf[la][lb]){
                if(mk[la-1][lb] && mk[la][lb-1]){
                    cou[la][lb]=b[la][lb]+MAX(cou[la-1][lb],cou[la][lb-1]);
                    mk[la][lb]=true;
                }
                else
                if(mk[la-1][lb]){
                    cou[la][lb]=b[la][lb]+cou[la-1][lb];
                    mk[la][lb]=true;
                }
                else
                if(mk[la][lb-1]){
                    cou[la][lb]=b[la][lb]+cou[la][lb-1];
                    mk[la][lb]=true;
                }
            }
        }
    }
}

int main()
{
    int n,m,la,lb;
    scanf("%d%d",&n,&m);
    for(la=1;la<=n;la++)
        for(lb=1;lb<=n;lb++)
            scanf("%d",&b[la][lb]);
    for(la=1;la<=m;la++){
        scanf("%d%d%d",&x[la],&y[la],&st[la]);
        marksafe(x[la],y[la],st[la],n);
    }

    path(n);
    if(mk[n][n]==false)
        printf("NO\n");
    else
        printf("YES\n%d\n",cou[n][n]);
    return 0;
}