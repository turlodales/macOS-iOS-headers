//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMDCameraStreamSessionID, HMDCameraStreamTracker;

@interface _HMDCameraStreamTrackerAssertion : HMFObject
{
    HMDCameraStreamTracker *_streamTracker;
    HMDCameraStreamSessionID *_streamSessionID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMDCameraStreamSessionID *streamSessionID; // @synthesize streamSessionID=_streamSessionID;
@property(readonly, nonatomic) __weak HMDCameraStreamTracker *streamTracker; // @synthesize streamTracker=_streamTracker;
- (void)dealloc;
- (id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2;

@end

