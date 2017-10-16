// to rotate an image
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
Mat imgr(Mat im,double angle)
{
Mat ds;
Point2f pt(im.cols/2.,im.rows/2.);
Mat r=getRotationMatrix2D(pt,angle,1.0);
warpAffine(im,ds,r,Size(im.cols,im.rows));
return ds;

}
int main(int argc ,const char** v)
{double ch;
Mat imgin=imread(v[1],IMREAD_COLOR);
namedWindow("Original",WINDOW_AUTOSIZE);
imshow("Original",imgin);
//Rotation of an image

cout<<"Enter angle for rotation";
cin>>ch;
Mat imgrot=imgr(imgin,ch);
namedWindow("Rotated",WINDOW_AUTOSIZE);
imshow("Rotated",imgrot);
waitKey(0);
return 0;
}
