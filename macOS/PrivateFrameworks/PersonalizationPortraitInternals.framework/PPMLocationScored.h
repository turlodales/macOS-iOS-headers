//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PETScalarEventTracker;

@interface PPMLocationScored : NSObject
{
    PETScalarEventTracker *_tracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 resultSizeLog10:(unsigned long long)arg3 limitHit:(struct PPMTypeSafeBool_)arg4 timeSpec:(struct PPMTypeSafeBool_)arg5 timeLimited:(struct PPMTypeSafeBool_)arg6 exclusionSpec:(struct PPMTypeSafeBool_)arg7 error:(struct PPMTypeSafeBool_)arg8;
- (id)init;

@end

