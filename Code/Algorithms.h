#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;
vector<uint8_t> Random (vector<uint8_t> image){
    for (int i =0; i<image.size(); i++){
        image[i] = rand()%255;
    }
    return image;
}