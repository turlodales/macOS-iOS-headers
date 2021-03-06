//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/CXCallObserverDelegate-Protocol.h>

@class CXCallObserver, NSString;

@interface HMDPhoneCallObserver : HMFObject <CXCallObserverDelegate>
{
    CXCallObserver *_observer;
}

+ (id)sharedPhoneCallObserver;
- (void).cxx_destruct;
@property(retain, nonatomic) CXCallObserver *observer; // @synthesize observer=_observer;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (BOOL)isActiveCall:(id)arg1;
- (void)startObserving;
- (BOOL)hasActiveCalls;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

