//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class MKImageView, NSLayoutConstraint, NSString, _MKUILabel;

@interface _MKPlaceDealView : MKPlaceSectionRowView
{
    MKImageView *_imageView;
    _MKUILabel *_textLabel;
    NSLayoutConstraint *_baselineToTop;
    NSLayoutConstraint *_baselineToBottom;
}

+ (id)_dealFont;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dealTitle;
- (void)_contentSizeDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

