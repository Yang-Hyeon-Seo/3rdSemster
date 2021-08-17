//#include<stdio.h>
//
//int main(void)
//{
//	int arr[5];
//	int sum = 0, i;
//
//	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
//
//	for (i=0; i < 5; i++)
//	{
//		sum += arr[i];
//	}
//
//	printf("배열요소에 저장된 값의 함: %d\n", sum);
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int num[5];
//	int i, max, min, total=0;
//	
//	printf("5개의 정수를 입력하시오\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &num[i]);
//	}
//
//	max = num[0];
//	min = num[0];
//	
//	//max , min
//	for (i = 1; i < 5; i++)
//	{
//		if (num[i]>max)
//		{
//			max = num[i];
//		}
//
//		if (num[i] < min)
//		{
//			min = num[i];
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		total += num[i];
//	}
//
//	printf("입력된 정수 중에서 최댓값: %d \n", max);
//	printf("입력된 정수 중에서 최솟값: %d \n", min);
//	printf("입력된 정수의 총 합: %d \n", total);
//}

//#include<stdio.h>
//
//int main(void)
//{
//	char str[] = { 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' , '\n'};
//	int i;
//	int length = sizeof(str) / sizeof(char);
//
//	for (i = 0; i < length; i++)
//	{
//		printf("%c", str[i]);
//	}
//}

//#include <stdio.h>
//
//int main(void)
//{
//	char str[50];
//	int index = 0;
//	
//	printf("문자열 입력 : ");
//	scanf_s("%s", str, sizeof(str));
//	printf("입력 받은 문자열: %s \n", str);
//
//	printf("문자 단위 출력: ");
//	while (str[index] != '\0')
//	{
//		printf("%c", str[index]);
//		index++;
//	}
//	printf("\n");
//
//	return 0;
//
//}

//#include <stdio.h>

//int main(void)
//{
//	char str[50] = "I like C programming";
//	printf("string: %s \n", str);
//
//	str[8] = '\0';//C다음의 공백
//	printf("string: %s \n", str);
//
//	str[6] = '\0';//like다음의 공백
//	printf("string: %s \n", str);
//
//	str[1] = '\0';//I다음의 공백
//	printf("string: %s \n", str);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	char word[50];
//	int i=0;
//
//	printf("단어를 입력하세요 :  ");
//	scanf_s("%s", word, sizeof(word));
//
//	while (word[i] != '\0')
//	{
//		i++;//word[i]가 널문자면 해당 문장을 실행하지 않음>>i가 널문자를 가리키게 된다
//	}
//
//	printf("%d \n", i);
//
//}


//11-2-2
//#include<stdio.h>
//
//int main(void)
//{
//	char word[50], reword[50];
//	int i=0;
//
//	printf("영어 단어를 입력하세요 :  ");
//	scanf_s("%s", word, sizeof(word));
//
//	//printf("%s", word);
//
//	reword[sizeof(word) - 1] = '\0';
//	printf("%s", reword);
//
//	for (i = 0; i < sizeof(word) - 1; i++)
//	{
//		reword[i] = word[sizeof(word) - 2 - i];
//	}
//
//	/*while (word[i] != '\0')
//	{
//		reword[sizeof(word) - 2 - i] = word[i];
//		i++;
//	}*/
//
//	//reword[i] = '\0';//마지막 위치에 널문자 삽입
//	printf("%s", reword);
//
//	for (int idx = 0; idx <= i; idx++)
//	{
//		word[idx] = reword[idx];
//	}
//
//	printf("%s", reword);
//	printf("%s", word);
//
//
//}

//#include<stdio.h>
//
//int main(void)
//{
//	char word[128];
//	printf("단어를 입력하세요 :  ");
//	scanf_s("%s", word, sizeof(word));
//	int len = 0;
//
//	/*printf("길이 :  %d", sizeof(word));*/
//
//	while (word[len] != 0)
//	{
//		len++;
//	}
//
//	printf("길이 :  %d", len);
//
//
//	return 0;
//}

#include<stdio.h>

int main(void)
{
	char word[100];
	int temp, len = 0, i = 0;

	printf("문자열을 입력하세요 :  ");
	scanf_s("%s", word, sizeof(word));

	while (word[len] != 0)
	{
		len++;
	}

	while ((len - 1 - i != i) && (len-1-i > i))
	{
		temp = word[i];
		word[i] = word[len - 2 - i];
		word[len - 1 - i] = temp;

	}

	printf("%s", word);

	return 0;
}