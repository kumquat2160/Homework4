#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void bubbleSort(int arr[], int n); 
void printArray(int arr[], int n);

int main(int argc, char** argv) 
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始數列: \n");
    printArray(arr, n);
    
    bubbleSort(arr, n);

    printf("排序後數列: \n");
    printArray(arr, n);

    return 0;
}

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    int swapped;  

    for (i = 0; i < n - 1; i++)
	{
        swapped = 0; 

     
        for (j = 0; j < n - 1 - i; j++)
		{
            if (arr[j] > arr[j + 1]) 
			{
               
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  
            }
        }

       
        if (swapped == 0) 
		{
            break;
        }
    }
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

