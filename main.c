#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "mapa.h"

MAP map;
POSICAO hero;


int acabou()
{
    return 0;
}

void move(char direction)
{

    if( direction != 'a' &&
        direction != 's' &&
        direction != 'w' &&
        direction != 'd'
        ) return;

    int next_x = hero.x;
    int next_y = hero.y;
    
    // printf("next_x: %d \t hero_x: %d\n",next_x,hero.x);
    // printf("next_y: %d \t hero_y: %d\n",next_y,hero.y);

    // map.matriz[hero.x][hero.y] = '.';
    switch (direction)
    {
    case 'a':
        next_y--;
        break;
    case 'w':
        next_x--;
        break;
    case 's':
        next_x++;
        break;
    case 'd':
        next_y++;
        break;
    default:
        return;
        break;
    }
    if (next_x >= map.lines )return;
    if (next_y >= map.columns) return;
    if (map.matriz[next_x][next_y] != '.') return;

    map.matriz[next_x][next_y] = '@';
    map.matriz [hero.x][hero.y] = '.';

    hero.x = next_x;
    hero.y = next_y;
    
    
}
void main(){
    
    
    readMap(&map);
    searchMap(&map,&hero,'@');
    do
    {
        printMap(&map);
        char cmd;
        scanf(" %c", &cmd);
        move(cmd);
    } while (!acabou());
    

 

    freeMap(&map);
    
}

