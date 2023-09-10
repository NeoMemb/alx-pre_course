#include <stdio.h>

/*to solve arithmetric*/
int area(int length, int breadth);
int perimeter(int length, int breadth);


int main(){
    int x1;
    int y1;

    area(x1, y1);
    perimeter(x1, y1);

    printf("input the first no:\n ");
    scanf("%d", &x1);

    printf("input the second no:\n ");
    scanf("%d", &y1);

    printf("The area of the side %d and %d is %d \n", x1, y1, area(x1, y1));
    printf("The permeter of the side %d and %d is %d", x1, y1, perimeter(x1, y1));

}

int area(int a, int b){
    return (a * b);
};

int perimeter(int a, int b){
    if ((a != b))
    {
        return (2 * (a + b));
    }
    else
    {
        return (4 * b);
    }
}
