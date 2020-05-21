//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PFCanceler.h"

@class NSObject<OS_dispatch_queue>, NSString, PFAsyncDispatchMulticaster<PFCancelerObserverMulticaster>;

@interface PFCanceler : NSObject <PFCanceler>
{
    NSObject<OS_dispatch_queue> *_serializer;
    BOOL _isCanceled;
    PFAsyncDispatchMulticaster<PFCancelerObserverMulticaster> *_multicaster;
}

+ (BOOL)supportsNotifyOnCancel;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancel;
- (BOOL)isCanceled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

