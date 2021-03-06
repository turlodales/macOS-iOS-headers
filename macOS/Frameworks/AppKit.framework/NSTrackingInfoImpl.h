//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSMenuTrackingInfo-Protocol.h>

@class NSMenu, NSMenuItem, NSString;

__attribute__((visibility("hidden")))
@interface NSTrackingInfoImpl : NSObject <NSMenuTrackingInfo>
{
    NSMenu *_menu;
    NSMenuItem *_selectedItem;
    NSMenuItem *_targetedItem;
    struct CGRect _targetedItemFrame;
}

@property(readonly) struct CGRect targetedItemFrame; // @synthesize targetedItemFrame=_targetedItemFrame;
@property(readonly) NSMenuItem *targetedItem; // @synthesize targetedItem=_targetedItem;
@property(readonly) NSMenuItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(readonly) NSMenu *menu; // @synthesize menu=_menu;
- (void)dealloc;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

