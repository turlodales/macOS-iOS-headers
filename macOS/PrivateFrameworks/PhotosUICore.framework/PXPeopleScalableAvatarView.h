//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSmartScaleView.h>

@class UXImageView;

@interface PXPeopleScalableAvatarView : PXSmartScaleView
{
    BOOL _useCornerRadius;
    UXImageView *_imageView;
    id <PXPerson> _person;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL useCornerRadius; // @synthesize useCornerRadius=_useCornerRadius;
@property(retain, nonatomic) id <PXPerson> person; // @synthesize person=_person;
@property(retain) UXImageView *imageView; // @synthesize imageView=_imageView;
- (void)_updateImageAndWait:(BOOL)arg1;
- (void)updateImage;
- (void)viewScaleDidChange;
- (void)setPersonAndWaitForImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

