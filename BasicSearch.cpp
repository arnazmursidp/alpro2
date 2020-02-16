#include<stdio.h>
int main () {
	int allArray[100], searchedArray[100], i, j, all, search, flag;
	
	// Input All array length
	scanf("%d", &all);
	// Input all array values
	for (i = 0; i < all; i++) {
		scanf("%d", &allArray[i]);
	}
	
	// Input searched array length
	scanf("%d", &search);
	// Input searched array values
	for (j = 0; j < search; j++) {
		scanf("%d", &searchedArray[j]);
	}
	
	// Result
	j = 0; // Init j to 0 again for preventing index errors
	// Use do because personally is easier to read than using for or while
	do {
		// Do this looping based on search length
		for (i = 0; i < all; i++) {
			if (searchedArray[j] == allArray[i]) {
				flag = 1;
				// stop all array loop after a value is found
				// then proceeds to loop the searched array
				break;
			} else {
				flag = 0;
			}
		}
		
		// Output based on flag
		if (flag == 1) {
			printf("Ditemukan\n");
		} else {
			printf("Tidak Ditemukan\n");
		}
		// Increment j
		j++;
	} while (j <= search);

	return 0;
}
