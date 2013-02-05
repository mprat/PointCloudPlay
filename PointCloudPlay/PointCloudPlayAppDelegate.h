//
//  PointCloudPlayAppDelegate.h
//  PointCloudPlay
//
//  Created by Michele Pratusevich on 1/31/13.
//  Copyright (c) 2013 Michele Pratusevich. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HardwareController.h"

@class HardwareController;

@interface PointCloudPlayAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	HardwareController *cameraViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) HardwareController *cameraViewController;

@end
