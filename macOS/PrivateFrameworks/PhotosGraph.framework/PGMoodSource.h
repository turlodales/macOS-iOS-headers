//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, PGManager, PGMoodGeneratorOptions, PGMoodVector, PHAssetCollection;

@interface PGMoodSource : NSObject
{
    PHAssetCollection *_assetCollection;
    PGManager *_graphManager;
    PGMoodGeneratorOptions *_options;
    PGMoodVector *_positiveVector;
    PGMoodVector *_negativeVector;
    NSDictionary *_moodSourceDictionary;
}

+ (id)_plistName;
- (void).cxx_destruct;
@property(readonly) PGMoodGeneratorOptions *options; // @synthesize options=_options;
@property(readonly) PGManager *graphManager; // @synthesize graphManager=_graphManager;
@property(readonly) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly) NSDictionary *moodSourceDictionary; // @synthesize moodSourceDictionary=_moodSourceDictionary;
- (unsigned long long)_sourceInputCount;
- (void)_combineMoodVectors;
- (id)_moodVectors;
- (id)_moodVectorForMoodIdentifier:(id)arg1;
- (id)_plistMoodIdentifiers;
@property(retain) PGMoodVector *negativeVector; // @synthesize negativeVector=_negativeVector;
@property(retain) PGMoodVector *positiveVector; // @synthesize positiveVector=_positiveVector;
- (double)weight;
- (id)initWithAssetCollection:(id)arg1 graphManager:(id)arg2 options:(id)arg3;

@end

