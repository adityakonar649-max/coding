#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv) {
    // Usage: pass number of tiers as first argument, otherwise default to 4
    int tiers = 4;
    if (argc > 1) {
        try { tiers = std::max(1, std::stoi(argv[1])); }
        catch (...) { tiers = 4; }
    }

    const int baseRows = 4; // rows in the first (top) tier
    // compute maximum star width so tree can be centered
    int maxStars = 0;
    for (int t = 0; t < tiers; ++t) {
        int rows = baseRows + t;
        for (int r = 0; r < rows; ++r) {
            int stars = 2 * (r + t) + 1;
            if (stars > maxStars) maxStars = stars;
        }
    }

    // print tiers (leaves)
    for (int t = 0; t < tiers; ++t) {
        int rows = baseRows + t;
        for (int r = 0; r < rows; ++r) {
            int stars = 2 * (r + t) + 1;
            int pad = (maxStars - stars) / 2;
            std::cout << std::string(pad, ' ');
            // simple decoration: use 'o' every 7th position, otherwise '*'
            for (int s = 0; s < stars; ++s) {
                if ((s + r + t) % 7 == 0) std::cout << 'o';
                else std::cout << '*';
            }
            std::cout << '\n';
        }
    }

    // print trunk
    int trunkWidth = (tiers % 2 == 0) ? tiers + 1 : tiers; // make trunk odd-width
    int trunkHeight = std::max(1, tiers);
    int trunkPad = (maxStars - trunkWidth) / 2;
    for (int h = 0; h < trunkHeight; ++h) {
        std::cout << std::string(trunkPad, ' ') << std::string(trunkWidth, '#') << '\n';
    }

    return 0;
}