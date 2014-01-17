//
//  GPUImageVideoCameraEx.h
//  aikan
//
//  Created by lihejun on 14-1-13.
//  Copyright (c) 2014年 taobao. All rights reserved.
//

#import "GPUImageVideoCamera.h"

typedef enum {
    GPUImageVideoCaptureNone,
    GPUImageVideoCapturing,
    GPUImageVideoCapturePaused,
    GPUImageVideoCaptureStopped
}GPUImageVideoStatus;

@interface GPUImageVideoCameraEx : GPUImageVideoCamera
@property (nonatomic, assign, getter = isFlash)BOOL flash;
@property (nonatomic)GPUImageVideoStatus status;
@end
