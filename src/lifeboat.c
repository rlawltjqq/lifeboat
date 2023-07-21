#include <stdio.h>
#include <stdlib.h>


void bubble_sort(int arr[], int count) {
    int temp;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int solution(int people[], int n, int limit) {
    int boat = 0;
    int l = 0;
    int h = n - 1;

    while (l <= h) {
        if (people[l] + people[h] <= limit) {
            l++;
            h--;
        } else {
            h--;
        }
        boat++;
    }

    return boat;
}


int main() {
    int people[5];
    int limit = 100;
    int n = 0;

    printf("구조자 몸무게 입력: \n");

    for (int i = 0; i < 5; i++) {
    	printf(" > ");
        char input[10];


        scanf("%s",input);

        if(input[0]=='q')
            	{
            		printf("탈 출 할 사람 없음 \n");
            		break;
            	}

        people[i] = atoi(input);
        n++;
    }

    bubble_sort(people, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", people[i]);
    }
    printf("\n");

    int boats = solution(people, n, limit);
    printf("boats num: %d\n", boats);

    return 0;
}
