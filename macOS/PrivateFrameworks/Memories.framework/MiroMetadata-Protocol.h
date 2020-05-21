//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MiroAnalysisInfo, MiroVPIrisRecommendedMetadataRange, NSArray;

@protocol MiroMetadata <NSObject>
@property(readonly, nonatomic) double miro_IrisVideoUsableDuration;
@property(readonly, nonatomic) MiroVPIrisRecommendedMetadataRange *miro_IrisUsableRange;
@property(readonly, nonatomic) BOOL miro_IrisVideoUsable;
@property(readonly, nonatomic) BOOL miro_isBlacklisted;
@property(readonly, nonatomic) BOOL miro_isJunk;
@property(readonly, nonatomic) unsigned long long miro_voiceCount;
@property(readonly, nonatomic) unsigned long long miro_faceCount;
@property(readonly, nonatomic) unsigned long long miro_performedAnalysisTypes;
@property(readonly, nonatomic) long long miro_analysisVersion;
@property(readonly, nonatomic) unsigned long long miro_flags;
@property(readonly, nonatomic) double miro_score;
- (void)miro_deleteRangesWithType:(unsigned long long)arg1;
- (void)miro_setRanges:(NSArray *)arg1 replaceType:(unsigned long long)arg2;
- (NSArray *)miro_transientRangesWithType:(unsigned long long)arg1;
- (NSArray *)miro_rangesWithType:(unsigned long long)arg1;
- (NSArray *)miro_allRanges;
- (MiroAnalysisInfo *)miro_ingestServerSideAnalysisResults:(char *)arg1;
@end

