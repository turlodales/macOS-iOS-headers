//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>

#import "PXPhotoLibraryUIChangeObserver.h"

@class NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, PXCMMSharedAlbumsInvitationsDataSource, PXCMMSharedAlbumsInvitationsDataSourceState;

@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
    PXCMMSharedAlbumsInvitationsDataSourceState *__state;
    NSMutableOrderedSet *__remainingSharedAlbumObjectIDsToFetch;
}

+ (id)mockDataSourceManagerFromCMMDebugSharedAlbums;
- (void).cxx_destruct;
@property(retain) NSMutableOrderedSet *_remainingSharedAlbumObjectIDsToFetch; // @synthesize _remainingSharedAlbumObjectIDsToFetch=__remainingSharedAlbumObjectIDsToFetch;
@property(retain, nonatomic) PXCMMSharedAlbumsInvitationsDataSourceState *_state; // @synthesize _state=__state;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
- (void)startLoadingIfNeeded;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (id)createInitialDataSource;
- (id)sharedAlbums;
- (void)dealloc;
- (id)initWithAssetCollectionsFetchResult:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXCMMSharedAlbumsInvitationsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

