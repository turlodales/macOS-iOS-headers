//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSImageCell.h>

@class ILMediaBrowserMovieView, NSAttributedString, NSString, NSTimer, NSView;

@interface ILMediaBrowserImageCell : NSImageCell
{
    ILMediaBrowserMovieView *movieView;
    NSString *moviePath;
    NSString *imagePath;
    NSView *currentControlView;
    NSTimer *durationTimer;
    BOOL mReallyPlaying;
    struct CGRect _movieBounds;
    NSString *titleString;
    NSAttributedString *attribTitle;
    BOOL drawTitle;
    BOOL mIsClip;
    BOOL mIsProject;
    long long mDisplayDuration;
    long long mImageIndex;
}

- (id)_truncateString:(id)arg1 toWidth:(double)arg2;
- (id)imageBitmapRep:(BOOL)arg1;
- (void)normalizeImageSize;
- (void)_setControlView:(id)arg1;
- (struct CGRect)movieRectForBounds:(struct CGRect)arg1 size:(struct CGSize)arg2;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (id)displayedPhoto;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)isPlaying;
- (void)stop:(id)arg1;
- (void)play:(id)arg1;
- (BOOL)isProject;
- (void)setIsProject:(BOOL)arg1;
- (BOOL)isClip;
- (void)setIsClip:(BOOL)arg1;
- (BOOL)drawsTitle;
- (void)setDrawsTitle:(BOOL)arg1;
- (long long)imageIndex;
- (void)setImageIndex:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)moviePath;
- (void)setMoviePath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

