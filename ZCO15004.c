#include <stdio.h>

struct point 

{
    int X;
    int Y;
};
struct stack 
{
    struct point p[10000000];
    int top;
};

void MergeSort(struct point array[],int l, int r);
void MergeSelf(struct point array[],int l ,int m ,int r);
void push(struct stack* s,struct point p);
struct point pop(struct stack* s);
struct point top(struct stack*s);

int main()
{
   int N;
   
   scanf("%d",&N);
   
   struct point p[N+2];
   
   int i,j,k;
   
   for(i=0;i<N;i++)
   {
       scanf("%d%d",&p[i].X,&p[i].Y);
   }

   p[N].X=0;p[N].Y=0;
   p[N+1].X=100000;p[N+1].Y=0;

   MergeSort(p,0,N+1);

   int size=1;
   int pt=1;

   for(pt=1;pt<N+2;pt++)
   {
       if(p[pt].X!=p[pt-1].X)
       {
            p[size]=p[pt];
            size++;
       }
   }

   struct stack s;
   s.top=0;

   push(&s,p[0]);

   long long int maxarea=0;
   long long int area=0;

   for(i=1;i<size;i++)
   {
       struct point prevpoint=top(&s);
       area=(p[i].X-prevpoint.X)*500;
       if(area>maxarea)maxarea=area;

       while(top(&s).Y>p[i].Y)
       {
           struct point rem=pop(&s);
           struct point viewin=top(&s);

           area=0;
           area+=(rem.Y)*(p[i].X-viewin.X);
           if(area>maxarea)maxarea=area;
       }

       push(&s,p[i]);
   }

   printf("%d\n",maxarea);
}


void push(struct stack* s,struct point p)
{
    s->p[s->top]=p;
    s->top=s->top+1;
}

struct point pop(struct stack* s)
{
    s->top=s->top-1;
    return (s->p[s->top]);
}

struct point top(struct stack*s)
{
    int t=s->top-1;
    return(s->p[t]);
}


void MergeSelf(struct point array[],int l ,int m ,int r)
{
    struct point temparray[r-l+1];
    int i;
    int p1=l; int p2=m+1; int p=0;

    while(p1<=m && p2<=r)
    {
       if(array[p1].X<array[p2].X || (array[p1].X==array[p2].X)&& array[p1].Y<array[p2].Y)
       {
         temparray[p]=array[p1];
         p1++; p++;
       }

       else {temparray[p]=array[p2]; p2++; p++;}
    }

    while(p1<=m)
    {
       temparray[p]=array[p1];
       p1++;p++;
    }

    while(p2<=r)
    {
        temparray[p]=array[p2];
        p2++; p++;
    }

    for(i=l;i<=r;i++)
    {
       array[i]=temparray[i-l];
    }
}

void MergeSort(struct point array[],int l, int r)
{
      if(l<r)
      {
           int m=(l+r)/2;
           MergeSort(array,l,m);
           MergeSort(array,m+1,r);
           MergeSelf(array,l,m,r);
      }

}