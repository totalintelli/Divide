/*
파일이름: Devide.c
기    능: 두 수를 입력받아 앞의 수를 뒤의 수로 나누어
		  몫과 나머지를 구한다.
작 성 자: 송 용 단
작성일자: 2015년 8월 12일
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
함수이름: Input
기    능: 키보드로 두 수를 입력받는다.
입    력: 없음
출    력: 첫 수, 둘째 수
*/
void Input(ULong *firstNumber, ULong *secondNumber) {
	scanf("%d %d", firstNumber, secondNumber);
}

/*
함수이름: Divide
기    능: 두 수를 입력받아 몫과 나머지를 출력한다.
입    력: 두 수
출    력: 몫, 나머지
*/
void Divide(ULong firstNumber, ULong secondNumber,
	ULong *quotient, ULong *remainder) {
	
	*quotient = firstNumber / secondNumber;
	*remainder = firstNumber % secondNumber;

}

/*
함수이름: Output
기    능: 몫과 나머지를 입력받아 모니터에 출력한다.
입    력: 몫, 나머지
출    력: 없음
*/
void Output(ULong quotient, ULong remainder) {
	printf("몫: %d\n나머지: %d\n", quotient, remainder);
}