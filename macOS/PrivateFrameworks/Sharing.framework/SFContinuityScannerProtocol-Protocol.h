//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SDXPCDaemonProtocol-Protocol.h>

@class NSData, NSString;

@protocol SFContinuityScannerProtocol <SDXPCDaemonProtocol>
- (void)activityPayloadFromDeviceUniqueID:(NSString *)arg1 forAdvertisementPayload:(NSData *)arg2 command:(NSString *)arg3 timeout:(long long)arg4 withCompletionHandler:(void (^)(NSData *, NSError *))arg5;
- (void)scanForTypes:(unsigned long long)arg1;
@end

