//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/_AMRowTemplateFactory.h>

@interface _AMiPhotoItemsRowTemplateFactory : _AMRowTemplateFactory
{
}

+ (id)validKeyPathsForPredicate;
+ (id)sharedInstance;
- (id)_filterIPhotoPhotoBatchItems:(id)arg1 withSpotlightPredicate:(id)arg2 error:(id *)arg3;
- (id)commonParentOfPaths:(id)arg1;
- (id)_spotlightIPhotoPhotoPredicateForPersistentPredicate:(id)arg1;
- (id)_filterIPhotoPhotoBatchItems:(id)arg1 withILMBPredicate:(id)arg2;
- (id)_iLMBiPhotoPhotoPredicateForPersistentPredicate:(id)arg1;
- (id)filterPhotos:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;
- (id)photosInBatch:(id)arg1 matchingPredicateDictionary:(id)arg2 error:(id *)arg3;
- (id)_prepareBatchFromPhotos:(id)arg1;
- (id)_segregateDomainsInPredicate:(id)arg1;
- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)arg1 withItemType:(id)arg2;
- (id)rowTemplatesForItemType:(id)arg1;
- (id)rowTemplatesForIPhotoPhotos;
- (id)stringRowTemplatesForAnyItemInCollectionWithName:(id)arg1 andKeyPath:(id)arg2;
- (id)pixelRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2;
- (id)apertureRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2;
- (id)shutterSpeedRowTemplatesWithName:(id)arg1 andKeyPath:(id)arg2;
- (id)rowTemplatesForIPhotoAlbums;

@end

