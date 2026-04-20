#include <stdio.h> // scanf, printf를 사용하기 위한 헤더파일

int main(void)
{
int N=0; // 입력받을 문자열의 전체 길이
char str[101]; // 문자열 저장용 배열
// 마지막에 문자열 끝 표시('\0')까지 고려해서 101칸으로 선언

int i; // 문자열을 한 글자씩 확인할 때 사용할 반복 변수

int lowerCount = 0; // 현재 연속해서 나온 소문자 개수
int lowerMax = 0; // 지금까지 나온 소문자 연속 개수 중 최대값

int numCount = 0; // 현재 연속해서 나온 숫자 개수
int numMax = 0; // 지금까지 나온 숫자 연속 개수 중 최대값

scanf("%d", &N); // 문자열 길이 N 입력
scanf("%s", str); // 숫자와 소문자로 이루어진 문자열 입력

for(i = 0; i < N; i++) // 문자열의 첫 문자부터 마지막 문자까지 차례대로 검사
{
if(str[i] >= 'a' && str[i] <= 'z') // 현재 문자가 영어 소문자이면
{
lowerCount++; // 소문자가 연속되었으므로 소문자 개수 1 증가
numCount = 0; // 숫자 연속은 여기서 끊기므로 0으로 초기화

if(lowerCount > lowerMax) // 현재 소문자 연속 개수가 최대값보다 크면
{
lowerMax = lowerCount; // 최대 연속 개수를 현재 값으로 갱신
}
}
else if(str[i] >= '0' && str[i] <= '9') // 현재 문자가 숫자이면
{
numCount++; // 숫자가 연속되었으므로 숫자 개수 1 증가
lowerCount = 0; // 소문자 연속은 여기서 끊기므로 0으로 초기화

if(numCount > numMax) // 현재 숫자 연속 개수가 최대값보다 크면
{
numMax = numCount; // 최대 연속 개수를 현재 값으로 갱신
}
}
else // 문제 조건에는 없지만, 다른 문자가 들어오는 경우를 대비
{
lowerCount = 0; // 소문자 연속 끊김
numCount = 0; // 숫자 연속 끊김
}
}

printf("%d\n", lowerMax); // 연속된 소문자의 최대 개수 출력
printf("%d\n", numMax); // 연속된 숫자의 최대 개수 출력

return 0; // 프로그램 정상 종료
}
