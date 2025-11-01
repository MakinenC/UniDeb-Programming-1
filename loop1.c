#include <stdio.h>

int main() {
    int i, j;
    
    // The outer loop counts down from 5 to 1.
    for(i = 5; i >= 1; i--) 
		{
        // Inner loop: Print the number (6-i) times, on the i-th line.
        for(j = 1; j <= (6 - i); j++) 
			{
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}

