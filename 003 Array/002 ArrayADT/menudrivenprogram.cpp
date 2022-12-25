#include <iostream>
#include <stdio.h>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array arr)
{
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    cout << endl;
}
void append(struct Array *arr, int value)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = value;
}
void insert(struct Array *arr, int index, int value)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = value;
        arr->length++;
    }
}
int Delete(struct Array *arr, int index)
{
    int deletedvalue = 0; // initially we are taking it as 0
    if (index >= 0 && arr->length)
    {
        deletedvalue = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return deletedvalue;
    }
    return deletedvalue;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}
int linearsearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
        if (key == arr.A[i])
            return i;
    return -1;
}
int binarysearch(struct Array arr, int key)
{
    int l = 0;
    int h = arr.length - 1;
    int mid;
    while (l <= h)
    {
        mid = ((l + h) / 2);
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else if (key > arr.A[mid])
            l = mid + 1;
    }
    return -1;
}
int binarysearchrecursion(struct Array arr, int l, int h, int key)
{
    if (l <= h)
    {
        int mid = ((l + h) / 2);
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            return binarysearchrecursion(arr, l, mid - 1, key);
        else if (key > arr.A[mid])
            return binarysearchrecursion(arr, mid + 1, h, key);
    }
    return -1;
}
int get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
void set(struct Array *arr, int index, int value)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = value;
}
int max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
        if (arr.A[i] > max)
            max = arr.A[i];
    return max;
}
int min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
        if (arr.A[i] < min)
            min = arr.A[i];
    return min;
}
int sum(struct Array arr)
{
    int sum = 0;
    for (int i = 1; i < arr.length; i++)
        sum += arr.A[i];
    return sum;
}
float avg(struct Array arr)
{
    int sum = 0;
    for (int i = 1; i < arr.length; i++)
        sum += arr.A[i];
    return ((float)sum / arr.length);
}
void reversemethodfirst(struct Array *arr)
{
    int *B;
    B = (int *)malloc(arr->length * sizeof(int));
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (int i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}
void reversemethodsecond(struct Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        int temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}
void insertsort(struct Array *arr, int element)
{
    int i = arr->length - 1;
    while (arr->A[i] > element)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = element;
    arr->length++;
}
bool checksort(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
        if (arr.A[i] > arr.A[i + 1])
            return false;
    return true;
}
void rearrange(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(arr->A[i], arr->A[j]);
    }
}
struct Array *merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i++];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j++];
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}
struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i++];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j++];
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else if (arr1->A[i] == arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
struct Array *Difference(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i++];
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}
int main()
{
    struct Array arr1;
    int choice, element, index;
    printf("Enter the size of array: ");
    scanf("%d", &arr1.size);
    arr1.A = (int *)malloc(arr1.size * sizeof(int));
    arr1.length = 0;
    do
    {
        printf("Menu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Sum\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter an element and index: ");
            scanf("%d %d", &element, &index);
            insert(&arr1, index, element);
            break;
        case 2:
            printf("Enter index: ");
            scanf("%d", &index);
            element = Delete(&arr1, index);
            printf("Deleted element is: %d\n", element);
            break;
        case 3:
            printf("Enter an element to search: ");
            scanf("%d", &element);
            index = linearsearch(arr1, element);
            printf("Element index is: %d", index);
            break;
        case 4:
            printf("Sum is: %d", sum(arr1));
            break;
        case 5:
            display(arr1);
            break;
        }
    } while (choice < 6);
    cout << "End of Program !!";
    return 0;
}