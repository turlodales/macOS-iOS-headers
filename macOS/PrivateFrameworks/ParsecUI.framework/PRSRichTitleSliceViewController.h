//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

@class PRSRichTitleCardSection;

@interface PRSRichTitleSliceViewController : PRSCardSectionSliceViewController
{
    BOOL _hasBottomRightAlignedPlayButton;
    BOOL _isItemPurchased;
}

@property BOOL isItemPurchased; // @synthesize isItemPurchased=_isItemPurchased;
@property(nonatomic) BOOL hasBottomRightAlignedPlayButton; // @synthesize hasBottomRightAlignedPlayButton=_hasBottomRightAlignedPlayButton;
- (id)richTitleSliceView;
- (void)syncAttributes;
- (void)startPlayingContent:(id)arg1;
- (BOOL)handleMouseUp:(id)arg1 alternatePunchout:(id)arg2;
- (double)height;
- (void)awakeFromNib;
@property(retain, nonatomic) PRSRichTitleCardSection *richTitleCardSection;
- (id)initWithCardSection:(id)arg1 nibName:(id)arg2;
- (id)initWithRichTitleCardSection:(id)arg1;

@end

