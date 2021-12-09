#include <stdio.h>
#include <stdlib.h>

void cscan(int Ar[20],int n,int head);
void sort(int Ar[20],int n);

void main () {
	int DiskQueue[20],i,head,n;

	printf("Enter size of queue: ");
	scanf("%d", &n);
	printf("Enter the Queue(max size- 199): ");
	for (i=1; i<n+1; i++)
		scanf("%d", &DiskQueue[i]);
	printf("Enter intial Head position");
	scanf("%d",&head);

	DiskQueue[0] = head;
	DiskQueue[n+1] = 199;
	n = n+2;

	sort(DiskQueue,n);
	cscan(DiskQueue,n,head);
}

void sort(int Ar[20], int n) {

	int i,j,temp;

	for (i=0; i<n-1; i++) {
		for (j=0; j<n-i-1; j++) {
			if (Ar[j]> Ar[j+1]) {
				temp = Ar[j];
				Ar[j] = Ar[j+1];
				Ar[j+1] = temp;
			}
		}
	}
}

void cscan(int Ar[20], int n, int head) {
	
	int i,pos,diff,seektime=0,current=0;
	
	for (i=0; i<n; i++) {
		if (Ar[i] == head) {
			pos = i;
			break;		
		}
	}

	printf("\n Movement of Cylinders\n");
	
	for (i=pos; i<n; i++) {
		diff = abs(Ar[i+1]-Ar[i]);
		seektime += diff;
		printf("\nMove from %d to %d with seek time %d",Ar[i],Ar[i+1],diff);
	}

	current =0;

	for (i=0; i<pos; i++) {
		diff = abs(Ar[i] - current);
		seektime += diff;
		printf("\nMove from %d to %d with seek time %d",current,Ar[i],diff);
		current = Ar[i];	
	}

	printf("\nTotal seek time: %d\n",seektime);
 
}
























