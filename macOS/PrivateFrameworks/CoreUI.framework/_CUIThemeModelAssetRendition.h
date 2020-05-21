//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class MDLAsset, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CUIThemeModelAssetRendition : CUIThemeRendition
{
    MDLAsset *_asset;
    NSMutableArray *_meshKeys;
}

- (unsigned long long)writeToData:(id)arg1;
@property(readonly) NSArray *meshKeys;
- (id)modelAsset;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (void)dealloc;
- (id)initForArchiving:(id)arg1 withMeshRenditionKeys:(id)arg2;

@end

