#include "keys.h"
#include <unordered_map>
#include <string>

using namespace Keys;

std::unordered_map<int, std::string> Keys::GetNumberKeys() {
    static std::unordered_map<int, std::string> keys = {
            {48,  "0"},
            {49,  "1"},
            {50,  "2"},
            {51,  "3"},
            {52,  "4"},
            {53,  "5"},
            {54,  "6"},
            {55,  "7"},
            {56,  "8"},
            {57,  "9"},
            {96,  "0"},
            {97,  "1"},
            {98,  "2"},
            {99,  "3"},
            {100, "4"},
            {101, "5"},
            {102, "6"},
            {103, "7"},
            {104, "8"},
            {105, "9"},
    };
    return keys;
}

std::unordered_map<int, std::string> Keys::GetLetterKeys() {
    static std::unordered_map<int, std::string> keys =
            {
                    {32,  " "},
                    {65,  "a"},
                    {66,  "b"},
                    {67,  "c"},
                    {68,  "d"},
                    {69,  "e"},
                    {70,  "f"},
                    {71,  "g"},
                    {72,  "h"},
                    {73,  "i"},
                    {74,  "j"},
                    {75,  "k"},
                    {76,  "l"},
                    {77,  "m"},
                    {78,  "n"},
                    {79,  "o"},
                    {80,  "p"},
                    {81,  "q"},
                    {82,  "r"},
                    {83,  "s"},
                    {84,  "t"},
                    {85,  "u"},
                    {86,  "v"},
                    {87,  "w"},
                    {88,  "x"},
                    {89,  "y"},
                    {90,  "z"},
                    {192, "ñ"},
            };
    return keys;
}

std::unordered_map<int, std::string> Keys::GetWindowsKeys() {
    static std::unordered_map<int, std::string> keys = {
            {3,  "[CTRL-BREAK]"},
            {8,  "[BACKSPACE]"},
            {9,  "[TAB]"},
            {12, "[CLEAR]"},
            {13, "[ENTER]"},
            {16, "[SHIFT]"},
            {17, "[CTRL]"},
            {18, "[ALT]"},
            {20, "[CAPS-LOCK]"},
            {33, "[PAGE-UP]"},
            {34, "[PAGE-DOWN]"},
            {35, "[END]"},
            {36, "[HOME]"},
            {37, "[LEFT-ARROW]"},
            {38, "[UP-ARROW]"},
            {39, "[RIGHT-ARROW]"},
            {40, "[DOWN-ARROW]"},
            {43, "[EXECUTE]"},
            {45, "[INSERT]"},
            {46, "[DELETE]"},
    };
    return keys;
}

std::unordered_map<int, std::string> Keys::GetSymbolKeys() {
    static std::unordered_map<int, std::string> keys = {
            {186, "[TILDE]"},
            {187, "+"},
            {222, "{"},
            {191, "}"},
            {188, ","},
            {190, "."},
            {189, "-"},
            {111, "/"},
            {106, "*"},
            {109, "-"},
            {107, "+"},
            {220, "|"},
            {219, "'"},
            {221, "¿"},
    };
    return keys;
}