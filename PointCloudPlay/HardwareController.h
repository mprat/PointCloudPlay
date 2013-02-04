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

@property (nonatomic, retain) AVCaptureSession *captureSession;
@property (nonatomic, retain) GLView *glView;
@property (nonatomic) CVPixelBufferRef pixelBuffer;
@property (nonatomic, retain) CMMotionManager *motionManager;
@property (nonatomic) double g_scale;
@property (nonatomic) Float64 timestamp;
@property (nonatomic) BOOL restartingCamera;
@property (nonatomic) BOOL accelerometer_available;
@property (nonatomic) BOOL device_motion_available;
@property (nonatomic) PointCloudApplication* pointcloudApplication;

@end