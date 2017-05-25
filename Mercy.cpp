
#include <iostream>

//입출력에 쓰일 명령문을 미리 선언하기 위함.
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int value;                                          //출력할 줄 수를 입력받을 변수

    while (1)                                           //10이상이나 0이하로 받을경우 다시 받도록 반복
    {
        cin >> value;                                   //출력 줄 수를 입력 받음
        if (value <= 10 && value >= 0)                  //입력된 줄 수가 0이상 10이하일 경우에만 작동
        {
            for (int i = 0; i < value; i++)             //value에 입력된 줄 수 만큼 출력
            {
                cout << "Hello Algospot!" << endl;      //출력문
            }
            break;                                      //출력이 완료되면 반복문 종료 = 프로그램 종료
        }
    }
    return 0;
}
