//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface DelayedPopUpButtonCell : NSButtonCell
{
    NSTimer *_menuTimer;
    BOOL _didPopUpMenu;
    id <DelayedPopUpButtonCellDelegate> _delayedPopUpButtonCellDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DelayedPopUpButtonCellDelegate> delayedPopUpButtonCellDelegate; // @synthesize delayedPopUpButtonCellDelegate=_delayedPopUpButtonCellDelegate;
- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)_displayDelayedMenu;
- (void)displayOffsetContextualMenu;
- (void)_invalidateMenuTimer;
- (double)_menuDelayTime;

@end

