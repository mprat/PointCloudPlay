//
//  HardwareController.h
//  PointCloudPlay
//
//  Created by Michele Pratusevich on 2/4/13.
//  Copyright (c) 2013 Michele Pratusevich. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreMotion/CoreMotion.h>

#import "GLView.h"

class PointCloudApplication;

@interface HardwareController : UIViewController<GLViewDelegate, UINavigationControllerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, UIAlertViewDelegate> {
	AVCaptureSession *captureSession;
    GLView *glView;
    CVPixelBufferRef pixelBuffer;
    Float64 timestamp;
	CMMotionManager *motionManager;
	
	PointCloudApplication* pointcloudApplication;
	
	BOOL restartingCamera;
	BOOL accelerometer_available;
	BOOL device_motion_available;
	double g_scale;
}

@end