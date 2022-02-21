#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Brick {
   int x;
   int y;
   int z;
};  

struct Brick set_size();
int calc_volume(struct Brick b);
int calc_surface(struct Brick b);
bool has_square(struct Brick b);

int main()
{
    struct Brick tegla = set_size();    
    printf("A teglatest terfogata: %d\n", calc_volume(tegla));
    printf("A teglatest felszine: %d\n", calc_surface(tegla));
    if (has_square(tegla))
    {
        printf("Van negyzet alapja a teglatestnek\n");
    }
    else{
        printf("Nincs negyzet alapja a teglatestnek\n");
    }   

    return 0;
}

struct Brick set_size(){
    struct Brick b;
    do
    {
        printf("Adja meg x-et!\n");
        scanf("%d", &(b.x) );
        
        if (b.x < 0)
        {
            printf("Egy fizikai parameter nem lehet 0!\n");
        }
        
    } while (b.x < 0);
    
    
    do
    {
        printf("Adja meg y-t!\n");
        scanf("%d", &(b.y));
        
        if (b.y < 0)
        {
            printf("Egy fizikai parameter nem lehet 0!\n");
        }
        
    } while (b.y < 0);

    do
    {
        printf("Adja meg z-t!\n");
        scanf("%d", &(b.z));
        
        if (b.z < 0)
        {
            printf("Egy fizikai parameter nem lehet 0!\n");
        }
        
    } while (b.z < 0);
    return b;
}

int calc_volume(struct Brick b){
    return b.x * b.y * b.z;
}

int calc_surface(struct Brick b){
    return 2 * ( b.x * b.y + b.x * b.z + b.y * b.z );
}

bool has_square(struct Brick b){  
    if (b.x == b.y || b.x == b.z || b.y == b.z)
    {
        return true;
    }
    else{
        return false;
    }
    
}
