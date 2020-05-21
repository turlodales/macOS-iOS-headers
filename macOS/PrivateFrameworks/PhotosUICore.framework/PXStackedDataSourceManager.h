//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import "PXDataSectionManagerChangeObserver.h"

@class NSArray, NSString;

@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <PXDataSectionManagerChangeObserver>
{
    BOOL _initialDataSourceCreated;
    NSArray *_dataSectionManagers;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL initialDataSourceCreated; // @synthesize initialDataSourceCreated=_initialDataSourceCreated;
@property(copy, nonatomic) NSArray *dataSectionManagers; // @synthesize dataSectionManagers=_dataSectionManagers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)createInitialDataSource;
- (void)_updateDataSourceWithSectionChanges:(id)arg1 itemChanges:(id)arg2;
- (id)_newDataSource;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (id)initWithDataSectionManagers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

