//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHProjectGridViewCell.h>

@class UXImageView;

@interface KHBookProjectGridViewCell : KHProjectGridViewCell
{
    UXImageView *_gutterImageView;
    UXImageView *_overlayImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UXImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(retain, nonatomic) UXImageView *gutterImageView; // @synthesize gutterImageView=_gutterImageView;
- (void)setLayoutObject:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

