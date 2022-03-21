#include <iostream>
#include <opencv4/opencv2/opencv.hpp>

cv::Mat cv_test(){
    cv::Mat_<int> m1(100,100);
    return m1;
}

void run_cv_test(){
    cv::Mat r1 = cv_test();
    std::cout << r1.cols << std::endl;
}

int main(){
    run_cv_test();
}
