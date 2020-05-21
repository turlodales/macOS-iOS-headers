//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVVideoCompositionInstruction.h"
#import "NSCopying.h"

@class NSArray, NSMutableDictionary, NSString, NUColorSpace, NUComposition, NURenderContext, NURenderJob;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying>
{
    NSMutableDictionary *_sourceIdentifiersByTrackID;
    NSArray *_requiredSourceTrackIDs;
    NURenderJob *_renderJob;
    NURenderContext *_renderContext;
    NUComposition *_adjustmentComposition;
    NSArray *_pipelineFilters;
    NUColorSpace *_colorSpace;
    long long _sampleMode;
    CDStruct_1e2b2e48 _renderScale;
    CDStruct_e83c9415 _timeRange;
}

+ (id)instructionFromBase:(id)arg1;
+ (id)instructionForVideoTrack:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long sampleMode; // @synthesize sampleMode=_sampleMode;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) CDStruct_912cb5d2 renderScale; // @synthesize renderScale=_renderScale;
@property(retain, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(retain, nonatomic) NUComposition *adjustmentComposition; // @synthesize adjustmentComposition=_adjustmentComposition;
@property(retain) NURenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) __weak NURenderJob *renderJob; // @synthesize renderJob=_renderJob;
@property(retain, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToInstruction:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)sourceIdentifierForTrackID:(id)arg1;
- (void)setSourceIdentifier:(id)arg1 forTrackID:(id)arg2;
@property(readonly, nonatomic) int passthroughTrackID;
@property(readonly, nonatomic) BOOL containsTweening;
@property(readonly, nonatomic) BOOL enablePostProcessing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

