//
//  PointCloudPlayAppDelegate.h
//  PointCloudPlay
//
//  Created by Michele Pratusevich on 1/31/13.
//  Copyright (c) 2013 Michele Pratusevich. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PointCloudPlayAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	//HardwareController *cameraViewController;
}

@property (strong, nonatomic) UIWindow *window;
//@property (nonatomic, retain) HardwareController *cameraViewController;

@end
