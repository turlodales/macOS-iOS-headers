//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PETScalarEventTracker;

@interface PPMFeedbackRegistered : NSObject
{
    PETScalarEventTracker *_tracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 client_id:(id)arg2 variant_name:(id)arg3 type:(struct PPMPortraitFeedbackType_)arg4 component:(struct PPMPortraitComponent_)arg5 mapping_id:(id)arg6 from_portrait:(struct PPMTypeSafeBool_)arg7;
- (id)init;

@end

