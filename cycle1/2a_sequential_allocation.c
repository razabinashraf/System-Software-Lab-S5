#include <stdio.h>

void main () {
	int f[50]={0},st,j,len,ck;
	char choice = 'y';
	printf("%d", f[0]);

	while(choice == 'y' || choice== 'Y') {
		printf("\nEnter the starting block & length of file :");
		scanf("%d%d",&st,&len);

		for (int j = st; j < (st+len); ++j){
			if (f[j] == 0){
				f[j] = 1;
				printf("\n%d->%d",j,f[j]);
			}
			else{
				printf("\nBlock already allocated!!");
				break;
			}
		}
		if(j==(st+len))
			printf("\nFile Allocated to disk succefully!");
	printf("\nDo you want to enter more files?(y/n)");
	scanf(" %c",&choice);
	}
}
