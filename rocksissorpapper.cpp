#include <iostream>
#include <string>
using namespace std;

int main() {
    string romi;
    string juli;

    cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���" << endl;
    cout << "�ι̿�>> ";
    getline(cin, romi);
    cout << endl << "�ٸ���>> ";
    getline(cin, juli);

    if(romi == "����" && juli == "����")
        cout << "�ٸ��� �̱�" << endl;
    
    else if(romi == "����" && juli == "��")
        cout << "�ι̿� �̱�" << endl;
    
    else if(romi == "����" && juli == "����")
        cout << "�ι̿� �̱�" << endl;
        
    else if(romi == "����" && juli == "��")
        cout << "�ٸ��� �̱�" << endl;
        
    else if(romi == "��" && juli == "����")
        cout << "�ι̿� �̱�" << endl;
    
    else if(romi == "��" && juli == "����")
        cout << "�ٸ��� �̱�" << endl;
    else
        cout << "�����ϴ�." << endl;

    return 0;
        
}