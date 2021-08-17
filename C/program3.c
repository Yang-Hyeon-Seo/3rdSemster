/*
������Ʈ�� : Project#3 : Expression Stack using Array
�ۼ��� : 2015442 ������(�濵�к�)
�ۼ��� : 2021.05.30(��)
����� : C���

�˰��� ���� : 
		�� ���α׷��� F_original�� ������������ �ٲ� F_posftfix�� ������ �� �̸� ����Ѵ�.
		�� ���α׷��� �ΰ��� ������� ������ �� �ִµ�, ���� F_original�� ������ �̿��Ͽ� ������������ �ٲ� F_postfix�� �����ϴ� ������ ������ ��, �� �������� F_postfix�� ������ �̿��Ͽ� ����Ѵ�.
		Main
		F_original�� {��(3+5)*((2+6)/(9-7))-1" }�μ��� �� �ʱ�ȭ�Ѵ�. �� ���� postfix�� �ٲ�� �ϱ� ������ postfix���� �ޱ� ���� F_postfix�� ����, ����� ������ ���� 50���� ������ �����.
		postfix�� ����� ����� �ޱ� ���� int�� result ������ �����Ѵ�.
		���� ������ �������� makePostfix�Լ��� �����Ͽ� F_original�� F_postfix�� ��ȯ�Ѵ�
		->	makePostfix�Լ�
			F_original�� F_postfix�� ���ڷ� �޾� F_original���� F_postfix �迭 �ȿ� ����������� �����.
			makePostfix �Լ������� while���� �̿��� str�� i��°�� \0(NULL)�� �ƴϸ� ��� �ݺ��ϰ� �������. while���� �ݺ��ϸ鼭 �ǿ����ڴ� F_postfix[index]�� �߰��ϰ�, �����ڴ� ���ÿ� �߰��ϸ鼭 
			�ڽź��� �켱������ ���� �����ڰ� ������ �ڽ��� �� �� ���� ������ pop(������ ���� �����ͺ��� �ϳ��� ����)�� �� �� pop�� �����ʹ� F_postfix�� �߰��ϰ�, 
			�ڽ��� �� �� �ְ� �Ǹ� �ڽ��� push(������ ������ �ڽ��� �ִ´�)�Ѵ�.
			�迭�� ������ ����� ���� char�� �迭 Stack�� �����. ������ �˳��ϰ� 50���� �����ϰ�, ���̰��� ���� �ʵ��� �������� �ʱ�ȭ�Ѵ�.
			Stack�� �ε��� ������ �� stackIndex�� F_postfix�� �ε��� ������ �� index�� int�� ������ ����, -1�� �ʱ�ȭ�Ѵ�.
			while���� ���� str[i]�� \0�� �� ������ �ݺ��Ѵ�
			�켱 ���� F_original[i]�� ����Ͽ� ���� ��Ұ� �������� Ȯ���� �� �ֵ��� �Ѵ�.
			
			���� str[i]�� (�ΰ��
			stackIndex�� 1������Ű�� stack[stackIndex]�� str[i]�� �����Ѵ�.
			Stack�� push�� ��Ұ� ���������� ��Stack push : ���� ���� ����Ѵ�.
			
			else if +�� -�� ���
			������ ���� ���� ��Ұ� �ڽź��� �켱������ ������ pop, ������ pop�� �� push, ������ push�� �Ѵ�. F_original�� postfix�� �ٲٴ� �������� 
			������ ���� ���� ��Ұ� �ڽŰ� �켱������ ������ ���� ����, �켱������ ���� ���� ���� ��츸 �����Ѵ�
			stackIndex�� -1(���� �ȿ� �ƹ��͵� ������� ���� ���)�� �ƴϸ鼭, ���� ������ ����ִ� ��Ұ� * �Ǵ� /��� ������ ���� ������Ҹ� pop�� F_postfix �ȿ� �ִ´�.
			pop�� F_postfix�� �Ͼ���� ���� <��Stack pop : ��+������ ���� ���>, <��F_postfix[index] : ��+F_postfix�� �߰��� ���>�� ����� ǥ�����ش�
			stack�� +�� -�� ���ų� �켱������ ���� ��Ұ� ���ų� while���� ���� ���� �켱�������� ��� pop���� �Ŀ� stackIndex�� �ϳ� �ø� �� stack�� +�Ǵ� -�� �־��ش�.
			�̸� ��Stack push : ��+���ÿ� �߰��� ��Ҹ� ����� ǥ���Ѵ�.
			
			else if *�� /�� ���
			*�� /�� ������ ���� ��Ұ� �ڽź��� �켱������ ������ pop, ������ pop�� push, ������ push�� ������ F_original�� ��� ������ ������Ұ� �ڽź��� �켱������ ���ų� ���� ��찡 �������� �ʴ´�
			���� �� ��쿡�� stackIndex�� 1������Ų �� stack[stackIndex]�� ��Ҹ� �߰����� �� ��Stack push : ��+���ÿ� �߰��� ��� �� ����Ѵ�.
			
			else if  )�� ���
			Stack���� (�� ���ö����� ������ ��ҵ��� ��� pop�Ѵ�
			������ ���� ������Ұ� (�� ���� ������ while���� �ݺ��Ѵ�.
			������ ���� ���� ���(stack[stackIndex])�� pop�ϰ�, ��Stack pop : ��+stack[stackIndex]�� ����Ѵ�.
			F_postfix�� pop�� ��Ҹ� �־��ֱ� ���� index�� 1������Ű��, F_postfix[index]�� pop�� ���(stack[stackIndex])�� �����Ѵ�
			�� �� ��F_postfix[index] : ��+F_postfix[index]�� ����Ͽ� F_postfix�� ���������� �߰��Ǿ����� ����� �� ��Stack top : ��+stack[stackIndex]�� ����Ͽ� ���� ������ ���� ������Ҹ� ����Ѵ�
			( ������ ��� ��Ҹ� pop�� �� (�� postfix�� ���Ե��� �ʱ� ������ stackIndex�� 1���ҽ�Ų��
			
			else (�ǿ�����)
			�� ��� str[i]�� ���� F_postfix[index]�� �߰��ϰ�, index�� 1 �ø� �� ��F_postfix�� �߰� : �� + str[i]�� ����Ѵ�.
			while���� �ݺ��ϸ鼭 Ż�� ������ ä���, F_original�� ��Ҹ� �̵��ϱ� ���� i�� 1 �ø��� ������� ���� �������� ���� �ٹٲ��� ����Ѵ�.

			F_original�� ��� ��ҵ��� �ݺ��� ��(str�� i��°�� \0�� �� ����)���� ���ÿ� ���� ��� �����ڵ��� F_postfix�� �߰��Ѵ�.
			�������� ����� F_postfix�� ��� ��ҵ��� �� ��(����)���� ������ ����Ѵ�.

			str[i]�� \0�� �� ���Ŀ��� i�� 0���� �ʱ�ȭ�� �� �ٽ� while���� �̿��Ͽ� F_postfix[i]�� ��\0���� �� ������ F_postfix[i]�� ����Ѵ�. F_postfix�� �� ��Ҹ� �� ��(����)�� �����ϸ� ����Ѵ�.
		
		makePostfix�� ������ �� F_postfix�� ����Ѵ�. F_postfix�� �� ����������� Ȯ���� �� F_postfix�� ������� ����Ѵ�.
		Result�� F_calculate�Լ��� ���� ���� �����Ѵ�
		->	F_calculate�Լ��� F_postfix���� ���ڷ� �޴´�.
			F_postfix�� �ε����� �ǹ��ϴ� int�� ���� i�� �̿��Ͽ� F_postfix[i]�� �ǿ������̸� ���ÿ� �߰��ϰ�, �����ڰ� ������ ���ÿ��� 2���� ���ڵ��� ���� ������ �� �� �ٽ� ���ÿ� �ִ´�
			�����ڰ� ���� ��� 2���� ���ڸ� ���� num1, num2 ������ �����ϰ�, F_calculate�Լ����� ����� �迭 ����stack�� �����. ������ �˳��ϰ� 50���� �����Ѵ�.
			F_postfix�� ��\0���� �� ������ while���� �ݺ��Ѵ�.
				���� F_postfix[i]�� �����ڰ� �ƴ϶��(�ǿ����ڶ��) stack�� ���� �־��־�� �Ѵ�. �̸� ���� index�� 1 ������Ű��, 
				stack[index]�� F_postfix[i]�� �ǿ����ڸ� ����� �� �ֵ��� ��0���� �� ���� �����Ѵ�. ���ڴ� �ƽ�Ű�ڵ带 �������� ��µǱ� ������ �׳� ����ϸ� ���� �ٸ� ���� ���´�.
				���� F_postfix�� �����ڶ�� ������ ���� �� ���ڿ� �� ���� ���ڸ� pop�� ���� num2, num1�� �ְ�, �� ���� ����Ѵ�. �ι��� pop�� ������ push�� �� �� �Ұ��̱� ������ index�� 1�� ���ҽ�Ų��.
				����� ����� stack[index]�� �߰��Ѵ�
				���� ���ÿ� ������� push������ �̸� ��Ÿ���� ���� ��Stack  push : ���� �Բ� num1�� num2�� ����� ����� ����Ѵ�.
			while���� Ż�� ������ ������Ű�鼭 F_postfix�� ��Ҹ� ��ȭ��Ű�� ���� i�� 1 ������Ų��.
			��� ������ ������ ���ÿ��� �������� ��� ����� 31�� ���´�.
			�̸� return �Ѵ�.

		F_calculate�Լ��� ������ �� ���� ���̾��� F_original�� �� = F_calculate�Լ��� ���� ��� ����� ���·� ����Ͽ� ��(3+5)*((2+6)/(9-7))-1 = 31���� ����Ѵ�.

		�������� ������ n^2�̰�, F_original�� F_postfix�� �ٲٴ� ������ F_postfix�� ����ϴ� ������ �����ϱ� ���� ��� ���¸� �ٸ��� �������. �����̳� �迭�� ��ȭ�ϰ� �Ǹ� �̸� ��� ǥ���ߴ�.
		�ִ��� ����� ���� ���� ������� �ߴ�.


������ �˰��� : �˰��� ��� �� ������Ʈ#4�� �˰����� �����߰�,
				https://overit.tistory.com/m/502?category=0 : ����(char)�� �Ǵ� ���ڿ� �� ������� ������ ����ϴ� ����� ã�ƺ����� �����ߴ�
				 https://docs.microsoft.com/ko-kr/cpp/code-quality/c6386?f1url=%3FappId%3DDev16IDEF1%26l%3DKO-KR%26k%3Dk(C6386)%26rd%3Dtrue&view=msvc-160 
				 : ���α׷� �����ϸ鼭 ������ �߻��� ���� �ذ��ϱ� ���� ������ ��ũ
				�����ͱ��� 7���� 2��° ���ǿ� �����ڷḦ �����ߴ�


������ �� ���� : ���� �ٸ� ���� ������Ʈ�� �����ϰ� �ִ� "��ȿ����", "��������"�� �Բ� ���� �����迭�� ��ȯ�� ����� �´��� ���غ��� ������ �޾ҽ��ϴ�
*/



