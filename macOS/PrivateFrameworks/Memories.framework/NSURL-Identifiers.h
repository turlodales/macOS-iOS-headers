//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (Identifiers)
+ (id)generateRecordedKenBurnsIdentifierURL;
+ (id)generateImportedKenBurnsIdentifierURL;
+ (id)localIdentifierURLForAsset:(id)arg1;
+ (id)photosIdentifierURLWithQuery:(id)arg1;
+ (id)localIdentifierURLForAssetRepresentation:(id)arg1;
+ (id)pluginEditedAssetURL;
+ (id)perThreadPhotosQueryDateFormatter;
- (id)kenBurnsIdentifier;
- (BOOL)isRecorded;
- (BOOL)isImported;
- (BOOL)isKenBurnsIdentifierURL;
- (BOOL)isKenBurnsFileURL;
- (id)shortQuery;
- (id)valueForQueryKey:(id)arg1;
- (long long)mediaType;
- (id)modificationDate;
- (id)modificationDateString;
- (BOOL)isAdjustedVersion;
- (id)localIdentifier;
- (BOOL)isPhotosIdentifierURL;
- (id)localIdentifierURLWithModificationDate:(id)arg1;
- (id)localIdentifierURLByRemovingModificationDate;
- (BOOL)isPluginEditedAssetURL;
- (BOOL)isSharedMediaURL;
- (BOOL)isSFXorThemeMusicURL;
- (BOOL)isMediaPlayerPersistentURL;
- (BOOL)isAssetsLibraryPersistentURL;
- (BOOL)isPhotoKitCompatibleIdentifierURL;
- (id)standardizedQuery;
@end

