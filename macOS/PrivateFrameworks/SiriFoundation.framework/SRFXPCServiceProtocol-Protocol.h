//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriFoundation/NSObject-Protocol.h>

@class NSString;

@protocol SRFXPCServiceProtocol <NSObject>
- (void)endFullSuppressionActivityWithReason:(NSString *)arg1;
- (void)beginFullSuppressionActivityWithReason:(NSString *)arg1;
- (void)endVoiceTriggerSuppressionActivityWithReason:(NSString *)arg1;
- (void)beginVoiceTriggerSuppressionActivityWithReason:(NSString *)arg1;
- (void)invokeWithNotificationName:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
@end

