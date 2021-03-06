//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCuratedLibraryAnalysisStatus.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>

@class NSString;

@interface _PXCuratedLibraryConcreteAnalysisStatus : PXCuratedLibraryAnalysisStatus <PXAssetsDataSourceManagerObserver>
{
}

- (BOOL)hasBattery;
@property(readonly, nonatomic) BOOL isDeviceUnplugged;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_configureBatteryMonitoring;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (long long)_analyzingStateForDataSource:(id)arg1;
- (float)_enrichmentProgressForDataSource:(id)arg1;
- (void)_updateStatusProperties;
- (void)alternateTitleIndexDidChange;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

