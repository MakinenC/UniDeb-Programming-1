#include <stdio.h>

int main() {
    int i, j;
    
    // 外层循环从5递减到1
    for(i = 5; i >= 1; i--) 
		{
        // 内层循环：第i行打印(6-i)次数字i
        for(j = 1; j <= (6 - i); j++) 
			{
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}
