#include <stdio.h>
#include <stdlib.h>

void main() {
        int np,ps,i;
        int *sa;
        printf("\nEnter how many pages:");
        scanf("%d",&np);
        printf("Enter page size");
        scanf("%d",&ps);

        sa = (int*)malloc(2*np);

        for (   i = 0; i < np; i++)
        {
            sa[i]=(long)malloc(ps); //allocate memory for pages
            printf("page%d\t address %p\n",i+1,sa[i]);
        }
        
}