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

    // N �Է¹ޱ� 
    cin >> N;

    // ���� �Է¹ޱ� 
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    // ���� �� max �� ã�� 
    for (int i = 0; i < N; i++) {
        if (score[i] > max) {
            max = score[i];

        }
    }


    //���� ������Ʈ �� ��ձ��ϱ� 
    for (int i = 0; i < N; i++) {
            score[i] = score[i] * 100 / max;
            answer += score[i] / N;
        }    
   
   
    cout << answer ;
    
}