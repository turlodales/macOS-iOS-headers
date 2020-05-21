//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLKImageView.h"

@class NSView, SFImage, SearchUIButton;

@interface SearchUIImageView : TLKImageView
{
    SFImage *_currentImage;
    SearchUIButton *_overlayPlayButton;
    NSView *_tintView;
}

+ (id)thumbnailForResult:(id)arg1;
+ (id)imageViewWithImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSView *tintView; // @synthesize tintView=_tintView;
@property(retain, nonatomic) SearchUIButton *overlayPlayButton; // @synthesize overlayPlayButton=_overlayPlayButton;
@property(retain, nonatomic) SFImage *currentImage; // @synthesize currentImage=_currentImage;
- (void)resetCursorRects;
- (BOOL)clickable;
- (void)layout;
- (void)updateWithImage:(id)arg1 needsOverlayButton:(BOOL)arg2 preventImageScaling:(BOOL)arg3 useMinimumWidthIfPossible:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)updateWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateWithImage:(id)arg1;
- (void)appIconDidChange:(id)arg1;
- (id)init;

@end

