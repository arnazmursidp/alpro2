#include<stdio.h>
int main () {
	int allArray[100], searchedArray[100], i, j, all, search;
	
	// Input All array length
	scanf("%d", &all);
	// Input all array value
	for (i = 0; i < all; i++) {
		scanf("%d", &allArray[i]);
	}
	
	// Input searched array length
	scanf("%d", &search);
	// Input searched array value
	for (j = 0; j < search; j++) {
		scanf("%d", &searchedArray[j]);
	}
	
	// Result
	for (j = 0; j < search; j++) {
		for (i = 0; i < all; i++) {
			if (searchedArray[j] == allArray[i]) {
				printf("Ditemukan\n");
			} else {
				printf("Tidak Ditemukan\n");
			}
		}
	}
	
	return 0;
}
