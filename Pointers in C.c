Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b.
Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.
Sample Input

4
5





Soln:-

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b);

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    update(&a, &b);
    
    return 0;
}

void update(int *a, int *b){
    int sum = (*a + *b);
    int diff = (*a - *b);
    int absolute_value = abs(diff);
    
    printf("%d\n", sum);
    printf("%d", absolute_value);
}
    
