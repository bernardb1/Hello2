// OpenCV-App1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <opencv2/opencv.hpp>
#include <iostream>
using std::cout;
//using std::end1;
using namespace cv;

int main()
{
    std::cout << "Hello World! OpenCV-App1\n";

    String filename = "C:/image.jpg";
    //Mat image = imread("C:/Bruce/Pictures/Zoo/1980-01/img_2123.JPG");
    Mat image = imread(filename);

    if (image.empty())
    {
        cout << "Could not open image [" << filename << "]." << std::endl;
        cout << "Wait for any key..." << std::endl;
        std::cin.get();  // wait for any key
        return -1;
    }

    //String window = "Window";
    //namedWindow(window);

    //imshow(window, image);

    std::cout << "Press any key in the image window... " << std::endl;
    
    // Resize
    Mat dst;

    cv::resize(image, dst, cv::Size(500, 500));
    //dst = cvCreateImage(cvSize(150, 150), image.depth(), image.channels());
    //cvResize(image, dst);
    //namedWindow("Source", CV_WINDOW_AUTOSIZE);
    //namedWindow("Source");
    //imshow("Source", image);
    
    
    String resize = "Resize";
    namedWindow(resize);
    //namedWindow("resize", CV_WINDOW_AUTOSIZE);
    imshow("Resize", dst);
   
    //char c = getchar();

    //std::cout << "Key pressed: " << c << std::endl;
    //std::cout << "Key pressed: " << c;

    waitKey(0);

    //destroyWindow(window);
    destroyWindow(resize);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
