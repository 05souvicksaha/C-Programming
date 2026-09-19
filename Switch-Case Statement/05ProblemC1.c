#include<stdio.h>
int main()
{
    int color;
    printf("Look here before crossing the road!\n 1. Red\n 2. Yellow\n 3. Green\n");
    printf("Enter Traffic Light Color (1-3): \n");
    scanf("%d", &color);

    switch(color)
    {
        case 1:
        if (color == 1)
        {
            printf("Stop! The color is red\n");
        }
        break;
        case 2:
        if (color == 2)
        {
            printf("Wait! the color is orange\n");
        }
        break;
        case 3:
        if (color == 3)
        {
            printf("Go! The color is green\n");
        }
        break;
        default:
        if (color != 1 && color != 2 && color != 3)
        {
            printf("Error! The color does not match");
        }
    }
    return 0;    
}