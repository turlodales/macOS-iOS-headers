//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface PFVideoExportRangeCoordinator : NSObject
{
    BOOL _cancelled;
    NSMutableArray *_waitingCallers;
    NSObject<OS_dispatch_queue> *_stateQueue;
    struct _NSRange _availableRange;
}

- (void).cxx_destruct;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain) NSMutableArray *waitingCallers; // @synthesize waitingCallers=_waitingCallers;
@property struct _NSRange availableRange; // @synthesize availableRange=_availableRange;
- (void)cancel;
- (BOOL)waitForAvailabilityOfRange:(struct _NSRange)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;
- (void)updateAvailableRange:(struct _NSRange)arg1;
- (id)init;

@end

