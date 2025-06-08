#include "JsonService.h"
#include <iostream>

int main() {
    JsonService js;
    try {
        Weather w = js.getWeather("weather.json");
        w.print();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}