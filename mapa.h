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
int isDirection(char direction);
int isEmpty(MAP* m, int x, int y);
int isValid(MAP* m, int x, int y);
void runInMap(MAP* m, int origin_x, int origin_y, int destiny_x, int destiny_y);

