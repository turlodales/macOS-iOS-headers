//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoPrintProduct/KHPhotoLibraryProtocol-Protocol.h>

@class NSArray, NSCache, NSMutableArray, NSMutableDictionary;

@interface KHPhotoLibrary : NSObject <KHPhotoLibraryProtocol>
{
    NSMutableDictionary *_photoGroupCache;
    NSMutableArray *_photoGroupCollections;
    NSMutableArray *_sourcesArray;
    NSMutableDictionary *_mediaSources;
    unsigned long long _numberOfPhotos;
    NSCache *_photoCache;
}

+ (id)defaultLibrary;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSCache *photoCache; // @synthesize photoCache=_photoCache;
- (id)pageLayoutPhotoGroupWithUID:(id)arg1;
- (id)pageLayoutPhotoGroupCollectionAtIndex:(long long)arg1;
- (long long)pageLayoutNumberOfPhotoGroupCollections;
- (id)pageLayoutPhotosWithPhotoIDs:(id)arg1;
- (id)pageLayoutPhotoWithPhotoID:(id)arg1;
- (void)beginHydrationForSource:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)untrackSource:(id)arg1;
- (void)trackSource:(id)arg1;
- (void)dumpCache;
- (void)cachePhoto:(id)arg1;
@property(readonly, nonatomic) NSArray *allPhotos;
@property(readonly, nonatomic) NSArray *sortedSources;
- (id)_handlerForURL:(id)arg1;
- (void)dumpPhotoCache;
- (id)photoWithURL:(id)arg1;
- (void)_updateGroups;
- (unsigned long long)_generateNumberOfPhotos;
- (void)_dumpCache:(id)arg1;
- (unsigned long long)numberOfSources;
- (unsigned long long)numberOfPhotos;
- (void)pageLayoutRequestAccessWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)pageLayoutAuthorizationStatus;
- (void)dealloc;
- (id)init;

@end

