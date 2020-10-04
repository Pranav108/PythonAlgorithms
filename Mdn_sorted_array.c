#include <stdio.h>
    void main()
    {
 
        int array1[50], array2[50], array3[100], m, n, i, j, k = 0, x;
        printf("\n Enter size of array Array 1: ");
        scanf("%d", &m);
 
        printf("\n Enter sorted elements of array 1: \n");
        for (i = 0; i < m; i++) 
        {
            scanf("%d", &array1[i]);
        }
 
        printf("\n Enter size of array 2: ");
        scanf("%d", &n);
 
        printf("\n Enter sorted elements of array 2: \n");
        for (i = 0; i < n; i++) 
        {
            scanf("%d", &array2[i]);
        }
 
        i = 0;
        j = 0;
 
        while (i < m && j < n) 
        {
            if (array1[i] < array2[j]) 
            {
                array3[k] = array1[i];
                i++;
            }
 
            else 
            {
                array3[k] = array2[j];
                j++;
            }
            k++;
        }
 
        if (i >= m) 
        {
            while (j < n) 
            {
                array3[k] = array2[j];
                j++;
                k++;
            }
        }
 
        if (j >= n) 
        {
            while (i < m)
            {
                array3[k] = array1[i];
                i++;
                k++;
            }
        }
 
        printf("\n After merging: \n");

        if((m+n)%2==0)
            printf("Median of Sorted Array : %f",(float)((float)(array3[(m+n)/2-1]) + (float)(array3[(m+n)/2]))/2.0 );
        else
             printf("Median of Sorted Array : %f",(float)(((float)(array3[(m+n)/2]))/2.0) );
 
    }
