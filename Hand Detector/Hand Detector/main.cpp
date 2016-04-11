//
//  main.cpp
//  Hand Detector
//
//  Created by seth on 4/11/16.
//  Copyright © 2016 Seth. All rights reserved.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/features2d/features2d.hpp>

using namespace cv;


int main(int argc, const char * argv[])
{
  cv::Mat inputImage = cv::imread(argv[1]);
  cv::resize(inputImage, inputImage, Size(720,480));
  cv::imshow("Hello, world!", inputImage);
  cv::cvtColor(inputImage, inputImage, CV_BGR2GRAY);
  Canny(inputImage,inputImage,100,200);
  imshow("Canny", inputImage);
  waitKey(0);
  return 0;
}
