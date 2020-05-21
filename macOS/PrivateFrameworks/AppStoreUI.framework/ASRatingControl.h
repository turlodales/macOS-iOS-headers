//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSNumber, NSTrackingArea;

@interface ASRatingControl : NSView
{
    BOOL _isMouseDown;
    NSNumber *_rating;
    CDUnknownBlockType _didChangeCallback;
    NSNumber *_prospectiveRating;
    NSTrackingArea *_trackingArea;
    NSArray *_cachedAccessibilityChildren;
}

+ (long long)starCount;
+ (id)starFilledPressed;
+ (id)starFilled;
+ (id)starActivePressed;
+ (id)starActive;
+ (id)starHollowPressed;
+ (id)starHollow;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *cachedAccessibilityChildren; // @synthesize cachedAccessibilityChildren=_cachedAccessibilityChildren;
@property(nonatomic) BOOL isMouseDown; // @synthesize isMouseDown=_isMouseDown;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSNumber *prospectiveRating; // @synthesize prospectiveRating=_prospectiveRating;
@property(copy, nonatomic) CDUnknownBlockType didChangeCallback; // @synthesize didChangeCallback=_didChangeCallback;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
- (id)accessibilityChildren;
- (id)makeAccessibilityChildForStarAtIndex:(long long)arg1;
- (id)inputRatingAtPoint:(struct CGPoint)arg1;
- (struct CGRect)starFrameAtIndex:(long long)arg1;
- (struct CGSize)fittingSize;
- (void)mouseExited:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)sendRatingChange;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (id)initWithRating:(id)arg1;

@end

