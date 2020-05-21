//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PADevice : NSObject
{
}

+ (id)deviceWithIdentifier:(id)arg1;
+ (id)cpuDevice;
+ (id)availableDevices;
+ (id)_newDeviceList;
- (id)renderFormatForPixelFormat:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToDevice:(id)arg1;
- (id)description;
- (struct _cl_context *)sharedCLContext;
- (struct _cl_device_id *)openCLDeviceID;
- (id)sharedCIContext;
- (struct _CGLContextObject *)sharedGLContext;
- (int)type;
- (id)identifier;
- (id)name;

@end

