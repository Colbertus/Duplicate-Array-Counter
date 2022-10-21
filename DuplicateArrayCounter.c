#include <stdio.h>
int main()
{
    /* Initialize the arrays and the other variables used */
    int num, count = 1, arr1[10], arr2[10], arr3[10], dup = 0;
    /* Ask for how many elements the user wants and input it into the 'num' variable */
    printf("Enter the number of elements that you want in the array (between 1-10): ");
    scanf("%d", &num);
    /* Ask for each element of the array and store the elements into the array */
    printf("Enter each element of the array followed by a space: ");
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr1[i]);
    }
    /* Copy each element from the first array into the second one and make the third array empty */
    for(int i = 0; i < num; i++) {
        arr2[i] = arr1[i]; 
        arr3[i] = 0;
    }
    /* Use the integrated 'j' for loop to scan each element from 'arr1' to 'arr2' */
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            if(arr1[i] == arr2[j]) {
                arr3[j] = count;
                count++;
            }
        }
        count = 1; 
    }
    /* Use another for loop to scan every element in 'arr3' to find all of the elements that are equal to '2' */
    for(int i = 0; i < num; i++) {
        if(arr3[i] == 2) {
            dup++;
        }
    }
    /* Print a statement that states the number of elements that are duplicates */
    printf("The number of duplicate elements in the array is: %d", dup); 
    return 0;
}

