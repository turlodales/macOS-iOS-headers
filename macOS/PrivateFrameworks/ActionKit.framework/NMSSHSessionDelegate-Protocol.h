//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class NMSSHSession, NSError, NSString;

@protocol NMSSHSessionDelegate <NSObject>

@optional
- (BOOL)session:(NMSSHSession *)arg1 shouldConnectToHostWithFingerprint:(NSString *)arg2;
- (void)session:(NMSSHSession *)arg1 didDisconnectWithError:(NSError *)arg2;
- (NSString *)session:(NMSSHSession *)arg1 keyboardInteractiveRequest:(NSString *)arg2;
@end