#include<stdio.h>

void makePostfix(char* str, char* F_postfix)//F_original, F_postfix
{
	char stack[50] = { "" };
	int i=0;//str�� index
	int stackIndex = -1;
	int index=-1;//F_postfix�� ��Ҹ� �߰��ϱ� ���� �ε���
	while (str[i] != '\0')
		//str string�� ������ ��Ұ� ������ ������
	{

		printf("\nF_original[%d] : %c", i, str[i]);
		if (str[i] == '(')
		{
			stackIndex++;
			stack[stackIndex] = str[i];
			//printf("\n ���ÿ��߰� ���� : " + str[i]);
			//printf("\n(�� ���ÿ� �߰�");
			printf("\nStack push : %c", stack[stackIndex]);

		}
		else if (str[i] == '+' || str[i] == '-')
		{
			//�켱������ ���� pop�� push
			//��� ����
			//�켱������ ���� push
			//if (arrStack[index - 1] == '*' || arrStack[index - 1] == '/')
			//{
				//pop
			if (stackIndex == -1)
			{
				//���ÿ� �׳� �߰��Ѵ�
				//stackIndex++;
				//stack[stackIndex] = str[i];
			}
			else//���ÿ� ���� �ϳ� �̻� ����ִ� ���
			{
				while (stack[stackIndex] == '*' || stack[stackIndex] == '/')
				{
					//pop
					printf("\n Stack pop : %c ", stack[stackIndex]);
					index++;
					F_postfix[index] = stack[stackIndex];
					printf("\nF_postfix[%d] : %c", index, F_postfix[index]);
					stack[stackIndex] = '\0';
					stackIndex--;
				}
				//stackIndex++;
				//stack[stackIndex] = str[i];
			}
			stackIndex++;
			stack[stackIndex] = str[i];
			//printf("\n+�Ǵ� -�� ���ÿ� �߰�");
			printf("\nStack push : %c", stack[stackIndex]);
		}
		else if (str[i] == '*' || str[i] == '/')
		{
			//printf("\n*�Ǵ� /�� ���ÿ� �߰�");
			stackIndex++;
			stack[stackIndex] = str[i];
			printf("\nStack push : %c", stack[stackIndex]);
		}
		else if (str[i] == ')')
		{
			//printf("\n)�� ��Ÿ����");
			if (stackIndex >= 0)
			{
				while (stack[stackIndex] != '(')//(�� ���� ������
				{
					//printf("������� ������\n");
					printf("\nStack pop : %c ", stack[stackIndex]);

					index++;
					F_postfix[index] = stack[stackIndex];//postfix�� stack�� �����ڸ� �߰��Ѵ�
					
					stack[stackIndex] = '\0';
					stackIndex--;

					//printf("\nF_postfix�� �߰� : %c", F_postfix[index]);
					printf("\nF_postfix[%d] : %c", index, F_postfix[index]);


					printf("\nStack�� top : %c ", stack[stackIndex]);
				}
				stackIndex--;//(�κ� ����
				//printf("\n top : %c", stack[stackIndex]);
				//printf("\nStack  : %c", stack[stackIndex]);

			}
		}
		else//���ڰ� ���� ���
		{
			//printf("\n%c", str[i]);

			index++;
			F_postfix[index] = str[i];
			
			printf("\nF_postfix[%d] : %c", index, F_postfix[index]);
			//printf("\nF_postfix�� �߰� ����: %c", F_postfix[index]);//�̻����
			//i++;
			//continue;
		}
		i++;
		printf("\n");
	}

	//str�� ������ ���(��)
	while (stackIndex != -1)
	{
		//printf("\n%c�� ���ҽ��ϴ�", stack[stackIndex]);
		printf("\nStack pop : %c ", stack[stackIndex]);

		index++;
		F_postfix[index] = stack[stackIndex];
		stackIndex--;
		printf("\nF_postfix[%d] : %c", index, F_postfix[index]);


	}

	printf("\n\nF_postfix : ");
	i = 0;
	while(F_postfix[i] != '\0')
	{
		printf("%c ", F_postfix[i]);
		i++;
	}
	printf("\n");
}

