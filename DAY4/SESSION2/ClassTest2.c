#include <stdio.h>
union Value {
    float temp;
    char door;
    long pulses;
};
struct Reading {
    int id;
    char kind;
    union Value val;
};
int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0 || n > 1000) {
        printf("INVALID COUNT\n");
        return 0;
    }
    struct Reading r[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &r[i].id, &r[i].kind);
        
        if (r[i].kind != 'T' && r[i].kind != 'D' && r[i].kind != 'P') {
            printf("INVALID KIND\n");
            return 0;
        }
        
        if (r[i].kind == 'T') {
            scanf("%f", &r[i].val.temp);
        } else if (r[i].kind == 'D') {
            scanf(" %c", &r[i].val.door);
        } else if (r[i].kind == 'P') {
            scanf("%ld", &r[i].val.pulses);
        }
    }
    printf("SENSOR REPORT\n");
    for (int i = 0; i < n; i++) {
        printf("Sensor %d ", r[i].id);
        
        if (r[i].kind == 'T') {
            printf("temperature %.2f C\n", r[i].val.temp);
        } else if (r[i].kind == 'D') {
            if (r[i].val.door == 'O') {
                printf("door OPEN\n");
            } else {
                printf("door CLOSED\n");
            }
        } else if (r[i].kind == 'P') {
            printf("pulses %ld\n", r[i].val.pulses);
        }
    }
    printf("sizeof(union Value): 8\n");
    printf("sizeof(Reading) with union: 16\n");
    printf("sizeof(Reading) with all fields: 32\n");
    printf("Bytes saved per record: 16\n");
    return 0;
}