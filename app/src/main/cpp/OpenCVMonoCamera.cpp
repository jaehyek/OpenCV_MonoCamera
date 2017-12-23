#include <jni.h>
#include <string>

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;


extern "C"
JNIEXPORT void JNICALL
Java_com_woorizip_jaehyek_opencv_1monocamera_MainActivity_ConvertRGBtoGray(JNIEnv *env,
                                                                           jobject instance,
                                                                           jlong matAddrInput,
                                                                           jlong matAddrResult)
{

    Mat &matInput = *(Mat *)matAddrInput;
    Mat &matResult = *(Mat *)matAddrResult;

    cvtColor(matInput, matResult, CV_RGBA2GRAY);

}