//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _PASRng;

@interface SGModelSampler : NSObject
{
    double _positiveRate;
    double _negativeRate;
    _PASRng *_rng;
}

- (void).cxx_destruct;
- (BOOL)shouldSampleForLabel:(id)arg1;
- (id)initWithPositiveRate:(double)arg1 negativeRate:(double)arg2 rng:(id)arg3;

@end

