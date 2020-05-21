//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SRSampleExporting.h"
#import "SRSampling.h"

@class NSDateInterval, NSDictionary, NSMeasurement, NSMutableDictionary, NSString;

@interface SRKeyboardMetrics : NSObject <NSSecureCoding, SRSampleExporting, SRSampling>
{
    NSDateInterval *_interval;
    NSDictionary *_keyboardMetaInformation;
    NSMutableDictionary *_mutableScalarMetrics;
    NSMutableDictionary *_mutablePositionalMetrics;
    NSMutableDictionary *_mutableProbabilityMetrics;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(retain) NSMutableDictionary *mutableProbabilityMetrics; // @synthesize mutableProbabilityMetrics=_mutableProbabilityMetrics;
@property(retain) NSMutableDictionary *mutablePositionalMetrics; // @synthesize mutablePositionalMetrics=_mutablePositionalMetrics;
@property(retain) NSMutableDictionary *mutableScalarMetrics; // @synthesize mutableScalarMetrics=_mutableScalarMetrics;
@property(copy) NSDictionary *keyboardMetaInformation; // @synthesize keyboardMetaInformation=_keyboardMetaInformation;
@property(retain) NSDateInterval *interval; // @synthesize interval=_interval;
- (id)sr_dictionaryRepresentation;
- (id)deleteToDeletes;
- (id)longWordTouchDownDown;
- (id)longWordTouchDownUp;
- (id)longWordDownErrorDistance;
- (id)longWordUpErrorDistance;
- (id)pathToPath;
- (id)pathToSpace;
- (id)spaceToPath;
- (id)pathToDelete;
- (id)deleteToPath;
- (id)pathErrorDistanceRatio;
- (id)planeChangeKeyToCharKey;
- (id)charKeyToPlaneChangeKey;
- (id)planeChangeToAnyTap;
- (id)anyTapToPlaneChangeKey;
- (id)deleteToPlaneChangeKey;
- (id)deleteToShiftKey;
- (id)deleteToDelete;
- (id)charKeyToDelete;
- (id)deleteToCharKey;
- (id)spaceToPredictionKey;
- (id)spaceToPlaneChangeKey;
- (id)spaceToShiftKey;
- (id)spaceToSpaceKey;
- (id)deleteToSpaceKey;
- (id)spaceToDeleteKey;
- (id)charKeyToSpaceKey;
- (id)spaceToCharKey;
- (id)anyTapToCharKey;
- (id)charKeyToAnyTapKey;
- (id)shortWordCharKeyToCharKey;
- (id)charKeyToPrediction;
- (id)touchDownDown;
- (id)shortWordCharKeyTouchDownUp;
- (id)deleteTouchDownUp;
- (id)spaceTouchDownUp;
- (id)touchDownUp;
- (id)shortWordCharKeyDownErrorDistance;
- (id)shortWordCharKeyUpErrorDistance;
- (id)deleteDownErrorDistance;
- (id)deleteUpErrorDistance;
- (id)spaceDownErrorDistance;
- (id)spaceUpErrorDistance;
- (id)downErrorDistance;
- (id)upErrorDistance;
- (double)totalTypingDuration;
- (long long)totalHitTestCorrections;
- (long long)totalSubstitutionCorrections;
- (long long)totalNearKeyCorrections;
- (long long)totalSkipTouchCorrections;
- (long long)totalInsertKeyCorrections;
- (long long)totalTranspositionCorrections;
- (long long)totalRetroCorrections;
- (long long)totalSpaceCorrections;
- (long long)totalAutoCorrections;
- (id)totalPathLength;
- (double)totalPathTime;
- (long long)totalPaths;
- (long long)totalEmojis;
- (long long)totalDeletes;
- (long long)totalDrags;
- (long long)totalTaps;
- (long long)totalAlteredWords;
- (long long)totalWords;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)probabilityMetrics;
- (id)positionalMetrics;
- (id)scalarMetrics;
@property(readonly, copy) NSString *description;
@property(readonly) NSMeasurement *height;
@property(readonly) NSMeasurement *width;
@property(readonly, copy) NSString *version;
@property(readonly, copy) NSString *keyboardIdentifier;
@property(readonly) double duration;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithInterval:(id)arg1 metaInformation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

