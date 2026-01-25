Print a pattern of numbers from to as shown below. Each of the numbers is separated by a single space.


Sample Input 1
5

Sample Output 1 
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5



Soln:- 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printpattern(int n);

int main() {
    int n;
    scanf("%d", &n);
    printpattern(n);
    return 0;
}


void printpattern(int n) {
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;

            int dist = top;
            if (left < dist) dist = left;
            if (bottom < dist) dist = bottom;
            if (right < dist) dist = right;

            int val = n - dist;
            printf("%d", val);
            if (j != size - 1) printf(" ");
        }
        printf("\n");
    }
}
