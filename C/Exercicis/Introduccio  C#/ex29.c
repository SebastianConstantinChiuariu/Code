#include <stdio.h>

int input;

main()
{
    printf("Insereix un nombre: ");
    scanf("%d",&input);
    for (; input > 0; input--)
    {
        printf("%d",input);
    }
}