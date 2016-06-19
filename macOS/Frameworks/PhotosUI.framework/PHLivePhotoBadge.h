//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSVisualEffectView;

@interface PHLivePhotoBadge : NSView
{
    struct CGSize _size;
    NSVisualEffectView *_backgroundView;
    long long _trackingRectTag;
    id <PHLivePhotoBadgeDelegate> _delegate;
}

+ (id)_livePhotoOverlayBadgeLabelTextAttributesOfSize:(double)arg1;
@property(nonatomic) __weak id <PHLivePhotoBadgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_setHasTrackingArea:(BOOL)arg1;
- (void)_setupSubviews;
- (void)_commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

