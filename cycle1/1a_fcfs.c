#include <stdio.h>
#include <stdlib.h>
void main() {
	int wl[50],head,total_tracks,current,i,totalseek=0;
	printf("\nEnter head");
	scanf("%d",&head);
	current = head;
	printf("\nEnter the no of tracks to scan");
	scanf("%d",&total_tracks);
	printf("\nEnter sequence of tracks to scan");
	for (i=0;i<total_tracks;i++) {
		scanf("%d",&wl[i]);	
	}
	
	for (i=0;i<total_tracks;i++) {
		printf("%d-->", wl[i]);
		totalseek += abs(wl[i] - current);
		current = wl[i];	
	}
	printf("\nTotal seek time :%d",totalseek);
}
