//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EspressoBrick.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLTileBrick : NSObject <EspressoBrick>
{
    _Bool _shapeInfoNeeded;
    NSArray *_reps;
    NSArray *_inputRanks;
    NSArray *_outputRanks;
    NSArray *_inputShapes;
    NSArray *_outputShapes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *outputShapes; // @synthesize outputShapes=_outputShapes;
@property(readonly, nonatomic) NSArray *inputShapes; // @synthesize inputShapes=_inputShapes;
@property(readonly, nonatomic) NSArray *outputRanks; // @synthesize outputRanks=_outputRanks;
@property(readonly, nonatomic) NSArray *inputRanks; // @synthesize inputRanks=_inputRanks;
@property(readonly, nonatomic) NSArray *reps; // @synthesize reps=_reps;
@property(readonly, nonatomic) _Bool shapeInfoNeeded; // @synthesize shapeInfoNeeded=_shapeInfoNeeded;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (BOOL)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

