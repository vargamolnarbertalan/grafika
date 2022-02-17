#include <stdio.h>

struct Brick {
   int x;
   int y;
   int z;
};  

void set_size(struct Brick b){
    do
    {
        printf("Adja meg x-et!\n");
        scanf("%d", &b.x);
        if (b.x < 0)
        {
            printf("Egy fizikai parameter nem lehet 0!\n");
        }
        
    } while (b.x < 0);
    
    
    do
    {
        printf("Adja meg y-t!\n");
        scanf("%d", &b.y);
        if (b.y < 0)
        {
            printf("Egy fizikai parameter nem lehet 0!\n");
        }
        
    } while (b.y < 0);

    do
    {
        printf("Adja meg z-t!\n");
        scanf("%d", &b.z);
        if (b.z < 0)
        {
            printf("Egy fizikai parameter nem lehet 0!\n");
        }
        
    } while (b.z < 0);
}

int main()
{
    struct Brick tegla;
    set_size(tegla);

    return 0;
}