#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"
#include <cstdlib>

using namespace std;
//function checks to see if the image is a valid bitmap
bool checkValidBitmap (string);

//function checks to see if the image has the correct dimensions
bool checkDimensions (string,int,int);

//function determines average pixel value
int averageRGB(int);

//?
void createComposite(vector<vector<Pixel>>)

//function saves the image
void saveImage(string);


int main()
{
        string imageName;

        Bitmap image;
        vector < vector <Pixel> > bmp;
        Pixel rgb;

        bool validBmp;

        validBmp = image.isImage();

        //allows user to enter ten images
        for (int i=0; i<10; i++)
        {
                //ask user for file name
                cout<<"What is the name of the image you would like to upload?"<<endl;
                cin>>imageName;

                //if image
                if (validBmp == true)
                {

                        i++;
                }
                //if image is not a valid bitmap
                else if(validBmp==false)
                {
                        i=i-1;
                }
                //if image isnt the same dimensions
                else if ()
                {
                        i=i-1;
                }
                //if user enters "DONE"
                else if (imageName=="DONE")
                {
                        i=10;
                }
                cout<<"Image "<<(i+1)<<" of 10 done."<<endl;
        }

        return 0;
}

