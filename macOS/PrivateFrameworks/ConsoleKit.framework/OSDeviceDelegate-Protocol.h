//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConsoleKit/NSObject-Protocol.h>

@class NSError, NSString, OSActivityStream, OSLogDevice;

@protocol OSDeviceDelegate <NSObject>
- (BOOL)activityStream:(OSActivityStream *)arg1 deviceUDID:(NSString *)arg2 deviceID:(OSLogDevice *)arg3 status:(long long)arg4 error:(NSError *)arg5;
@end