int F_calculate(char* F_postfix)
{
	//F_postfix�� ���ڵ��� ���ÿ� �����鼭 ������� ������ 2���� ������ ��� �� ���ÿ� �ִ´�
	int i = 0;//postfix�� �ε���
	int index = -1;
	int num1, num2, result;
	int stack[50];//���ڰ� �� ����
	while (F_postfix[i] != '\0')
	{
		printf("\n");
		if (F_postfix[i] == '+' || F_postfix[i] == '-' || F_postfix[i] == '*' || F_postfix[i] == '/')
			//�����ڰ� ���� ���
		{
			num2 = stack[index];
			stack[index] = '\0';
			index--;
			num1 = stack[index];
			stack[index] = '\0';
			//index--;
			printf("\nStack pop : %d", num2);
			printf("\nStack pop : %d\n", num1);
			printf("\n%d %c %d\n", num1, F_postfix[i], num2);

			if (F_postfix[i] == '+')
				stack[index] = num1 + num2;
			else if (F_postfix[i] == '-')
				stack[index] = num1 - num2;
			else if (F_postfix[i] == '*')
				stack[index] = num1 * num2;
			else if (F_postfix[i] == '/')
				stack[index] = num1 / num2;
			//else
			//	printf("\n���� �߸��Ǿ���\n");

			printf("\nStack push : %d", stack[index]);

		}
		else
			//���ڰ� ���� ��� -> ���ÿ� �ִ´�
		{
			index++;
			stack[index] = F_postfix[i] - '0';
			printf("\nStack push : %d", stack[index]);
		}

		i++;
	}
	return stack[index];//���ÿ� �������� ���� ����(���)�� �����Ѵ�
}

int main(void)
{
	char F_original[] = { "(3+5)*((2+6)/(9-7))-1" };
	char F_postfix[50] = { "" };
	int result;

	printf("Postfix�� �����\n");
	makePostfix(F_original, F_postfix);

	printf("\nPostfix ���\n");
	printf("\nF_postfix : %s", F_postfix);

	result = F_calculate(F_postfix);

	//printf("\n\n��� ��� : %d\n", result);
	printf("\n%s = %d", F_original, result);

	return 0;
}

