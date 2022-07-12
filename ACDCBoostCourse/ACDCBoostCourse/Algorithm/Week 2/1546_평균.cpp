#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int main()
{
    int N;
    float score[1000] = {0,};
    float max = 0;
    float answer = 0;

    // N 입력받기 
    cin >> N;

    // 성적 입력받기 
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    // 성적 중 max 값 찾기 
    for (int i = 0; i < N; i++) {
        if (score[i] > max) {
            max = score[i];

        }
    }


    //성적 업데이트 및 평균구하기 
    for (int i = 0; i < N; i++) {
            score[i] = score[i] * 100 / max;
            answer += score[i] / N;
        }    
   
   
    cout << answer ;
    
}