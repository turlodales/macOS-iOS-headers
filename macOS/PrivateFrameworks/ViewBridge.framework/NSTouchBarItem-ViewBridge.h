//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTouchBarItem.h"

#import "TouchBarsAndItems.h"

@interface NSTouchBarItem (ViewBridge) <TouchBarsAndItems>
+ (id)touchBarItemForIdentifier:(id)arg1;
- (void)_hostHidPopoverBar:(id)arg1 forItem:(id)arg2 sender:(id)arg3;
- (void)_hostShowedPopoverBar:(id)arg1 forItem:(id)arg2 sender:(id)arg3;
- (id)overlayForItemIdentifier:(id)arg1;
- (id)viewServiceTouchBarControllerDescription;
- (void)removeViewServiceTouchBarControllerObservers;
- (void)addViewServiceTouchBarControllerObservers;
- (id)_itemBar;
- (void)setServiceViewController:(id)arg1;
- (id)serviceViewController;
- (void)setOverlayIdentifier:(id)arg1;
- (id)overlayIdentifier;
- (void)setViewServiceItemCustomizationLabel:(id)arg1;
- (id)viewServiceItemCustomizationLabel;
- (void)setViewServiceItemPosition:(unsigned long long)arg1;
- (unsigned long long)viewServiceItemPosition;
- (id)_viewServiceTouchBarControllerIdentifier;
- (void)setViewServiceTouchBarControllerIdentifier:(id)arg1;
- (id)viewServiceTouchBarControllerIdentifier;
- (void)swizzledDealloc;
@end

