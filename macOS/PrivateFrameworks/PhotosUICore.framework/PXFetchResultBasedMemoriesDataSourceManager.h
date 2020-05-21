//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesDataSourceManager.h>

#import "PXPhotoLibraryUIChangeObserver.h"

@class NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, PHFetchResult, PXMemoriesDataSourceState;

@interface PXFetchResultBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isWorking;
    BOOL _hasCreatedInitialDataSource;
    BOOL _loadFromEnd;
    PXMemoriesDataSourceState *__state;
    NSMutableOrderedSet *__remainingMemoriesToFetch;
}

- (void).cxx_destruct;
@property(retain, setter=_setRemainingMemoriesToFetch:) NSMutableOrderedSet *_remainingMemoriesToFetch; // @synthesize _remainingMemoriesToFetch=__remainingMemoriesToFetch;
@property(retain, nonatomic, setter=_setState:) PXMemoriesDataSourceState *_state; // @synthesize _state=__state;
@property(nonatomic) BOOL loadFromEnd; // @synthesize loadFromEnd=_loadFromEnd;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)_createMemoriesDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(BOOL)arg1;
- (void)startLoadingIfNeeded;
- (id)createInitialDataSource;
@property(readonly, nonatomic) PHFetchResult *memories;
- (id)initWithMemoriesFetchResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

