#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //T줄,홀수값이 입력될 위치, 문자열길이값
    //문자열 입력받는 변수
    //변환된 문자열을 받는 변수
    int line, hNum, tmpLen;
    char val[11][101];
    char tmp_val[101];

    //int값 초기화
    line = 0;
    hNum = 0;
    tmpLen = 0;

    //사용자에게 Encrypt할 문자열의 갯수를 입력습니다.
    //1과 10사이의 숫자가 아니면 다시 받도록 합니다.
    while (1)
    {
        cin >> line;
        cin.clear(); cin.ignore();      //버퍼비우기
        if (line <= 10 && line >= 1) break;
        else                         continue;
    }
            
    //입력받는 T줄 만큼 문자열을 입력받습니다.
    //문자열의 크기가 1이상 100이하가 아닐경우 다시 받도록 합니다.
    for (int i = 0; i < line; i++)
    {
        while (1)
        {
            cin >> val[i];
            cin.clear(); cin.ignore();  //버퍼비우기
            tmpLen = strlen(val[i]);
            if (tmpLen <= 100 && tmpLen >= 1) break;
            else                              continue;
        }
       
    }

    
    //입력받은 T줄만큼 입력받은 문자열을 변환시켜 줍니다.
    for (int i = 0; i < line; i++)
    {
        tmpLen = strlen(val[i]);                                //문자열의 크기를 tmpLen으로 전달
        if (tmpLen % 2 == 1)    hNum = (tmpLen - 1) / 2;        //홀수일경우 홀수 끝나는 자리를 -1보정값으로 지정
        else                    hNum = tmpLen / 2;              //짝수일경우 길이의 반이 되는 위치로 지정

        for (int j = 0; j < hNum; j++)                          //반값이 된만큼 반복문을 실행
        {
            tmp_val[j] = val[i][j*2+1];                         //짝수값을 순차대로 삽입
            tmp_val[hNum + j] = val[i][j*2];                    //홀수값은 홀수시작위치부터 순차대로 삽입

            if ((tmpLen / 2 != hNum + 1) && (j == hNum - 1))    //홀수값이고 반복문의 마지막엔 놓친 마지막 홀수는 tmp_val마지막 배열에 넣어줍니다.
            {
                tmp_val[hNum + j + 1] = val[i][j * 2 + 2];
                tmp_val[hNum + j + 2] ='\0';                    //맨 뒤에 NULL값을 지정해줌.
            }
            
        }
        cout << tmp_val << endl;                                //결과값 출력
    }
    return 0;
}