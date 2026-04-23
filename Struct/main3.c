#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

void dateFormat1(struct date d, char s[]);
void scanDate(struct date *pd);

int main(void) {
    struct date dat;
    char msg[80];
    scanDate(&dat);
    dateFormat1(dat, msg);
    return 0;
}
void dateFormat1(struct date dat, char s[]){
    sprintf(s, "%02d/%02d/%04d", dat.month, dat.day, dat.year);
}

void scanDate(struct date *pd) {
    printf("Digite o dia: ");
    scanf("%d", &pd->day);

    printf("Digite o mes: ");
    scanf("%d", &pd->month);

    printf("Digite o ano: ");
    scanf("%d", &pd->year);
}


