# lifeboat
# Greed algorithm
/*
* 함수 1 void bubble sort
* 오름차순으로 무게 정렬 
* 
* 함수 2  int solution
* 인자 people[], n, limit 
* boat = 0 보트 카운트 초기화 
* l = 가장 가벼운 사람 
* h = 가장 무거운 사람
*
* l = 0 배열의 첫번째 위치
* h= n-1 배열의 맨 끝
*
* 조건
* whlie (배열 상의 l의 위치가 h보다 작을때)
* if (l+h 크기가 limit보다 작거나 같을 때)
*   l의 위치 +1 이동 h의 위치 -1 이동
*   아니면 h--1;
*   
*  loop 1회 돌때 마다 boat 수 1증가
*  boat 수 반환 
*
*
*
*
* main
* 사람의 수 배열[5]
* limit = 100  1인당 무게 리미트
* 0이 입력되면 "탈 출 할 사람 없음" 출력 
* 문자열을 정수로 변환
* bubble sort
* 오름차순 정렬
* 카운트 된 보트 갯수 출력
*
* 
*/

