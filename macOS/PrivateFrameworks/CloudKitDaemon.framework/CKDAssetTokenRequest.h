//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CKDAssetTokenRequest : NSObject
{
    unsigned int _size;
    unsigned int _sizeUpperBound;
    NSMutableArray *_assetBatches;
    NSMutableSet *_failedAssetBatches;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sizeUpperBound; // @synthesize sizeUpperBound=_sizeUpperBound;
@property(retain, nonatomic) NSMutableSet *failedAssetBatches; // @synthesize failedAssetBatches=_failedAssetBatches;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(retain, nonatomic) NSMutableArray *assetBatches; // @synthesize assetBatches=_assetBatches;
- (id)description;
- (id)CKPropertiesDescription;
- (BOOL)isEmpty;
- (id)successfulBatches;
- (BOOL)hasSuccessfulBatches;
- (void)addFailedBatch:(id)arg1;
- (void)addAssetBatch:(id)arg1;
- (id)init;

@end

