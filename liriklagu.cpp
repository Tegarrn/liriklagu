#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

void animate_text(const std::string& text, double delay, const std::string& color) {
    std::cout << color; // Set warna
    for (char c : text) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::duration<double>(delay));
    }
    std::cout << "\033[0m" << std::endl; // Reset warna
}

void sing_lyric(const std::string& lyric, double delay, double speed, double line_delay, const std::string& color) {
    std::this_thread::sleep_for(std::chrono::duration<double>(delay));
    animate_text(lyric, speed, color);
    std::this_thread::sleep_for(std::chrono::duration<double>(line_delay));
}

int main() {
    std::vector<std::string> lyrics = {
        "Tante...",
        "Sudah terbiasa terjadi tante...",
        "Tenang datang cuma kalo butuh saja...",
        "Coba kalau lagi susah...",
        "Mereka semua menghilaaaaaaaaaaaaaaaaaaaaaaaaaaaaang...",
        "Tanteeee...."
    };

    std::vector<std::string> colors = {
        "\033[31m", // Merah
        "\033[32m", // Hijau
        "\033[33m", // Kuning
        "\033[34m", // Biru
        "\033[35m", // Ungu
        "\033[36m"  // Cyan
    };

    std::vector<double> speeds = {0.08, 0.09, 0.08, 0.08, 0.09, 0.08};
    std::vector<double> delays = {0.3, 1.5, 1.0, 0.5, 1.3, 0.3};

    
}
