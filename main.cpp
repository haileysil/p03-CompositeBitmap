#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"
#include <cstdlib>

using namespace std;

//function checks to see if the image has the correct dimensions
bool checkDimensions (vector < vector <Pixel> >);

//function determines average pixel value
vector <double> averageRGB ();

void createComposite(vector<vector<Pixel>>)

int main()
{
        string imageName;

        Bitmap image;
        vector < vector <Pixel> > bmp;
        Pixel rgb;

        bool validBmp;

        //allows user to enter ten images
        for (int i=0; i<10; i++)
        {
                //ask user for file name
                cout<<"What is the name of the image you would like to upload?"<<endl;
                cin>>imageName;

                image.open(imageName);

                validBmp = image.isImage();

                //if user enters DONE
                if (imageName == "DONE")
                {
                        i=10;
                }
                if (validBmp == true)
                {
                        //convert image to matrix of pixels

                        bmp = image.toPixelMatrix();

                        //check dimensions
                        checkDimensions(bmp);

                        if (checkDimensions==true)
                        {
                                //find average value of pixels
                                averageRGB();
                                i=i++;
                        } 
                        else 
                        {
                                i=i-1;
                        }

                }
                else if (validBmp == false) 
                {
                        i=i-1;
                }

                cout<<"Image "<<(i+1)<<" of 10 done."<<endl;
        }

       //creates composite image (of images thus far)
       //???
       
       image.fromPixelMatrix(bmp);
       image.save("composite-hsilveira1.bmp");

        return 0;
}


vector <double> averageRGB ();
{
        int avgRGB = 0;
        vector <double> avg;

        for (int r = 0; r < bmp.size(); r++)
        {
                for (int c = 0; c < bmp[r].size(); c++)
                {
                        rgb = bmp[r][c];

                        avgRGB = (rgb.red + rgb.green + rgb.blue)/3;
                }

        }
        //stores average RGB values in vector
        avg.push_back(avgRGB);
        return avg;
}


bool checkDimensions (vector < vector <Pixel> > initialMatrix, vector < vector <Pixel> > newMatrix)
{

//first matrix dimensions are saved and compared to the others

const int initialMatrix.size() = height;
const int initialMatrix[0].size() = width; 

if (newMatrix.size() == height && newMatrix[0].size() == width)
        {

                return true;
        }
        else 
        {
                return false;
        }

}
