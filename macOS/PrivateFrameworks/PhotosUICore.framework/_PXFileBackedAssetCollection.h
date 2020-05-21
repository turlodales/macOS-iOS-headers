//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXBaseDisplayCollection.h>

#import "PXDisplayAssetCollection.h"

@class NSArray, NSDate, NSString;

@interface _PXFileBackedAssetCollection : PXBaseDisplayCollection <PXDisplayAssetCollection>
{
}

@property(readonly, nonatomic) unsigned long long estimatedAssetCount;
@property(readonly, nonatomic) BOOL isRecent;
@property(readonly, nonatomic) BOOL isAggregation;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *localizedSmartDescription;
- (id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *localizedDateDescription;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedDebugDescription;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic) long long px_highlightKind;
@property(readonly, nonatomic) unsigned short px_highlightEnrichmentState;
@property(readonly, nonatomic) BOOL isEnrichmentComplete;
@property(readonly, nonatomic) BOOL isEnriched;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL px_canRearrangeContent;
@property(readonly, nonatomic) BOOL px_isAllPhotosSmartAlbum;
@property(readonly, nonatomic) BOOL px_isCloudMultipleContributorsEnabled;
@property(readonly, nonatomic) BOOL px_isFavoriteMemoriesSmartFolder;
@property(readonly, nonatomic) BOOL px_isFavoritesSmartAlbum;
@property(readonly, nonatomic) BOOL px_isFolder;
@property(readonly, nonatomic) BOOL px_isHiddenSmartAlbum;
@property(readonly, nonatomic) BOOL px_isImportHistoryCollection;
@property(readonly, nonatomic) BOOL px_isImportSessionCollection;
@property(readonly, nonatomic) BOOL px_isImportedAlbum;
@property(readonly, nonatomic) BOOL px_isMacSyncedAlbum;
@property(readonly, nonatomic) BOOL px_isMacSyncedEventsFolder;
@property(readonly, nonatomic) BOOL px_isMacSyncedFacesFolder;
@property(readonly, nonatomic) BOOL px_isMediaTypeSmartAlbum;
@property(readonly, nonatomic) BOOL px_isMediaTypesFolder;
@property(readonly, nonatomic) BOOL px_isMemoriesVirtualCollection;
@property(readonly, nonatomic) BOOL px_isMomentsVirtualCollection;
@property(readonly, nonatomic) BOOL px_isMyPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL px_isOwnedSharedAlbum;
@property(readonly, nonatomic) BOOL px_isPeopleVirtualCollection;
@property(readonly, nonatomic) BOOL px_isPhotosVirtualCollection;
@property(readonly, nonatomic) BOOL px_isPlacesSmartAlbum;
@property(readonly, nonatomic) BOOL px_isProject;
@property(readonly, nonatomic) BOOL px_isProjectsFolder;
@property(readonly, nonatomic) BOOL px_isRecentlyAddedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentlyDeletedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentlyEditedSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRecentsSmartAlbum;
@property(readonly, nonatomic) BOOL px_isRegularAlbum;
@property(readonly, nonatomic) BOOL px_isRegularFolder;
@property(readonly, nonatomic) BOOL px_isRootSmartAlbum;
@property(readonly, nonatomic) BOOL px_isScreenRecordingsSmartAlbum;
@property(readonly, nonatomic) BOOL px_isSharedActivityVirtualCollection;
@property(readonly, nonatomic) BOOL px_isSharedAlbum;
@property(readonly, nonatomic) BOOL px_isSharedAlbumsFolder;
@property(readonly, nonatomic) BOOL px_isSmartAlbum;
@property(readonly, nonatomic) BOOL px_isSmartFolder;
@property(readonly, nonatomic) BOOL px_isStandInAlbum;
@property(readonly, nonatomic) BOOL px_isTopLevelFolder;
@property(readonly, nonatomic) BOOL px_isTransientPlacesCollection;
@property(readonly, nonatomic) BOOL px_isUserCreated;
@property(readonly, nonatomic) BOOL px_isUserSmartAlbum;
@property(readonly) Class superclass;

@end

