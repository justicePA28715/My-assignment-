#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float revenue[7];
    float totalRevenue = 0, averageRevenue;
    int i, j, k;
    
printf("PA106/G/28715/25.JUSTICE KIPTOO\n");
printf("Hotel management system\n");
printf("==================================\n");
   printf("\n--- Weekly Revenue Tracker ---\n");
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;
    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n\n", averageRevenue);

    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0)); 

    printf("--- Room Occupancy (One Branch) ---\n");
    for(i = 0; i < 5; i++) { // 5 floors
        occupied = 0;
        vacant = 0;
        for(j = 0; j < 10; j++) { // 10 rooms per floor
            occupancy[i][j] = rand() % 2; // 0 or 1
            if(occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: %d occupied, %d vacant\n", i + 1, occupied, vacant);
    }

    
    int chain[3][5][10];
    int totalOccupied = 0;

    printf("\n--- Room Occupancy (All 3 Branches) ---\n");
    for(i = 0; i < 3; i++) { // 3 branches
        int branchOccupied = 0;
        for(j = 0; j < 5; j++) { // 5 floors
            for(k = 0; k < 10; k++) { // 10 rooms
                chain[i][j][k] = rand() % 2;
                if(chain[i][j][k] == 1)
                    branchOccupied++;
            }
        }
        printf("Branch %d: %d rooms occupied\n", i + 1, branchOccupied);
        totalOccupied += branchOccupied;
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
    }