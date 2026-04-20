#include <stdio.h> // 표준 입출력 함수 사용

int main(void)
{
int answer=0; // 정답 저장
int guess=0; // 사용자가 입력한 수 저장
int count = 0; // 총 시도 횟수 저장

scanf("%d", &answer); // 첫 번째 입력: 정답

do
{
scanf("%d", &guess); // 다음 수 입력받기
count++; // 입력받았으므로 시도 횟수 1 증가

if (guess > answer) // 정답보다 큰 경우
{
printf("%d>?\n", guess); // 입력값과 >? 출력
}
else if (guess < answer) // 정답보다 작은 경우
{
printf("%d<?\n", guess); // 입력값과 <? 출력
}
else // 정답과 같은 경우
{
printf("%d==?\n", guess); // 입력값과 ==? 출력
}

} while (guess != answer); // 정답이 아니면 계속 반복

printf("%d\n", count); // 맞힐 때까지 시도한 횟수 출력

return 0; // 정상 종료
}
