//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import "NUIContainerViewDelegate.h"

@class NSString, NUIContainerGridView, TLKImage, TLKImageView, TLKLabel, TLKRichText;

@interface TLKSimpleRowView : TLKView <NUIContainerViewDelegate>
{
    TLKImage *_leadingImage;
    TLKRichText *_leadingTitle;
    TLKRichText *_leadingSubtitle;
    TLKImage *_trailingImage;
    TLKRichText *_trailingTitle;
    TLKRichText *_trailingSubtitle;
    TLKImageView *_leadingImageView;
    TLKLabel *_leadingTitleLabel;
    TLKLabel *_leadingSubtitleLabel;
    TLKLabel *_trailingTitleLabel;
    TLKLabel *_trailingSubtitleLabel;
    TLKImageView *_trailingImageView;
}

+ (void)applyText:(id)arg1 toLabel:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TLKImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(retain, nonatomic) TLKLabel *trailingSubtitleLabel; // @synthesize trailingSubtitleLabel=_trailingSubtitleLabel;
@property(retain, nonatomic) TLKLabel *trailingTitleLabel; // @synthesize trailingTitleLabel=_trailingTitleLabel;
@property(retain, nonatomic) TLKLabel *leadingSubtitleLabel; // @synthesize leadingSubtitleLabel=_leadingSubtitleLabel;
@property(retain, nonatomic) TLKLabel *leadingTitleLabel; // @synthesize leadingTitleLabel=_leadingTitleLabel;
@property(retain, nonatomic) TLKImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(retain, nonatomic) TLKRichText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property(retain, nonatomic) TLKRichText *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property(retain, nonatomic) TLKImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property(retain, nonatomic) TLKRichText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property(retain, nonatomic) TLKRichText *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property(retain, nonatomic) TLKImage *leadingImage; // @synthesize leadingImage=_leadingImage;
- (id)bottomRowViews;
- (id)topRowViews;
- (double)widthOfColumnAtIndex:(unsigned long long)arg1;
- (id)fontForTextInLabel:(id)arg1;
- (id)trailingSubtitleLabelFont;
- (id)trailingTitleLabelFont;
- (id)leadingTitleLabelFont;
- (id)trailingSubtitleLabelString;
- (id)trailingTitleLabelString;
- (id)leadingSubtitleLabelString;
- (id)leadingTitleLabelString;
- (id)stringForLabel:(id)arg1;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (BOOL)hasSubtitles;
- (void)observedPropertiesChanged;
- (id)gridOfAllViews;
- (BOOL)usesDefaultInsets;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) NUIContainerGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

