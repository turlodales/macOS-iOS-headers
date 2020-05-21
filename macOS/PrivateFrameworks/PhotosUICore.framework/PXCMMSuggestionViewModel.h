//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSColor, NSImage, NSString;

@interface PXCMMSuggestionViewModel : PXObservable
{
    BOOL _containsUnverifiedPersons;
    BOOL _highlighted;
    BOOL _selected;
    NSString *_posterTitle;
    NSString *_posterSubtitle;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    NSArray *_localizedNames;
    NSString *_subtitle;
    NSImage *_combinedFaceTileImage;
    NSColor *_opaqueAncestorBackgroundColor;
}

+ (double)faceTileImageDiameter;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) NSColor *opaqueAncestorBackgroundColor; // @synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor;
@property(readonly, nonatomic) NSImage *combinedFaceTileImage; // @synthesize combinedFaceTileImage=_combinedFaceTileImage;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) BOOL containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, copy, nonatomic) NSString *posterSubtitle; // @synthesize posterSubtitle=_posterSubtitle;
@property(readonly, copy, nonatomic) NSString *posterTitle; // @synthesize posterTitle=_posterTitle;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;
- (void)setCombinedFaceTileImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setContainsUnverifiedPersons:(BOOL)arg1;
- (void)setLocalizedNames:(id)arg1;
- (void)setPosterMediaProvider:(id)arg1;
- (void)setPosterAsset:(id)arg1;
- (void)setPosterSubtitle:(id)arg1;
- (void)setPosterTitle:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

@end

