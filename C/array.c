#include <stdio.h>

int main_array(void) {
	
	//�迭
	/*int subway_1 = 30;//����ö 1ȣ���� ����� 30�� Ÿ�� �ִ�
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� ����� %d�� Ÿ�� �ֽ��ϴ�\n", subway_1);
	printf("����ö 2ȣ���� ����� %d�� Ÿ�� �ֽ��ϴ�\n", subway_2);
	printf("����ö 3ȣ���� ����� %d�� Ÿ�� �ֽ��ϴ�\n", subway_3);
	*/

	//����ö �� ĭ�� int ��� �ϸ� ���ӵ� ������ ������ ������ ������ ����� ��>>�迭

	//subway_array��� ������ 3���� ������ ������ ������ ĭ�� ���� ���̴�
	//(�������� ������ �Բ�, ���ÿ� ����)

	/*int subway_array[3];//[0][1][2] �ε����� 0���� ����
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("����ö %dȣ���� %d���� Ÿ�� �ֽ��ϴ�.\n", i+1,  subway_array[i]);
	}*/

	//�� ���� ���
	/*
	int arr[10];// = { 1,2,3,4,5,6,7,8,9,10 }; // �߰�ȣ�� �̿��Ͽ� �ѹ��� ���� ���� �� �ִ�
	//���� �ʱ�ȭ���� ������ �� �� ���� ���� ���´� / �� �� ���� ���� '���̰�'(�����Ⱚ)�̶�� �θ���
	//>>�ݵ�� �ʱ�ȭ�� �ؾ� ��
	for (int i = 0; i < 10; i++) {
		printf("%d��° ����: %d\n", i + 1, arr[i]);
	}*/

	/*
	int size = 10;
	int array[size];//�迭 ũ�⿡�� ������ �� �� ���� ������ ���
	*/

	/*
	int arr[10] = { 1,2 }; //�ϳ��� ������ �ϸ� �� ���� ���� 0���� ���� �������� ������ ���̰��� ����
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	/*
	int arr[] = { 1,2 };// = arr[2]
	for (int i = 0; i < 5; i++) { //�ʰ��ϴ� �κ��� ���̰��� ��
		printf("%d\n", arr[i]);
	}
	*/

	/*
	char str[6] = "coding"; // [c][o][d][i][n][g]
	printf("%s\n", str); //�� �κп� �� �� ���� ���ڰ� �Բ� ����>>NULL���ڰ� ���� ����
	

	//���ڿ����� ���ڿ��� �����ٴ� ǥ���� NULL���ڰ� �� ������ �����Ѵ�
	//NULL���ڴ� \0���� ǥ��
	//NULL������ �ڸ����� �����Ͽ� str�� 7�ڸ��� �־�� ��

	char str[7] = "coding";//[c][o][d][i][n][g][\0]
	printf("%s\n", str);
	*/

	/*
	char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));//sizeof()�Լ��� ��ȣ ���� ����� ũ�⸦ ��ȯ�ϴ� �Լ� / 6���ڸ� 6, 7���ڸ� 7�� ���� ����
	
	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}
	*/

	//�ѱ��� size
	/*
	char kor[] = "������";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor)); //7 /  2*3+1(null����)
	*/
	//���� 1���� : 1byte
	//�ѱ� 1���� : 2byte
	//char�� ũ�� : 1byte >> �ѱ��� ���� �� ����

	/*
	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	printf("%s\n", c_array);
	char c_arr[6] = { 'c', 'o', 'd', 'i', 'n', 'g'};
	printf("%s\n", c_arr);
	char c[10] = { 'c', 'o', 'd', 'i', 'n', 'g' }; // ���� ������ ������ �ڵ����� ��(���� ����)
	printf("%s\n", c_arr);
	for (int i = 0; i < sizeof(c); i++) {
		printf("%c\n", c[i]);
	}
	for (int i = 0; i < sizeof(c); i++) {
		printf("%d\n", c[i]); //ASCII�ڵ尪 ���
	}
	*/

	//ASCII�ڵ�
	/*
	7bit ( �� 128���� �ڵ�(0~127))
	a : 97
	A : 65
	0 : 48
	*/

	//0���� 127������ �ƽ�Ű�ڵ� �� ���
	/*
	for (int i = 0; i < 128; i++)
	{
		printf("%d : %c\n", i, i);
	}*/

	return 0;
}