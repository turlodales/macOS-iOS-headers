//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MLBatchProviderUtils : NSObject
{
}

+ (id)featureDescriptionsByNameForBatch:(id)arg1 error:(id *)arg2;
+ (id)featureValueArrayForName:(id)arg1 batch:(id)arg2 error:(id *)arg3;
+ (id)dictionaryFromBatch:(id)arg1;
+ (id)dictionaryFromBatch:(id)arg1 featureNames:(id)arg2;
+ (id)featureProviderArrayFromBatch:(id)arg1;
+ (id)featureNamesInBatch:(id)arg1;
+ (id)batchWithSubsetOfFeaturesNamed:(id)arg1 fromBatch:(id)arg2;
+ (id)batchFromConcatinatingBatches:(id)arg1;
+ (id)lazyBatchWithFeaturesInBatch:(id)arg1 addedToBatch:(id)arg2 error:(id *)arg3;
+ (id)lazyBatchIndexIntoBatch:(id)arg1 indices:(id)arg2 error:(id *)arg3;
+ (id)lazyBatchWindowIntoBatch:(id)arg1 startIndex:(unsigned long long)arg2 windowLength:(unsigned long long)arg3 error:(id *)arg4;
+ (BOOL)vectorizeFeaturesNamed:(id)arg1 fromBatch:(id)arg2 intoRowsOfDoubleMatrix:(id)arg3 error:(id *)arg4;

@end

