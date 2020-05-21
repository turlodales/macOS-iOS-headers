//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSDictionary, PXPhotosDataSource;

@interface PXPhotosDataSourceStressTest : PXObservable
{
    BOOL _isPrepared;
    NSArray *_categories;
    NSDictionary *_assetsByCategory;
    unsigned long long _sampleLength;
    unsigned long long _sampleIndex;
    BOOL _running;
    unsigned long long _maximumAssetCount;
    double _updateInterval;
    PXPhotosDataSource *_dataSource;
    unsigned long long _dataSourceIndex;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setDataSourceIndex:) unsigned long long dataSourceIndex; // @synthesize dataSourceIndex=_dataSourceIndex;
@property(retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic) unsigned long long maximumAssetCount; // @synthesize maximumAssetCount=_maximumAssetCount;
- (id)mutableChangeObject;
- (void)_updateDataSource;
- (id)_categoryForAsset:(id)arg1;
- (void)_prepare;
- (id)init;

@end

