
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list
{
  int val;
  struct list* next;
} List, *pList;

typedef struct node
{
  int idx;
  pList children;
  struct node* parent;
  int depth;
} Node, *pNode;

typedef struct nlist
{
  pNode node;
  struct nlist* next;
} NList, *pNList;

typedef struct dlist
{
  int c;
  int mi;
  int ma;
  struct dlist* next;
} DList, *pDList;



pList adj[1000000];
pNode back[1000000];
int occ[1000000];

pNode recTree(int n, int d, pNode p)
{
  pNode m = (pNode) malloc(sizeof(Node));
  back[n] = m;
  occ[n] = 1;
  m->idx = n;
  m->depth = d;
  m->parent = p;
  pList c = adj[n];
  while(c)
  {
    if (p==NULL || p->idx != c->val)
    {
      pNode r = recTree(c->val, d+1, m);
      pList s = (pList) malloc(sizeof(List));
      s->val = r->idx;
      s->next = m->children;
      m->children = s;
    }
    c = c->next;
  }
  return m;
}

long long sumup(pNode self, long long sum)
{
  sum += self->depth + 1;
  pList c = self->children;
  while(c)
  {
    sum += sumup(back[c->val], 0);
    c = c->next;
  }
  return sum;
}

void minmax(pNode t, int *c, int *mi, int *ma)
{
  *c += 1;
  if (t->idx < *mi) *mi = t->idx;
  if (t->idx > *ma) *ma = t->idx;
  pList l = t->children;
  while (l)
  {
    minmax(back[l->val], c, mi, ma);
    l = l->next;
  }
}

int main()
{
  int T;
  scanf("%d", &T);
  int t;
  for (t = 0; t < T; t++)
  {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    memset(adj, 0, sizeof(pList) * N);
    memset(back, 0, sizeof(pNode) * N);
    memset(occ, 0, sizeof(int) * N);
    int m;
    for (m = 0; m < M; m++)
    {
      int u, v;
      scanf("%d", &u);
      scanf("%d", &v);
      u--; v--;
      pList x = (pList)malloc(sizeof(List));
      x->val = v;
      x->next = adj[u];
      adj[u] = x;
      x = (pList)malloc(sizeof(List));
      x->val = u;
      x->next = adj[v];
      adj[v] = x;
    }
    pNList forrest = NULL;
    pDList data = NULL;
    int i;
    int j = 0;
    for (i = 0; i < N; i++)
    {
      if (occ[i] == 0)
      {
        pNode t = recTree(i, 0, NULL);
        int c=0, mi=1000000, ma=0;
        minmax(t, &c, &mi, &ma);
        pNList x = (pNList)malloc(sizeof(NList));
        x->node = t;
        x->next = forrest;
        forrest = x;
        pDList y = (pDList)malloc(sizeof(DList));
        y->c = c;
        y->mi = mi;
        y->ma = ma;
        y->next = data;
        data = y;
        j += 1;
      }
    }
    long long even = 0;
    long long odd = 0;
    for (i = 0; i < j; i++)
    {
      pNode t = forrest->node;
      int c = data->c;
      int mi = data->mi;
      int ma = data->ma;
      if (c % 2 == 0)
      {
        pNode w = recTree(mi, 0, NULL);
        even += sumup(w, 0);
      }
      else
      {
        pNode w = recTree(ma, 0, NULL);
        odd += sumup(w, 0);
      }
      data = data->next;
      forrest = forrest->next;
    }
    printf("%lld %lld\n", even, odd);
  }
}