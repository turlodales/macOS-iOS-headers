//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGGraphDataModelEnrichmentProcessor.h"

@class NSArray, NSString;

@interface PGGraphAssetRevGeocodeEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
    NSArray *_homeLocations;
    double _sumNumberOfAssetClustersPerMoment;
    double _sumSquareNumberOfAssetClustersPerMoment;
    double _sumNumberOfAssetsPerCluster;
    double _sumSquareNumberOfAssetsPerCluster;
    double _numberOfAssetClustersWithin10mOfCenter;
    double _numberOfAssetClustersWithin20mOfCenter;
    double _numberOfAssetClustersWithin50mOfCenter;
    double _numberOfAssetClustersWithin100mOfCenter;
    double _numberOfAssetClusters100mPlusFromCenter;
    unsigned long long _numberOfMomentsRevGeocoded;
    unsigned long long _numberOfAssetClustersRevGeocoded;
}

+ (id)_homeLocationsWithManager:(id)arg1;
+ (id)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (BOOL)supportsBackgroundJob;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfAssetClustersRevGeocoded; // @synthesize numberOfAssetClustersRevGeocoded=_numberOfAssetClustersRevGeocoded;
@property(readonly, nonatomic) unsigned long long numberOfMomentsRevGeocoded; // @synthesize numberOfMomentsRevGeocoded=_numberOfMomentsRevGeocoded;
@property(readonly, nonatomic) double numberOfAssetClusters100mPlusFromCenter; // @synthesize numberOfAssetClusters100mPlusFromCenter=_numberOfAssetClusters100mPlusFromCenter;
@property(readonly, nonatomic) double numberOfAssetClustersWithin100mOfCenter; // @synthesize numberOfAssetClustersWithin100mOfCenter=_numberOfAssetClustersWithin100mOfCenter;
@property(readonly, nonatomic) double numberOfAssetClustersWithin50mOfCenter; // @synthesize numberOfAssetClustersWithin50mOfCenter=_numberOfAssetClustersWithin50mOfCenter;
@property(readonly, nonatomic) double numberOfAssetClustersWithin20mOfCenter; // @synthesize numberOfAssetClustersWithin20mOfCenter=_numberOfAssetClustersWithin20mOfCenter;
@property(readonly, nonatomic) double numberOfAssetClustersWithin10mOfCenter; // @synthesize numberOfAssetClustersWithin10mOfCenter=_numberOfAssetClustersWithin10mOfCenter;
@property(readonly, nonatomic) double sumSquareNumberOfAssetsPerCluster; // @synthesize sumSquareNumberOfAssetsPerCluster=_sumSquareNumberOfAssetsPerCluster;
@property(readonly, nonatomic) double sumNumberOfAssetsPerCluster; // @synthesize sumNumberOfAssetsPerCluster=_sumNumberOfAssetsPerCluster;
@property(readonly, nonatomic) double sumSquareNumberOfAssetClustersPerMoment; // @synthesize sumSquareNumberOfAssetClustersPerMoment=_sumSquareNumberOfAssetClustersPerMoment;
@property(readonly, nonatomic) double sumNumberOfAssetClustersPerMoment; // @synthesize sumNumberOfAssetClustersPerMoment=_sumNumberOfAssetClustersPerMoment;
@property(retain, nonatomic) NSArray *homeLocations; // @synthesize homeLocations=_homeLocations;
- (BOOL)_regionIsHome:(id)arg1;
- (BOOL)_setRevGeoLocationData:(id)arg1 onAssets:(id)arg2 withPhotoLibrary:(id)arg3;
- (id)_revGeoLocationDataForRegion:(id)arg1 manager:(id)arg2;
- (void)_updateGeoInfoForAssetClusters:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (BOOL)_populateCacheWithRegions:(id)arg1 manager:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;
- (void)_processMetricsOfAssetClustersInMoment:(id)arg1;
- (BOOL)_revGeocodeAssetClusters:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (BOOL)revGeocodeAssets:(id)arg1 manager:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_clusterAssetsInMoment:(id)arg1 assetsWithInvalidLocationInMoment:(id *)arg2 withPhotoLibrary:(id)arg3;
- (id)_momentsRequiringRevGeocodingWithIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2 defaultToAllAssets:(BOOL)arg3;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)invalidateReverseLocationDataForRevGeoProviderChangeUsingManager:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)setCurrentGeoProviderForPhotoLibrary:(id)arg1;
- (BOOL)revGeoProviderDidChangeForPhotoLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

