//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PFProportionalIntegralController : NSObject
{
    BOOL _outputReady;
    long long _setPoint;
    long long _integralError;
    long long _integralErrorMin;
    long long _integralErrorMax;
    double _proportionalGain;
    double _integralGain;
    long long _output;
    long long _outputMin;
    long long _outputMax;
    NSMutableArray *_statistics;
}

- (void).cxx_destruct;
@property BOOL outputReady; // @synthesize outputReady=_outputReady;
@property(retain) NSMutableArray *statistics; // @synthesize statistics=_statistics;
@property long long outputMax; // @synthesize outputMax=_outputMax;
@property long long outputMin; // @synthesize outputMin=_outputMin;
@property long long output; // @synthesize output=_output;
@property double integralGain; // @synthesize integralGain=_integralGain;
@property double proportionalGain; // @synthesize proportionalGain=_proportionalGain;
@property long long integralErrorMax; // @synthesize integralErrorMax=_integralErrorMax;
@property long long integralErrorMin; // @synthesize integralErrorMin=_integralErrorMin;
@property long long integralError; // @synthesize integralError=_integralError;
@property long long setPoint; // @synthesize setPoint=_setPoint;
- (id)statisticsDescription;
- (void)enumerateStatisticsMeasurementsWithHandler:(CDUnknownBlockType)arg1;
- (void)addStatisticsSampleForTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3;
- (void)updateWithTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3;
- (id)initWithSetPoint:(long long)arg1;

@end

