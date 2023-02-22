#include <iostream>
#include <string>
using namespace std;

int main() {
    string romi;
    string juli;

    cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요" << endl;
    cout << "로미오>> ";
    getline(cin, romi);
    cout << endl << "줄리엣>> ";
    getline(cin, juli);

    if(romi == "가위" && juli == "바위")
        cout << "줄리엣 이김" << endl;
    
    else if(romi == "가위" && juli == "보")
        cout << "로미오 이김" << endl;
    
    else if(romi == "바위" && juli == "가위")
        cout << "로미오 이김" << endl;
        
    else if(romi == "바위" && juli == "보")
        cout << "줄리엣 이김" << endl;
        
    else if(romi == "보" && juli == "바위")
        cout << "로미오 이김" << endl;
    
    else if(romi == "보" && juli == "가위")
        cout << "줄리엣 이김" << endl;
    else
        cout << "비겼습니다." << endl;

    return 0;
        
}