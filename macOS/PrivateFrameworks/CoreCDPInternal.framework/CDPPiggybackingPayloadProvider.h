//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPKeychainCircleProxy-Protocol.h>

@class KCJoiningRequestAccountCircleDelegate, KCJoiningRequestCircleSession, NSString;

@interface CDPPiggybackingPayloadProvider : NSObject <CDPKeychainCircleProxy>
{
    KCJoiningRequestCircleSession *_session;
    KCJoiningRequestAccountCircleDelegate *_delegate;
}

+ (id)proxyWithSession:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (BOOL)requiresInitialSync;
- (BOOL)supportsInteractiveAuth;
- (BOOL)isComplete;
- (id)processIncomingPayload:(id)arg1 error:(id *)arg2;
- (id)initiatingPayload:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

