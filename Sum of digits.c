Given a five digit integer, print the sum of its digits.
Constraints

10000 <= n <= 99999

Sample Input 0

10564


Soln:- 
  
int main() {
	
    int n,d1,d2,d3,d4,d5,sum;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    if (10000 <= n && n <= 99999) {
        d1 = n/10000;
        d2 = (n/1000) % 10;
        d3 = (n/100) % 10;
        d4 = (n/10) % 10;
        d5 = n % 10;
        sum = d1 + d2 + d3 + d4 + d5;
        printf("%d", sum);
    }
    return 0;
}
