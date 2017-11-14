#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"
#include <cstdlib>

using namespace std;

bool checkDimensions (vector < vector <Pixel> >);

vector < vector <Pixel> > averageRGB (vector < vector <Pixel> >, vector <string> &);

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

                vector <string> ListImageNames;

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
                        if (ListImageNames.size() == 0)
                        {
                                original_bmp = image.toPixelMatrix();
                                ListImageNames.push_back (imageName);
                        }
                        else
                        {
                                bmp = image.toPixelMatrix();

                                //check dimensions
                                if (checkDimensions(original_bmp,bmp))
                                {
                                        ListImageNames.push_back (imageName); 
                                        //find average value of pixels
                                        averageRGB(bmp,ListImageNames);
                                        //do i create composite image here?
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

                //creates composite image (of images thus far) ~ or here?

                image.fromPixelMatrix(bmp);
                image.save("composite-hsilveira1.bmp");

                return 0;
        }

        vector < vector <Pixel> > averageRGB (vector < vector <Pixel> > bmp, vector <string> & ListImageNames);
        {
                vector < vector <Pixel> > AverageImage;

                ListImageNames.size()= numImages;

                for (int r = 0; r < bmp.size(); r++)
                {
                        for (int c = 0; c < bmp[r].size(); c++)
                        {
                                int avgRed, avgGreen, avgBlue = 0;

                                for (int i=0; i < numImages; i++) //for loop for each image
                                {
                                        rgb = bmp[r][c];

                                        avgRed = (avgRed + rgb.red);
                                        avgGreen = (avgGreen + rgb.green);
                                        avgBlue = (avgBlue + rgb.blue);
                                }
                                avgRed = avgRed/numImages;
                                avgGreen = avgGreen/numImages;
                                avgBlue = avgBlue/numImages;
                        }
                }
                AverageImage[r][c].red = avgRed;
                AverageImage[r][c].green = avgGreen;
                AverageImage[r][c].blue = avgBlue;
        }

        bool checkDimensions (vector < vector <Pixel> > initialMatrix, vector < vector <Pixel> > newMatrix)
        {
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
