//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionRowModel.h>

@class NSArray, NSString, SFActionItem, SFButton, SFFormattedText, SFImage, SFRichText, SFText;

@interface SearchUIDetailedRowModel : SearchUICardSectionRowModel
{
    BOOL _preventThumbnailImageScaling;
    BOOL _isLocalApplicationResult;
    BOOL _secondaryTitleIsDetached;
    SFImage *_leadingImage;
    SFImage *_fallbackImage;
    SFButton *_leadingButton;
    NSString *_applicationBundleIdentifier;
    SFRichText *_title;
    SFText *_secondaryTitle;
    SFImage *_secondaryTitleImage;
    NSArray *_details;
    SFRichText *_footnote;
    NSString *_footnoteButtonText;
    SFActionItem *_action;
    SFFormattedText *_trailingTopText;
    SFFormattedText *_trailingMiddleText;
    SFFormattedText *_trailingBottomText;
    NSArray *_contactIdentifiersNeeded;
}

+ (BOOL)urlIsDraggable:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *contactIdentifiersNeeded; // @synthesize contactIdentifiersNeeded=_contactIdentifiersNeeded;
@property(retain) SFFormattedText *trailingBottomText; // @synthesize trailingBottomText=_trailingBottomText;
@property(retain) SFFormattedText *trailingMiddleText; // @synthesize trailingMiddleText=_trailingMiddleText;
@property(retain) SFFormattedText *trailingTopText; // @synthesize trailingTopText=_trailingTopText;
@property(retain) SFActionItem *action; // @synthesize action=_action;
@property(retain) NSString *footnoteButtonText; // @synthesize footnoteButtonText=_footnoteButtonText;
@property(retain) SFRichText *footnote; // @synthesize footnote=_footnote;
@property(retain) NSArray *details; // @synthesize details=_details;
@property(retain) SFImage *secondaryTitleImage; // @synthesize secondaryTitleImage=_secondaryTitleImage;
@property BOOL secondaryTitleIsDetached; // @synthesize secondaryTitleIsDetached=_secondaryTitleIsDetached;
@property(retain) SFText *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain) SFRichText *title; // @synthesize title=_title;
@property BOOL isLocalApplicationResult; // @synthesize isLocalApplicationResult=_isLocalApplicationResult;
@property(retain) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property BOOL preventThumbnailImageScaling; // @synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling;
@property(retain) SFButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(retain) SFImage *fallbackImage; // @synthesize fallbackImage=_fallbackImage;
@property(retain) SFImage *leadingImage; // @synthesize leadingImage=_leadingImage;
- (Class)customCardSectionViewClass;
- (int)separatorStyle;
- (id)punchouts;
- (BOOL)isTappable;
- (id)dragURL;
- (id)dragText;
- (id)descriptionText;
- (id)dragSubtitle;
- (id)dragTitle;
- (id)dragAppBundleID;
- (BOOL)isContact;
- (id)contactIdentifiers;
- (void)fillOutPropertiesForCardSection:(id)arg1;
- (id)richTextFromText:(id)arg1;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(BOOL)arg3 queryId:(unsigned long long)arg4;

@end

