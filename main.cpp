#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

void ClickMouse5() {
    INPUT input = {0};
    input.type = INPUT_MOUSE;
    
    input.mi.dwFlags = MOUSEEVENTF_XDOWN;
    input.mi.mouseData = XBUTTON2; 
    SendInput(1, &input, sizeof(INPUT));

    input.mi.dwFlags = MOUSEEVENTF_XUP;
    SendInput(1, &input, sizeof(INPUT));
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "====================================\n";
    std::cout << "             CS2 Spamer             \n";
    std::cout << "====================================\n";
    std::cout << "[F6]  - Включить / Выключить спам\n";
    std::cout << "[END] - Закрыть программу\n\n";
    std::cout << "[F6]  - On / Off spam\n";
    std::cout << "[END] - Close programm\n\n";
    bool isActive = false;
    bool isF6Pressed = false;

    while (true) {
        if (GetAsyncKeyState(VK_END) & 0x8000) {
            std::cout << "Выход...\n";
            break;
        }

        if (GetAsyncKeyState(VK_F6) & 0x8000) {
            if (!isF6Pressed) {
                isActive = !isActive;
                isF6Pressed = true;
                
                if (isActive) {
                    std::cout << "Статус: ВКЛЮЧЕН\n";
                } else {
                    std::cout << "Статус: ВЫКЛЮЧЕН\n";
                }
            }
        } else {
            isF6Pressed = false;
        }

        if (isActive) {
            ClickMouse5();
            std::this_thread::sleep_for(std::chrono::milliseconds(15));
        } else {
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }

    return 0;
}