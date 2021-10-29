#include <stdio.h>
int main()
{
    float f;
    char sw;
    int i;
    char c;
    int* p;
    float* p1;
    char* p2;
    char inc;
    printf("Enter i for integer, f for float and c for character: ");
    scanf("%c", &sw);
    getchar();
    switch(sw)
    {
        case 'i':
                    printf("int i: ");
                    scanf("%d", &i);
                    p=&i;
                    printf("%p = %d", p, i);
                    break;
        
        case 'f':
                    printf("float f: ");
                    scanf("%f", &f);
                    p1=&f;
                    printf("%p = %f", p1, f);
                    break;
        
        case 'c':
                    printf("char c: ");
                    scanf("%c", &c);
                    p2=&c;
                    printf("%p = %c", p2, c);
                    break;
        
        default:
                    printf("Wrong letter");
    }
}
