Given a positive integer, do the following:

Print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
If n > 9, print Greater than 9.

Sample Input

5
Sample Output

five


Soln:-


int main(){
    
    int i;
    scanf("%d", &i);
    if(i > 1 && i < 1000000000){
        if(i == 1){
            printf("one\n");
        }
        else if(i == 2){
            printf("two\n");
        }
        else if(i == 3){
            printf("three\n");
        }
        else if(i == 4){
            printf("four\n");
        }
        else if(i == 5){
            printf("five\n");
        }
        else if(i == 6){
            printf("six\n");
        }
        else if(i == 7){
            printf("seven\n");
        }
        else if(i == 8){
            printf("eight\n");
        }
        else if(i == 9){
            printf("nine\n");
        }
        else {
            printf("Greater than 9\n");
        }
    }
    
    return 0;
}
