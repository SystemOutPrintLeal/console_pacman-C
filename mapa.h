typedef struct mapa {
    char** matriz;
    int lines;
    int columns;
}MAP;


typedef struct posicao{
    int x;
    int y;
}POSICAO;

void freeMap(MAP* m);
void allocMap(MAP* m);
void readMap(MAP* m);
void printMap(MAP* m);
void searchMap(MAP* m, POSICAO* p, char c);
