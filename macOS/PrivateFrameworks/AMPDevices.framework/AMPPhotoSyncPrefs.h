//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSDictionary, NSSet, NSURL;

@interface AMPPhotoSyncPrefs : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _syncPhotos;
    BOOL _copyOriginalPhotos;
    BOOL _autoIncludePhotosEnabled;
    BOOL _onlyFavoritePhotos;
    BOOL _photoSyncAllAlbums;
    BOOL _photoSyncAllFaces;
    BOOL _photoSyncPhotoVideos;
    BOOL _photosAppCopyOriginalPhotos;
    BOOL _photosAppSyncPhotoVideos;
    BOOL _photosAppSyncAllAlbums;
    BOOL _photosAppSyncAllFaces;
    BOOL _photosAppAutoIncludeEnabled;
    BOOL _photosAppOnlyFavorites;
    BOOL _photosFolderCopyOriginalPhotos;
    BOOL _photosFolderSyncPhotoVideos;
    int _photoSyncSource;
    int _photoSyncMode;
    int _photoEventCount;
    int _photosAppSyncMode;
    int _photosAppEventCount;
    int _photosAppCustomAlbumOrder;
    int _photosFolderSyncMode;
    int _photosFolderCustomAlbumOrder;
    NSArray *_photosAppAlbums;
    NSSet *_photosAppSelectedAlbums;
    NSURL *_photosFolderURL;
    NSData *_photosFolderBookmark;
    NSArray *_photosFolderNames;
    NSSet *_photosFolderSelectedNames;
    NSDictionary *_photoSharingSettings;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *photoSharingSettings; // @synthesize photoSharingSettings=_photoSharingSettings;
@property(retain, nonatomic) NSSet *photosFolderSelectedNames; // @synthesize photosFolderSelectedNames=_photosFolderSelectedNames;
@property(retain, nonatomic) NSArray *photosFolderNames; // @synthesize photosFolderNames=_photosFolderNames;
@property(retain, nonatomic) NSData *photosFolderBookmark; // @synthesize photosFolderBookmark=_photosFolderBookmark;
@property(retain, nonatomic) NSURL *photosFolderURL; // @synthesize photosFolderURL=_photosFolderURL;
@property(nonatomic) int photosFolderCustomAlbumOrder; // @synthesize photosFolderCustomAlbumOrder=_photosFolderCustomAlbumOrder;
@property(nonatomic) BOOL photosFolderSyncPhotoVideos; // @synthesize photosFolderSyncPhotoVideos=_photosFolderSyncPhotoVideos;
@property(nonatomic) BOOL photosFolderCopyOriginalPhotos; // @synthesize photosFolderCopyOriginalPhotos=_photosFolderCopyOriginalPhotos;
@property(nonatomic) int photosFolderSyncMode; // @synthesize photosFolderSyncMode=_photosFolderSyncMode;
@property(retain, nonatomic) NSSet *photosAppSelectedAlbums; // @synthesize photosAppSelectedAlbums=_photosAppSelectedAlbums;
@property(retain, nonatomic) NSArray *photosAppAlbums; // @synthesize photosAppAlbums=_photosAppAlbums;
@property(nonatomic) int photosAppCustomAlbumOrder; // @synthesize photosAppCustomAlbumOrder=_photosAppCustomAlbumOrder;
@property(nonatomic) BOOL photosAppOnlyFavorites; // @synthesize photosAppOnlyFavorites=_photosAppOnlyFavorites;
@property(nonatomic) BOOL photosAppAutoIncludeEnabled; // @synthesize photosAppAutoIncludeEnabled=_photosAppAutoIncludeEnabled;
@property(nonatomic) BOOL photosAppSyncAllFaces; // @synthesize photosAppSyncAllFaces=_photosAppSyncAllFaces;
@property(nonatomic) BOOL photosAppSyncAllAlbums; // @synthesize photosAppSyncAllAlbums=_photosAppSyncAllAlbums;
@property(nonatomic) BOOL photosAppSyncPhotoVideos; // @synthesize photosAppSyncPhotoVideos=_photosAppSyncPhotoVideos;
@property(nonatomic) BOOL photosAppCopyOriginalPhotos; // @synthesize photosAppCopyOriginalPhotos=_photosAppCopyOriginalPhotos;
@property(nonatomic) int photosAppEventCount; // @synthesize photosAppEventCount=_photosAppEventCount;
@property(nonatomic) int photosAppSyncMode; // @synthesize photosAppSyncMode=_photosAppSyncMode;
@property(nonatomic) BOOL photoSyncPhotoVideos; // @synthesize photoSyncPhotoVideos=_photoSyncPhotoVideos;
@property(nonatomic) BOOL photoSyncAllFaces; // @synthesize photoSyncAllFaces=_photoSyncAllFaces;
@property(nonatomic) BOOL photoSyncAllAlbums; // @synthesize photoSyncAllAlbums=_photoSyncAllAlbums;
@property(nonatomic) BOOL onlyFavoritePhotos; // @synthesize onlyFavoritePhotos=_onlyFavoritePhotos;
@property(nonatomic) BOOL autoIncludePhotosEnabled; // @synthesize autoIncludePhotosEnabled=_autoIncludePhotosEnabled;
@property(nonatomic) int photoEventCount; // @synthesize photoEventCount=_photoEventCount;
@property(nonatomic) BOOL copyOriginalPhotos; // @synthesize copyOriginalPhotos=_copyOriginalPhotos;
@property(nonatomic) int photoSyncMode; // @synthesize photoSyncMode=_photoSyncMode;
@property(nonatomic) int photoSyncSource; // @synthesize photoSyncSource=_photoSyncSource;
@property(nonatomic) BOOL syncPhotos; // @synthesize syncPhotos=_syncPhotos;
- (id)initWithPhotoSharingSettings:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;

@end

