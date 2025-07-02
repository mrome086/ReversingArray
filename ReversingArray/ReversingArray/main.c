//
//  main.c
//  ReversingArray
//
//  Created by Michael Romero on 6/26/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    const int numElements = 5;
    int userVals[numElements];
    int temp;
    int i;
    
    
    // User inputs
    printf("Enter %d numbers \n", numElements);
    for (i = 0; i <numElements; ++i) {
        printf("Value %d: ",i+1);
        scanf("%d", &(userVals[i]));
    }
    
    // Reversing array elements by swaping
    for (i = 0; i < (numElements / 2); ++i) {
        temp = userVals[i];
        userVals[i] = userVals[numElements - 1 - i];
        userVals[numElements- 1 - i] = temp;
    }
    
    // Display Numbers
    printf("\nValues Reversed ");
    for (i = 0; i <numElements; ++i) {
        printf("%d ", userVals[i]);
    }
    
    printf("\n");
    return 0;
}
