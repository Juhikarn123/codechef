#include <stdio.h>

int main(void) {
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int pages,words;
        scanf("%d %d",&pages,&words);
        int total_words=pages*words;
        printf("%d\n",total_words);
    }
	return 0;
}

