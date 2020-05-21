//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXPhotoLibraryUIChangeObserver.h"

@class NSString, PHAssetCollection;

@interface PXDisplayTitleInfo : PXObservable <PXPhotoLibraryUIChangeObserver>
{
    BOOL _useVerboseSmartDescription;
    NSString *_title;
    NSString *_subtitle;
    NSString *_fontName;
    PHAssetCollection *__assetCollection;
}

+ (id)displayTitleInfoForDetailsOfAssetCollection:(id)arg1 withTitleCategory:(long long)arg2 defaultTitle:(id)arg3 defaultTitleCategory:(long long)arg4 titleKey:(id)arg5 titleCategoryKey:(id)arg6 defaultSubtitle:(id)arg7 subtitleKey:(id)arg8 simulatedLoadingDelay:(double)arg9 preferredAttributesPromise:(CDUnknownBlockType)arg10;
- (void).cxx_destruct;
@property(nonatomic) BOOL useVerboseSmartDescription; // @synthesize useVerboseSmartDescription=_useVerboseSmartDescription;
@property(retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection; // @synthesize _assetCollection=__assetCollection;
@property(readonly, copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *description;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_updatePropertiesFromAssetCollection;
- (id)initWithAssetCollection:(id)arg1 useVerboseSmartDescription:(BOOL)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 fontName:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

