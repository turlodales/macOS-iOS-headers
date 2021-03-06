//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSVisualEffectView;
@protocol SiriUIAcousticIDSpinnerDelegate;

@interface SiriUIAcousticIDSpinner : NSView
{
    NSImageView *_musicNoteView;
    NSImageView *_spinnerView;
    NSVisualEffectView *_vibrancyView;
    id <SiriUIAcousticIDSpinnerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SiriUIAcousticIDSpinnerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)animateOut;
- (void)animateIn;
- (BOOL)isShowing;
- (id)_imageForSpinner;
- (id)_spinningAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

