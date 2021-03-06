//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FlexMLSummaryManager : NSObject
{
    int _targetTimeScale;
    NSArray *_allFileNames;
    NSArray *_allDurations;
    NSString *_rootPath;
    NSString *_metadataPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int targetTimeScale; // @synthesize targetTimeScale=_targetTimeScale;
@property(readonly, nonatomic) NSString *metadataPath; // @synthesize metadataPath=_metadataPath;
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(readonly, nonatomic) NSArray *allDurations; // @synthesize allDurations=_allDurations;
@property(readonly, nonatomic) NSArray *allFileNames; // @synthesize allFileNames=_allFileNames;
- (id)allSummaryDurations;
- (id)_summaryForDuration:(CDStruct_1b6d18a9)arg1;
- (id)summaryForDuration:(CDStruct_1b6d18a9)arg1;
- (double)averageGranularityBetweenSummaries;
- (id)initWithSummaryMapping:(id)arg1 bundlePath:(id)arg2 metadataPath:(id)arg3 targetTimeScale:(int)arg4;

@end

