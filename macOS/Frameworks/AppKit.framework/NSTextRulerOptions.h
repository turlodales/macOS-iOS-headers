//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumberFormatter, NSParagraphStyle, NSWindow;

__attribute__((visibility("hidden")))
@interface NSTextRulerOptions : NSObject
{
    id addFavoritePanel;
    id favoriteNameField;
    id includeFontOptionsButton;
    id includeFontButton;
    id confirmAddFavoriteButton;
    id replaceFavoritePanel;
    id removeFavoritePanel;
    id removeFavoritePopUp;
    id spacingPanel;
    id multipleField;
    id minField;
    id maxField;
    id lineSpacingField;
    id multipleStepper;
    id minStepper;
    id maxStepper;
    id lineSpacingStepper;
    id minMatrix;
    id maxButton;
    id spaceBeforeField;
    id spaceAfterField;
    id spaceBeforeStepper;
    id spaceAfterStepper;
    id listPanel;
    id beforeField;
    id numberingPopUp;
    id afterField;
    id startLabel;
    id startField;
    id startStepper;
    id prependButton;
    id linkPanel;
    id linkField;
    NSNumberFormatter *_numberFormatter;
    NSMutableDictionary *_favoriteRulers;
    NSMutableDictionary *_selectedAttributes;
    NSParagraphStyle *_prespacingParagraphStyle;
    NSWindow *_windowForSheets;
    NSWindow *_windowForSpacing;
    id _delegateForSpacing;
    NSWindow *_windowForMarkerFormat;
    id _delegateForMarkerFormat;
    NSWindow *_windowForLink;
    id _delegateForLink;
}

+ (id)sharedTextRulerOptions;
- (void).cxx_destruct;
- (id)displayStringForLineHeightMultiple:(double)arg1 min:(double)arg2 max:(double)arg3 lineSpacing:(double)arg4 paragraphSpacingBefore:(double)arg5 after:(double)arg6;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)removeLink:(id)arg1;
- (void)cancelSheet:(id)arg1;
- (void)confirmSheet:(id)arg1;
- (void)modifyOptionsViaPanel:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)setLinkInWindow:(id)arg1 string:(id)arg2 delegate:(id)arg3;
- (void)setMarkerFormatInWindow:(id)arg1 textList:(id)arg2 delegate:(id)arg3;
- (void)setStartFieldAndStepper;
- (void)setSpacing:(id)arg1 inWindow:(id)arg2 delegate:(id)arg3;
- (void)updateLineSpacingUI;
- (void)removeFavoriteInWindow:(id)arg1;
- (void)addFavorite:(id)arg1 inWindow:(id)arg2;
- (void)addFavorite;
- (void)updateFavoritesUI;
- (id)selectedAttributes;
- (id)favoriteAttributesForName:(id)arg1;
- (id)favoriteAttributesNames;
- (void)dealloc;
- (void)loadUI;
- (id)init;
- (void)updateFavoritesFromDefaults;
- (void)saveFavoritesToDefaults;

@end

