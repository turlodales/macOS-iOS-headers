//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PETScalarEventTracker;

@interface SGMEventBannerRejected : NSObject
{
    PETScalarEventTracker *_tracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_)arg2 category:(struct SGMEventCategory_)arg3 extracted:(struct SGMEventExtractionType_)arg4;
- (id)init;

@end

