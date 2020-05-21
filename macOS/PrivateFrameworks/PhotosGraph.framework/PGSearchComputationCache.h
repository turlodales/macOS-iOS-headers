//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL, PHPhotoLibrary;

@interface PGSearchComputationCache : NSObject
{
    NSURL *_persistentStoreURL;
    NSMutableDictionary *_momentAssetPairsByNodeUUID;
    NSMutableDictionary *_curationInformationByNodeUUID;
    NSMutableDictionary *_locationInformationByNodeUUID;
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSMutableDictionary *locationInformationByNodeUUID; // @synthesize locationInformationByNodeUUID=_locationInformationByNodeUUID;
@property(readonly, nonatomic) NSMutableDictionary *curationInformationByNodeUUID; // @synthesize curationInformationByNodeUUID=_curationInformationByNodeUUID;
@property(readonly, nonatomic) NSMutableDictionary *momentAssetPairsByNodeUUID; // @synthesize momentAssetPairsByNodeUUID=_momentAssetPairsByNodeUUID;
@property(readonly, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
- (id)locationInformationForLocationNode:(id)arg1 locationMask:(unsigned long long)arg2;
- (void)setLocationInformation:(id)arg1 forLocationNode:(id)arg2 locationMask:(unsigned long long)arg3;
- (id)curationInformationForNode:(id)arg1;
- (void)setCurationInformation:(id)arg1 forNode:(id)arg2;
- (BOOL)momentAssetPairs:(id)arg1 areValidWithAssociatedMomentUUIDs:(id)arg2;
- (id)keyAssetLocalIdentifierForNodeIdentifier:(id)arg1 withAssociatedMomentUUIDs:(id)arg2;
- (void)setKeyAssetLocalIdentifier:(id)arg1 forNodeIdentifier:(id)arg2 withAssociatedMomentUUID:(id)arg3;
- (void)invalidateCache;
- (void)save;
- (id)initWithManager:(id)arg1;

@end

