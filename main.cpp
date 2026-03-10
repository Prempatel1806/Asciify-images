#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include<iostream>
using namespace std;

int main(){
    int width,height,channels;

   
string ascii = " .:-=+*#%@";
    
    //~~~~Loading image~~~~
    unsigned char*data=stbi_load("images.jpg",&width,&height,&channels,0);

     int newwidth=150;
     float scaleX = (float)width / newwidth;
     float scaleY = scaleX * 2.0;
    int newheight=height/scaleY;

    if(data==NULL){
        cout<<"Image did not load";
        return 1;
    }

    //~~~~Looping through each pixel of image~~~~
for(int y=0;y<newheight;y+=2){
    for(int x=0;x<newwidth;x+=1){ 
        
        int origX=(int)x*scaleX;      //mapping ASCII pixel to riginal pixel
        int origY=(int)y*scaleY;      

        int index=(origY*width+origX)*channels;       //Index calculation
    
    int r=data[index];

    int g=data[index+1];

    int b=data[index+2];

    int brightness= 0.299*r+0.587*g+0.114*b;

    int pos=brightness*(ascii.size()-1)/255;

      cout<<ascii[pos];
    }
    cout<<endl;
}

stbi_image_free(data);   //Free image memory
return 0;












}