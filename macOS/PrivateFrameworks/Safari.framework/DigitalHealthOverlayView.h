//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/TabDialogView-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DigitalHealthOverlayView : NSView <TabDialogView>
{
}

- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (void)updateWithNewConfiguration:(id)arg1;
- (void)fadeOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fadeInWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

