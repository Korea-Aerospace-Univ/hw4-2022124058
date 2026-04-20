#include <stdio.h> // printf, scanf 함수를 사용하기 위해 필요한 헤더 파일

int main(void) // 프로그램의 시작점인 main 함수
{
int answer=0; // 처음에 입력받을 정답을 저장하는 변수
int guess=0; // 사용자가 매번 입력하는 추측값을 저장하는 변수
int count = 0; // 사용자가 몇 번 시도했는지 세기 위한 변수, 처음엔 0으로 시작

scanf("%d", &answer); // 첫 번째 정수 입력을 받아 정답(answer)에 저장

do
{
scanf("%d", &guess); // 사용자가 추측한 값을 입력받아 guess에 저장

count++; // 한 번 입력받을 때마다 시도 횟수를 1 증가

if (guess > answer) // 사용자가 입력한 값이 정답보다 크면
{
printf("%d>? %d 보다 낮습니다\n", guess, guess);
// 예: guess가 10이면
// 10>? 10 보다 낮습니다
// 를 출력
}
else if (guess < answer) // 사용자가 입력한 값이 정답보다 작으면
{
printf("%d<? %d 보다 높습니다\n", guess, guess);
// 예: guess가 3이면
// 3<? 3 보다 높습니다
// 를 출력
}
else // 위의 두 조건이 아니면 guess == answer, 즉 정답인 경우
{
printf("%d==? %d 정답입니다\n", guess, guess);
// 예: guess가 5이면
// 5==? 5 정답입니다
// 를 출력
}

} while (guess != answer);
// do~while문이므로
// 일단 한 번은 무조건 실행한 뒤
// guess와 answer가 다르면 계속 반복
// 같아지면 반복 종료

printf("%d ↦ 시도횟수는 %d회\n", answer, count);
// 마지막에 정답과 총 시도 횟수를 출력
// 예: 정답이 5이고 5번 만에 맞췄으면
// 5 ↦ 시도횟수는 5회
// 출력

return 0; // 프로그램이 정상적으로 끝났다는 의미
}
