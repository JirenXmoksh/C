// #include <stdio.h>
// #include <stdlib.h>

// typedef struct _retire_info {
//     int months;
//     double contribution;
//     double rate_of_return;
// } retire_info;

// void calculate_balance(int age, double *balance, retire_info info) {
//     for (int i = 0; i < info.months; i++) {
//         printf("Age %3d month %2d you have $%.2lf\n", age / 12, age % 12, *balance);
//         *balance += *balance * info.rate_of_return + info.contribution;
//         age++;
//     }
// }

// void retirement(int startAge, double initial, retire_info working, retire_info retired) {
//     double balance = initial;
//     printf("Age %3d month %2d you have $%.2lf\n", startAge / 12, startAge % 12, balance);
    
//     // Working
//     calculate_balance(startAge + 1, &balance, working);
    
//     // Retired
//     calculate_balance(startAge + working.months, &balance, retired);
// }

// int main(void) {
//     retire_info working = {489, 1000, 0.045 / 12};
//     retire_info retired = {384, -4000, 0.01 / 12};
    
//     int startAge = 327; // months
//     double initial = 21345.0;
    
//     retirement(startAge, initial, working, retired);
    
//     return EXIT_SUCCESS;
// }
#include <stdio.h>
#include <stdlib.h>
typedef struct _retire_info {
    int months;
    double contribution;
    double rate_of_return;
} retire_info;
void retirement(int startAge, double initial, retire_info working, retire_info retired) {
    int i;
    double balance = initial;

    for (i = 0; i < working.months; i++) {
        printf("Age %3d month %2d you have $%.2lf\n", startAge / 12, startAge % 12, balance);
        balance += balance * working.rate_of_return + working.contribution;
        startAge++;
    }

    for (i = 0; i < retired.months; i++) {
        printf("Age %3d month %2d you have $%.2lf\n", startAge / 12, startAge % 12, balance);
        balance += balance * retired.rate_of_return + retired.contribution;
        startAge++;
    }
}
int main(void) {
    retire_info working = {489, 1000, 0.045 / 12}; // Rate of return per month
    retire_info retired = {384, -4000, 0.01 / 12}; // Rate of return per month
    int startAge = 327;
    double initial = 21345;

    retirement(startAge, initial, working, retired);

    return 0;
}
