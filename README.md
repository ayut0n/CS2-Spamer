# CS2-Spamer
![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?style=flat&logo=c%2B%2B) ![Build](https://img.shields.io/badge/Build-CMake-064F8C?style=flat&logo=cmake) ![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?style=flat&logo=windows)

**[Русский](#русский)** | **[English](#english)**

---

<a id="русский"></a>
## Russian

Спамер для Counter-Strike 2, который работает по принципу нажатия по кнопке **Mouse5** (В системе как `XBUTTON2`). 

### Принцип работы

1. Выполните команду `bind "mouse5"` (например `bind "mouse5" "say text"`)
2. При нажатии на клавишу **F6** программа начинает быстро нажимать по клавише **Mouse5** 
3. При нажатии программой клавиши **Mouse5** в чат игры отправляется текст, который был "забинджен" ранее.
4. Программа продолжает жать на клавишу и спамить в чат.

### Управление программой

- F6 - Включить / Выключить спам
- END - Завершение работы программы

### Установка

1. Перейдите в раздел Release и скачайте файл CS2-Spamer.exe
2. Запустите CS2-Spamer.exe

### Самостоятельная сборка

Для самостоятельной сборки программы вам понадобится Visual Studio Code, а также расширение CMake Tools. Для компиляции программы установите MSYS2 MinGW.

1. Скачайте исходный код программы в ZIP-архиве.
2. Распакуйте архив
3. В терминале Visual Studio Code перейдите в место распаковки архива.
4. Создайте папку для сборки и перейдите в нее:
```
mkdir build
cd build
```
5. Сгенерируйте файлы сборки и скомпилируйте в режиме Release:
```
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```
6. Готовый файл .exe появится в папке `build`

---

<a id="english"></a>
## English

A spam bot for Counter-Strike 2 that works by clicking the **Mouse5** button (referred to in the system as `XBUTTON2`). 

### How It Works

1. Run the command `bind “mouse5”` (for example, `bind ‘mouse5’ “say text”`)
2. When you press the **F6** key, the program starts rapidly clicking the **Mouse5** button 
3. When the program clicks the **Mouse5** button, the text that was previously “bound” is sent to the game chat.
4. The program continues to click the button and spam the chat.

### Program Controls

- F6 - Turn spam on / off
- END - Exit the program

### Installation

1. Go to the Release section and download the CS2-Spamer.exe file
2. Run CS2-Spamer.exe

### Building the Program Yourself

To build the program yourself, you’ll need Visual Studio Code and the CMake Tools extension. To compile the program, install MSYS2 MinGW.

1. Download the program’s source code in a ZIP archive.
2. Extract the archive
3. In the Visual Studio Code terminal, navigate to the directory where the archive was extracted.
4. Create a build directory and navigate to it:
```
mkdir build
cd build
```
5. Generate the build files and compile in Release mode:
```
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
```
6. The finished .exe file will appear in the `build` folder
