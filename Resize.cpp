// to rotate an image
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
Mat resimg(Mat im)
{
Mat ds;
resize(im,ds,Size(),0.5,0.5,INTER_LINEAR);
return ds;

}
int main(int argc ,const char** v)
{
Mat imgin=imread(v[1],IMREAD_COLOR);
namedWindow("Original",WINDOW_AUTOSIZE);
imshow("Original",imgin);
//REsizing of an image
Mat imgres=resimg(imgin);
namedWindow("Resized",WINDOW_AUTOSIZE);
imshow("Resized",imgres);
imwrite("/home/ashu/opencv examples/res.jpg",imgres);
waitKey(0);
return 0;
}
