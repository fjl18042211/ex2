#include <iostream>
#include <opencv.hpp>
using namespace cv;
int main() {
	cv::Mat srcMat = imread("D:\\1.jpg",0);
inshow("src", srcMat);