//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHPhotoLibraryGenericSource.h>

#import "KHPhotoLibrarySource.h"

@class MLMediaSource, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface KHPhotoLibraryMLSource : KHPhotoLibraryGenericSource <KHPhotoLibrarySource>
{
    NSObject<OS_dispatch_queue> *_mediaSourceRootMediaGroupQueue;
    MLMediaSource *_mediaSource;
    NSMutableArray *_sections;
    NSMutableDictionary *_sectionsByKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *sectionsByKey; // @synthesize sectionsByKey=_sectionsByKey;
@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) MLMediaSource *mediaSource; // @synthesize mediaSource=_mediaSource;
- (void)executeHydration;
- (void)executeHydrationOnQueue;
- (id)sectionForIdentifier:(id)arg1;
- (id)photoWithURL:(id)arg1;
- (BOOL)canHandleURL:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long totalNumberOfImages;
@property(readonly, nonatomic) unsigned long long numberOfSections;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *title;
@property(readonly, copy) NSString *description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateSections;
- (id)_sectionForMediaGroup:(id)arg1;
- (void)dealloc;
- (id)initWithMediaSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL hydrating;
@property(readonly, nonatomic) id iconImage;
@property(readonly, nonatomic) BOOL needsHydration;
@property(readonly) Class superclass;

@end

