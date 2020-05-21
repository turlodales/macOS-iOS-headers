//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebFrameLoadDelegate.h"

@class IMKCandidateController, IMKCandidateUnitView, NSPopover, NSString, NSTimer, NSURL, WebView;

@interface IMKCandidatePopoverController : NSObject <WebFrameLoadDelegate>
{
    IMKCandidateController *_controller;
    NSPopover *_popover;
    WebView *_webView;
    IMKCandidateUnitView *_descriptionTargetView;
    struct CGSize _minimumSize;
    NSURL *_stylesheetURL;
    NSTimer *_popoverTimer;
}

@property(retain, nonatomic) NSTimer *popoverTimer; // @synthesize popoverTimer=_popoverTimer;
@property(retain, nonatomic) NSURL *stylesheetURL; // @synthesize stylesheetURL=_stylesheetURL;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(retain, nonatomic) IMKCandidateUnitView *descriptionTargetView; // @synthesize descriptionTargetView=_descriptionTargetView;
@property(nonatomic) IMKCandidateController *controller; // @synthesize controller=_controller;
- (void)hide;
- (void)_setupWebview;
- (void)_setupPopover;
- (void)_hidePopover;
- (void)_showPopoverWithAccessibilityPid;
- (void)_showPopover;
- (void)stopPopoverShowTimer;
- (void)startPopoverShowTimerWithDuration:(double)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

