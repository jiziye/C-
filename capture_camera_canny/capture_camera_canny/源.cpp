#include<opencv2/opencv.hpp>
//#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	VideoCapture capture("test.mp4");
	//VideoCapture capture(0);

	Mat gray, edge, canny;

	while (1)
	{
		Mat frame;
		capture >> frame;

		cvtColor(frame, gray, COLOR_BGR2GRAY);//BGR²ÊÉ«×ª»Ò¶È	

		blur(gray, edge,Size(7, 7));

		Canny(edge, edge, 0, 30, 3);

		imshow("mv", frame);

		imshow("gray", gray);

		imshow("edge", edge);

		imshow("canny", edge);
		
		if (waitKey(30) >= 0 )
			break;
			

	}
	return 0;
}
