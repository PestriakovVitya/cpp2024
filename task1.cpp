#include <iostream>
#include <string>

std::string HelperString() {
    while (true) {
        std::cout << "Выберите операцию над числом:" << " 8 - перевод в восьмиричную систему" << " 16 - перевод в шеснадцатиричную";
        std::cout << "Ввод:";
        int OperationType;
        std::cin >> OperationType;
        std::string OstNum{};
        std::string AlForHex = "0123456789ABCDEF";
        std::string strNumHex{};
        int UserNum;
        std::cout << "Введи натуральное число";
        std::cout << "Ввод:";
        std::cin >> UserNum;
        if (UserNum < 0) {
            std::cout << "Ошибочка";
            break;
        }
        switch (OperationType)
        {
            case 8:
                std::cout << "Результат:";
                
                while (UserNum != 0) {
                    OstNum = std::to_string(UserNum % 8) + OstNum;
                    UserNum /= 8;
                }
                return OstNum;
                break;
            case 16:
                std::cout << "Результат:";
                while (UserNum != 0) {
                    strNumHex = AlForHex[UserNum % 16] + strNumHex;
                    UserNum /= 16;
                }
                return strNumHex;
                break;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << HelperString();
    return 0;
}
