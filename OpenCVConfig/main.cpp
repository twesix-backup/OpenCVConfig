#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	Mat img = imread("img\\1.jpg");
	imshow("Image", img);
	waitKey(6000);

	return 0;
}