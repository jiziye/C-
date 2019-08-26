#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	Mat srcImage = imread("cat.jpg"	);
	imshow("ԭͼ", srcImage);

	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));

	imshow("result", dstImage);
	waitKey(0);
	system("pause");

	return 0;
}