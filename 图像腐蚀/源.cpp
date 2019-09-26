#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>

using namespace cv;

int main()
{
	Mat srcImage = imread("..\\img\\1.jpg");
	imshow("src image", srcImage);

	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);

	imshow("dst image", dstImage);
	waitKey(5000);

	return 0;
}