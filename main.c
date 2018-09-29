//
//  main.c
//  LargeSmallLab
//
//  Student Name: Melanie Summers;
//  Student id: 012090935;
//  Name of the assignment: Large-Small Lab;
//  Date: 9/20/18;
//  Name and version of the C Compiler: Xcode v. 9.4.1;
//  Name of Operating System: Mac OS High Sierra v. 10.13.6;
//

#include <stdio.h>

FILE *fp;

void compare(void);

int main(void) {
    int i;
    
    fp = fopen("csis.txt", "w");
    
    for (i = 1; i <= 4; ++i){
        compare();
    }
    fclose(fp);
    return 0;
}

void compare(){
    int first, second, third, fourth, currentInt;
    
    printf(     "Enter four integers \n");
    fprintf(fp, "Enter four integers \n");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);
    printf(     "You entered: %d %d %d %d \n", first, second, third, fourth);
    fprintf(fp, "You entered: %d %d %d %d \n", first, second, third, fourth);
    
    currentInt = first;
    if (currentInt > second && currentInt > third && currentInt > fourth){
        printf(     "The largest integer: %d \n", currentInt);
        fprintf(fp, "The largest integer: %d \n", currentInt);
    } else if (currentInt < second && currentInt < third && currentInt < fourth){
        printf(     "The smallest integer: %d \n", currentInt);
        fprintf(fp, "The smallest integer: %d \n", currentInt);
    }
    
    currentInt = second;
    if (currentInt > first && currentInt > third && currentInt > fourth){
        printf(     "The largest integer: %d \n", currentInt);
        fprintf(fp, "The largest integer: %d \n", currentInt);
    } else if (currentInt < first && currentInt < third && currentInt < fourth){
        printf(     "The smallest integer: %d \n", currentInt);
        fprintf(fp, "The smallest integer: %d \n", currentInt);
    }
    
    currentInt = third;
    if (currentInt > first && currentInt > second && currentInt > fourth){
        printf(     "The largest integer: %d \n", currentInt);
        fprintf(fp, "The largest integer: %d \n", currentInt);
    } else if (currentInt < first && currentInt < second && currentInt < fourth){
        printf(     "The smallest integer: %d \n", currentInt);
        fprintf(fp, "The smallest integer: %d \n", currentInt);
    }
    
    currentInt = fourth;
    if (currentInt > first && currentInt > second && currentInt > third){
        printf(     "The largest integer: %d \n", currentInt);
        fprintf(fp, "The largest integer: %d \n", currentInt);
    } else if (currentInt < first && currentInt < second && currentInt < third){
        printf(     "The smallest integer: %d \n", currentInt);
        fprintf(fp, "The smallest integer: %d \n", currentInt);
    }
    
    return;
}

