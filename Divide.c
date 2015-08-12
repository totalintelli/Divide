/*
�����̸�: Devide.c
��    ��: �� ���� �Է¹޾� ���� ���� ���� ���� ������
		  ��� �������� ���Ѵ�.
�� �� ��: �� �� ��
�ۼ�����: 2015�� 8�� 12��
*/
#include<stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong *firstNumber, ULong *secondNumber);
void Divide(ULong *firstNUmber, ULong *secondNumber,
			ULong *quotient, ULong *remainder);
void Output(ULong quotient, ULong remainder);

int main(int argc, char *argv[]) {
	ULong firstNumber;
	ULong secondNumber;
	ULong quotient;
	ULong remainder;

	Input(&firstNumber, &secondNumber);
	Divide(firstNumber, secondNumber,
		&quotient, &remainder);
	Output(quotient, remainder);

	return 0;
}

/*
�Լ��̸�: Input
��    ��: Ű����� �� ���� �Է¹޴´�.
��    ��: ����
��    ��: ù ��, ��° ��
*/
void Input(ULong *firstNumber, ULong *secondNumber) {
	scanf("%d %d", firstNumber, secondNumber);
}

/*
�Լ��̸�: Divide
��    ��: �� ���� �Է¹޾� ��� �������� ����Ѵ�.
��    ��: �� ��
��    ��: ��, ������
*/
void Divide(ULong firstNumber, ULong secondNumber,
	ULong *quotient, ULong *remainder) {
	
	*quotient = firstNumber / secondNumber;
	*remainder = firstNumber % secondNumber;

}

/*
�Լ��̸�: Output
��    ��: ��� �������� �Է¹޾� ����Ϳ� ����Ѵ�.
��    ��: ��, ������
��    ��: ����
*/
void Output(ULong quotient, ULong remainder) {
	printf("��: %d\n������: %d\n", quotient, remainder);
}