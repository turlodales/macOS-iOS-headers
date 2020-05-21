//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTextField, NSView<ReadingListItemViewThumbnailImageView>, ReadingListItem;

__attribute__((visibility("hidden")))
@interface ReadingListItemView : NSView
{
    ReadingListItem *_readingListItemGettingFallbackIcon;
    NSTextField *_titleTextField;
    NSTextField *_previewTextField;
    NSTextField *_domainTextField;
    NSView<ReadingListItemViewThumbnailImageView> *_thumbnailView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSView<ReadingListItemViewThumbnailImageView> *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, nonatomic) NSTextField *domainTextField; // @synthesize domainTextField=_domainTextField;
@property(readonly, nonatomic) NSTextField *previewTextField; // @synthesize previewTextField=_previewTextField;
@property(readonly, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void)_cancelFallbackIconRequestForReadingListItem:(id)arg1;
- (id)_createLabelTextField;
- (void)getThumbnailImageForReadingListItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 thumbnailView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

