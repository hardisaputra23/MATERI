#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    // GStreamer pipeline
    std::string pipeline = "v4l2src ! videoconvert ! appsink";
    VideoCapture cap(pipeline, cv::CAP_GSTREAMER);

    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open video stream." << std::endl;
        return -1;
    }

    Mat frame;

    while (true) {
        cap >> frame;
        if (frame.empty()) {
            std::cerr << "Error: Frame is empty." << std::endl;
            break;
        }

        imshow("Camera", frame);

        if (waitKey(30) == 'q') {
            break;
        }
    }

    cap.release();
    destroyAllWindows();
    return 0;
}
