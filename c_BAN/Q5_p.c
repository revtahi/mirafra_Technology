
/*Write a C Program to delete an element in an Array by index or value.*/


#include <stdio.h>
int main()
{
    
    int i, n, p, element, f = 0;
 
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the value of the element to be deleted:\n");
    scanf("%d", &element);
 
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            f = 1;
            p = i;
            break;
        }
    }
 
    if (f == 1)
    {
        for (i = p; i <  n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
 
        printf("The array after deleting the element is: \n");
        for (i = 0; i < n - 1; i++)
        {
            printf("%d\n", arr[i]);
        }
 
    }
    else
    printf("Element %d is not found in the array\n", element);
}

