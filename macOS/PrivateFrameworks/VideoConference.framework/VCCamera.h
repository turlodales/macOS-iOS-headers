//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VCMicrophone;

__attribute__((visibility("hidden")))
@interface VCCamera : NSObject
{
    NSString *_displayName;
    NSString *_driverName;
    NSString *_inputName;
    NSString *_GUID;
    VCMicrophone *_associatedMicrophone;
    unsigned int _deviceID;
    int _type;
    BOOL _visible;
    BOOL _isSuspended;
    BOOL _isWidescreen;
}

- (BOOL)isWidescreen;
- (BOOL)isSuspended;
- (BOOL)irisOpen;
- (BOOL)visible;
- (int)type;
- (id)associatedMicrophone;
- (unsigned int)CMIODeviceID;
- (id)GUID;
- (id)displayName;
- (void)dealloc;
- (id)init;
- (void)setIsWidescreen:(BOOL)arg1;
- (void)setIsSuspended:(BOOL)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setType:(int)arg1;
- (id)initWithDisplayName:(id)arg1 driverName:(id)arg2 inputName:(id)arg3 GUID:(id)arg4 CMIODeviceID:(unsigned int)arg5 associatedMicrophone:(id)arg6;

@end

