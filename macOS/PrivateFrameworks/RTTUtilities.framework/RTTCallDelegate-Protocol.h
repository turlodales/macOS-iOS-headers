//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RTTUtilities/NSObject-Protocol.h>

@class NSString, RTTCall;

@protocol RTTCallDelegate <NSObject>
- (void)ttyCall:(RTTCall *)arg1 shouldDisplayServiceMessage:(NSString *)arg2;
- (void)ttyCall:(RTTCall *)arg1 didSendRemoteString:(NSString *)arg2 forUtterance:(NSString *)arg3;
- (void)ttyCall:(RTTCall *)arg1 didReceiveString:(NSString *)arg2 forUtterance:(NSString *)arg3;
@end

