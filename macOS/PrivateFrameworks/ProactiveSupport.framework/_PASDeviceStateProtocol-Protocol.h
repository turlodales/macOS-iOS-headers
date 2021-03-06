//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _PASDeviceStateProtocol <NSObject>
+ (NSString *)currentOsBuild;
+ (BOOL)isConstrainedDevice;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(void (^)(void))arg1;
+ (void)blockUntilFirstUnlock;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;
+ (id)registerForLockStateChangeNotifications:(void (^)(int))arg1;
+ (BOOL)isDeviceFormattedForProtection;
+ (BOOL)isUnlocked;
+ (BOOL)isClassCLocked;
+ (int)lockState;
@end

