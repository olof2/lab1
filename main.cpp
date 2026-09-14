#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    // cv::VideoCapture video("resources/camera_test.mp4");
	//inte buildat och testat med en kamera, men det borde fungera
    cv::VideoCapture video(0);

    if (!video.isOpened())
    {
        std::cerr << "Could not open video." << std::endl;
        return 1;
    }

    cv::Mat frame;

    while (video.read(frame)) {
        cv::imshow("OpenCV video test", frame);
        // Wait briefly; Escape closes the program.
        if (cv::waitKey(20) == 27) {
            break;
        }
    }


    /* chatgpt genererad kod nedan:
    while (true)
    {
        if (!video.read(frame))
            break;

        cv::imshow("Camera Test", frame);

        int key = cv::waitKey(30);

        if (key == 'q' || key == 27)
            break;
    }

    video.release();
    cv::destroyAllWindows();*/

    return 0;
}
