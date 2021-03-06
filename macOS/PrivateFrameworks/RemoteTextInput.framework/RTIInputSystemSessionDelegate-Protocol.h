//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteTextInput/NSObject-Protocol.h>

@class NSString, RTIDocumentState, RTIDocumentTraits, RTIInputSystemSession;

@protocol RTIInputSystemSessionDelegate <NSObject>

@optional
- (void)inputSession:(RTIInputSystemSession *)arg1 didChangePause:(BOOL)arg2 withReason:(NSString *)arg3;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentStateDidChange:(RTIDocumentState *)arg2;
- (void)inputSession:(RTIInputSystemSession *)arg1 documentTraitsDidChange:(RTIDocumentTraits *)arg2;
- (void)inputSessionDidDie:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidEnd:(RTIInputSystemSession *)arg1;
- (void)inputSessionDidBegin:(RTIInputSystemSession *)arg1;
@end

