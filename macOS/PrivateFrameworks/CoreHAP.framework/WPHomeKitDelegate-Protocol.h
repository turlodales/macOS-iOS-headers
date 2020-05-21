//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSNumber, NSUUID, WPHomeKit;

@protocol WPHomeKitDelegate <NSObject>
- (void)homeKit:(WPHomeKit *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4 type:(long long)arg5;
- (void)homeKitDidUpdateState:(WPHomeKit *)arg1;

@optional
- (void)homeKit:(WPHomeKit *)arg1 allowDuplicate:(BOOL)arg2;
- (void)homeKit:(WPHomeKit *)arg1 failedToStartScanningWithError:(NSError *)arg2 forType:(long long)arg3;
- (void)homeKitStoppedScanning:(WPHomeKit *)arg1 forType:(long long)arg2;
- (void)homeKitStartedScanning:(WPHomeKit *)arg1 forType:(long long)arg2;
@end

