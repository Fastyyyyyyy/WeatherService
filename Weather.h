#pragma once
#include <string>

class Weather
{
public:
    std::string city;        // Íàçâàíèå ãîðîäà
    double lon;              // Äîëãîòà
    double lat;              // Øèðîòà
    double temperature;      // Òåìïåðàòóðà
    std::string weather;     // Îïèñàíèå ïîãîäû
    double windSpeed;        // Ñêîðîñòü âåòðà
    int clouds;              // Îáëà÷íîñòü (%)

    Weather(std::string city, double lon, double lat, double temperature,
        std::string weather, double windSpeed, int clouds)
        : city(city), lon(lon), lat(lat), temperature(temperature),
        weather(weather), windSpeed(windSpeed), clouds(clouds) {
    }
};
