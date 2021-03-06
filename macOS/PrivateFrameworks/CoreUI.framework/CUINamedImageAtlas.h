//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@class NSArray, NSDictionary;

@interface CUINamedImageAtlas : CUINamedLookup
{
    NSDictionary *_images;
    NSArray *_renditions;
    struct __CFArray *_atlasImages;
}

@property(readonly, nonatomic) BOOL completeTextureExtrusion;
@property(readonly, nonatomic) NSArray *imageNames;
- (id)imageWithName:(id)arg1;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct __CFArray *images;
@property(readonly, nonatomic) struct CGImage *image;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6;
- (BOOL)_dimension1ExistsInKeyFormatForThemeRef:(unsigned long long)arg1;
- (id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2;
- (void)dealloc;

@end

