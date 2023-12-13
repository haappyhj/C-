#include<stdio.h>
//main을 하나만 지정해줘야 함 근데 속성으로 01 파일 수정시 가능

int main() {
	//서식 지정자
	//%d 정수된 숫자

	//printf("%d%d%d%d%d",1,1,1,1,1); // %d는 오른쪽 정확히 개수만큼 넣어줘야 함
	
	printf("%d*%d=%d\n", 2, 3, 6);
	printf("%d+%d=%d", 5, 10, 15);
	return 0;
}