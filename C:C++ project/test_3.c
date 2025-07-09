#include <stdio.h>
int main()
{
    int total;
    printf("Enter you total point: ");
    scanf("%d", &total);
    if (total < 52){
        printf("F");
    }
    else if (total < 56 && total > 52){
        printf("D");
    }
    else if (total < 61 && total > 57){
        printf("D+");
    }
    else if (total < 66 && total > 62){
        printf("C");
    }
    else if (total < 71 && total > 66){
        printf("C+");
    }
    else if (total < 76 && total > 72){
        printf("B");
    }
    else if (total < 84 && total > 77){
        printf("B+");
    }
    else {
        printf("A");
    }
}