#include <iostream>
#include <cstdint>
#include <vector>
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "Libraries\stb\stb_image.h"
#include "Libraries\stb\stb_image_write.h"
#include "Algorithms.h"
using namespace std;

int main(){
    int channels = 1;
    //picture dimension Initialization
    int width;
    int height;
    cin>> width>> height;

    //picture path and name
    string path = "../Noise/";
    string name;
    cin>>name;
    path += name;
    path += ".png";

    // The vector that holds the picture pixel values
    vector<uint8_t> image(width*height*channels);
    
    image = Random(image);

    
    int result = stbi_write_png( path.c_str() , width, height, channels, image.data(), width*channels);

    cout<<name<<endl<<path<<endl<<"Reached The end of main";
    return 0;
}