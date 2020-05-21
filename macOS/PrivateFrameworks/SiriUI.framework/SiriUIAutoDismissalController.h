//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, NSTrackingArea, NSViewController;

@interface SiriUIAutoDismissalController : NSObject
{
    NSTimer *_timer;
    NSTrackingArea *_trackingArea;
    struct __CFMachPort *_tap;
    struct __CFRunLoopSource *_tapSource;
    BOOL _enabled;
    BOOL _isHovering;
    BOOL _isKeyWindow;
    NSViewController *_viewController;
    id <SiriUIAutoDismissalControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isKeyWindow) BOOL isKeyWindow; // @synthesize isKeyWindow=_isKeyWindow;
@property(nonatomic) __weak id <SiriUIAutoDismissalControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak NSViewController *viewController; // @synthesize viewController=_viewController;
- (void)keyWindowChanged:(id)arg1;
- (void)watchKeyWindow:(BOOL)arg1;
- (void)setKeyWindow:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)watchHovering:(BOOL)arg1;
@property(nonatomic, getter=isHovering) BOOL hovering; // @synthesize hovering=_isHovering;
- (void)cancelTimer;
- (void)startTimer;
- (void)pauseOrResume:(BOOL)arg1;
- (void)resume;
- (void)pause;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

@end

