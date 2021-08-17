//#include<stdio.h>
//
//int main(void)
//{
//	int num = 7;
//	int* pnum = &num;
//
//	printf("%d", sizeof(pnum));
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int num1=10, num2=20;
//	int* ptr1 = &num1, * ptr2 = &num2;
//
//	(*ptr1) += 10;
//	(*ptr2) -= 10;
//
//	ptr1 = &num2;
//	ptr2 = &num1;
//
//	printf("ptr1: %d\tptr2: %d\n", (*ptr1), (*ptr2));
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//	int i;
//
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		*(ptr++) += 2;
//		//*(ptr++) = arr[i] + 2;
//	}
//	
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		printf("%d \n", arr[i]);
//	}
//}

#/*include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*(ptr+i) += 2;
	}

	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d \n", arr[i]);
	}
}*/

//#include<stdio.h>

//int main(void)
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = &arr[4];
//	int i, total=0;
//
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		total += *(ptr--);
//	}
//
//	printf("%d", total);
//}

//#include<stdio.h>
//
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int* ptr1 = arr, * ptr2=&arr[5];
//	int temp, i;
//	
//	while (ptr1 < ptr2)
//	{
//		temp = *ptr1;
//		*ptr1 = *ptr2;
//		*ptr2 = temp;
//		ptr1++, ptr2--;
//	}
//
//	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str1[] = "My string";
//	char* str2 = "Your string";
//	printf("%s, %s \n", str1, str2);
//
//	str2 = "Our string";
//	printf("%s, %s\n", str1, str2);
//
//	str1[0] = 'X';
//	str2[0] = 'X';
//	printf("%s, %s\n", str1, str2);
//	
//	return 0;
//}