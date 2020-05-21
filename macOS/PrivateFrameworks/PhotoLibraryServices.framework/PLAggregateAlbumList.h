//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAlbumContainer.h"
#import "PLAssetContainerListChangeObserver.h"

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>
{
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

+ (id)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int filter; // @synthesize filter=_filter;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (BOOL)albumHasFixedOrder:(id)arg1;
@property(readonly, nonatomic) BOOL isFolder;
- (BOOL)canEditAlbums;
- (short)albumListType;
- (id)managedObjectContext;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
- (BOOL)hasAtLeastOneAlbum;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (id)albums;
- (id)identifier;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_invalidateAllAlbums;
- (void)dealloc;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

