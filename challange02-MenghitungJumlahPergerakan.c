#include<stdio.h>
#include<stdbool.h>

typedef struct
{
    int x;
    int y;
} Point;

void bacapoint(Point *p);
void gerakx(Point *a, Point *b, int *hitung);
void geraky(Point *a, Point *b, int *hitung);

int main(){
    Point p1,p2;
    int count=0;
    bool sudahsama=false;
    bacapoint(&p1);
    bacapoint(&p2);

    while (sudahsama==false){
    if (p1.x == p2.x && p1.y == p2.y) {
    printf("%d", count);
    return 0;
    }
    gerakx(&p1, &p2, &count);
    if (p1.x == p2.x && p1.y == p2.y) {
        printf("%d", count);
        return 0;
    }
    geraky(&p1, &p2, &count);
    if (p1.x == p2.x && p1.y == p2.y) {
        sudahsama = true;
    }
    }

    printf("%d", count);
    return 0;
}

void bacapoint(Point *p){
    scanf("%d %d", &p->x, &p->y);
}

void gerakx(Point *a, Point *b, int *hitung){
    if(a->x <= b->x){
        a->x=a->x+1;
        *hitung=*hitung+1;
    } else if(a->x > b->x){
        a->x=a->x-1;
        *hitung=*hitung+1;
    }
}

void geraky(Point *a, Point *b, int *hitung){
    if(a->y <= b->y){
        a->y=a->y+1;
        *hitung=*hitung+1;
    }else if(a->y > b->y){
        a->y=a->y-1;
        *hitung=*hitung+1;
    }
}
