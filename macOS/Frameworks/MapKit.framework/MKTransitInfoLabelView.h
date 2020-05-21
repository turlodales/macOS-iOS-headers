//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKUILabel.h>

@class MKArtworkDataSourceCache, NSArray;

@interface MKTransitInfoLabelView : _MKUILabel
{
    long long _iconSize;
    double _maxWidth;
    double _spaceBetweenIcons;
    CDUnknownBlockType _textForTruncationGenerator;
    long long _shieldSize;
    NSArray *_labelItems;
    double _spaceBetweenShields;
    MKArtworkDataSourceCache *_artworkCache;
}

+ (id)stringAttributesForFont:(id)arg1 lineBreakMode:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(nonatomic) double spaceBetweenShields; // @synthesize spaceBetweenShields=_spaceBetweenShields;
@property(copy, nonatomic) NSArray *labelItems; // @synthesize labelItems=_labelItems;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
- (id)_imageForShieldDataSource:(id)arg1;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_stringAttributes;
- (void)setSpaceBetweenIcons:(double)arg1;
- (void)setIconSize:(long long)arg1;
- (id)_generateText;
- (struct CGSize)intrinsicContentSize;
- (void)_setupLabelInfo;
- (void)setMaxWidth:(double)arg1 textForTruncationGenerator:(CDUnknownBlockType)arg2;
- (void)setMapItem:(id)arg1;
- (void)dealloc;
- (id)initWithLabelItems:(id)arg1 iconSize:(long long)arg2 shieldSize:(long long)arg3 spaceBetweenShields:(double)arg4 maxWidth:(double)arg5;
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;
- (id)initWithMapItem:(id)arg1;
- (id)init;

@end

