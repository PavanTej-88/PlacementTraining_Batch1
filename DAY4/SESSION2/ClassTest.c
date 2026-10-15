#include <stdio.h>
#include <stdlib.h>

typedef struct {
    long ticketNo;
    char registration[30];
    float grossWeight;
    float tareWeight;
} Ticket;

float netWeight(Ticket *t) {
    return t->grossWeight - t->tareWeight;
}

void printTicket(Ticket *t) {
    printf("%ld %s gross %.2f tare %.2f\n", t->ticketNo, t->registration, t->grossWeight, t->tareWeight);
    printf("net %.2f\n", netWeight(t));
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 100000) {
        printf("INVALID COUNT");
        return 0;
    }

    Ticket *tickets = malloc(n * sizeof(Ticket));

    if (tickets == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%ld %29s %f %f",
              &tickets[i].ticketNo,
              tickets[i].registration,
              &tickets[i].grossWeight,
              &tickets[i].tareWeight);
    }

    float total = 0.0f;
    int heaviest = 0;

    printf("WEIGHBRIDGE DAY BOOK\n");

    for (int i = 0; i < n; i++) {
        printTicket(&tickets[i]);
        total += netWeight(&tickets[i]);

        if (netWeight(&tickets[i]) > netWeight(&tickets[heaviest])) {
            heaviest = i;
        }
    }

    printf("Tickets: %d\n", n);
    printf("Total net weight (kg): %.2f\n", total);
    printf("Heaviest net load: ticket %ld %s\n",
           tickets[heaviest].ticketNo,
           tickets[heaviest].registration);
    printf("%.2f\n", netWeight(&tickets[heaviest]));

    free(tickets);

    return 0;
}