#include <stdio.h>
#include <stdlib.h>

struct Address {
    char village[100];
    int pincode;
};

struct Member {
    int id;
    char name[100];
    float share_capital;
    struct Address address;
};

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    if (n <= 0 || n > 200) {
        printf("INVALID COUNT\n");
        return 0;
    }

    struct Member members[200];
    float total_share_capital = 0.0;
    int highest_index = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f %s %d", 
              &members[i].id, 
              members[i].name, 
              &members[i].share_capital, 
              members[i].address.village, 
              &members[i].address.pincode);
              
        total_share_capital += members[i].share_capital;
        
        if (members[i].share_capital > members[highest_index].share_capital) {
            highest_index = i;
        }
    }

    printf("MEMBER LEDGER\n");
    for (int i = 0; i < n; i++) {
        printf("%d %s %s %d %.2f\n", 
               members[i].id, 
               members[i].name, 
               members[i].address.village, 
               members[i].address.pincode, 
               members[i].share_capital);
    }

    printf("Total share capital (Rs): %.2f\n", total_share_capital);
    printf("Highest holder: %d %s %s %d %.2f\n", 
           members[highest_index].id, 
           members[highest_index].name, 
           members[highest_index].address.village, 
           members[highest_index].address.pincode, 
           members[highest_index].share_capital);

    return 0;
}
