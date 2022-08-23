#ifndef KEYLOGGER_KEYS_H
#define KEYLOGGER_KEYS_H

#include <unordered_map>
#include <string>

#define KEY_PRESSED -32767

namespace Keys {
    std::unordered_map<int, std::string> GetNumberKeys();

    std::unordered_map<int, std::string> GetLetterKeys();

    std::unordered_map<int, std::string> GetWindowsKeys();

    std::unordered_map<int, std::string> GetSymbolKeys();
}

#endif //KEYLOGGER_KEYS_H
