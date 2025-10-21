Task

There is a series, where the next term is the sum of the previous three terms. Given the first three terms of the series, a, b, and c, respectively, you have to output the nth term of the series using recursion.


Constraints:-

1 <= n <= 20
1 <= a,b,c <= 100

Sample Input 0

5
1 2 3


Soln:-

int find_nth_term(int n, int a, int b, int c);

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    // Constraint check
    if (n < 1 || n > 20 || a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100) {
        printf("Invalid input.");
        return 1;
    }

    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans);
    return 0;
}

// Recursive function definition
int find_nth_term(int n, int a, int b, int c) {
    if(n == 1) return a;
    if(n == 2) return b;
    if(n == 3) return c;

    return find_nth_term(n-1, a, b, c)
         + find_nth_term(n-2, a, b, c)
         + find_nth_term(n-3, a, b, c);
}
