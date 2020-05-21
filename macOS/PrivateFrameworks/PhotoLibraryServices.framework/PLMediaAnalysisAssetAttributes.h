//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, PLManagedAsset;

@interface PLMediaAnalysisAssetAttributes : PLManagedObject
{
}

+ (id)entityName;
+ (id)fetchRequest;
- (void)willSave;
- (CDStruct_3c1748cc)bestVideoTimeRange;
- (void)setBestVideoTimeRange:(CDStruct_3c1748cc)arg1;
- (CDStruct_198678f7)bestKeyFrameTime;
- (void)setBestKeyFrameTime:(CDStruct_198678f7)arg1;

// Remaining properties
@property(nonatomic) float activityScore; // @dynamic activityScore;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(nonatomic) short audioClassification; // @dynamic audioClassification;
@property(nonatomic) float autoplaySuggestionScore; // @dynamic autoplaySuggestionScore;
@property(nonatomic) int bestKeyFrameTimeScale; // @dynamic bestKeyFrameTimeScale;
@property(nonatomic) long long bestKeyFrameValue; // @dynamic bestKeyFrameValue;
@property(nonatomic) int bestVideoRangeDurationTimeScale; // @dynamic bestVideoRangeDurationTimeScale;
@property(nonatomic) long long bestVideoRangeDurationValue; // @dynamic bestVideoRangeDurationValue;
@property(nonatomic) int bestVideoRangeStartTimeScale; // @dynamic bestVideoRangeStartTimeScale;
@property(nonatomic) long long bestVideoRangeStartValue; // @dynamic bestVideoRangeStartValue;
@property(nonatomic) float blurrinessScore; // @dynamic blurrinessScore;
@property(nonatomic) float exposureScore; // @dynamic exposureScore;
@property(nonatomic) unsigned long long faceCount; // @dynamic faceCount;
@property(retain, nonatomic) NSDate *mediaAnalysisTimeStamp; // @dynamic mediaAnalysisTimeStamp;
@property(nonatomic) unsigned long long mediaAnalysisVersion; // @dynamic mediaAnalysisVersion;
@property(nonatomic) long long packedBestPlaybackRect; // @dynamic packedBestPlaybackRect;
@property(nonatomic) float videoScore; // @dynamic videoScore;

@end

