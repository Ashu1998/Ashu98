
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
Mat filtimg(Mat im)
{
Mat ds;
bilateralFilter(im,ds,15,80,80,BORDER_DEFAULT);
return ds;

}
int main(int argc ,const char** v)
{
Mat imgin=imread(v[1],IMREAD_COLOR);
namedWindow("Original",WINDOW_AUTOSIZE);
imshow("Original",imgin);
//Filtering an image
Mat imgfilt=filtimg(imgin);
namedWindow("Filtered",WINDOW_AUTOSIZE);
imshow("Filtered",imgfilt);
imwrite("/home/ashu/opencv examples/res.jpg",imgfilt);
waitKey(0);
return 0;
}
