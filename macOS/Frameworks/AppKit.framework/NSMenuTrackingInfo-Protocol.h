//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSMenu, NSMenuItem;

@protocol NSMenuTrackingInfo <NSObject>
@property(readonly) struct CGRect targetedItemFrame;
@property(readonly) NSMenuItem *targetedItem;
@property(readonly) NSMenuItem *selectedItem;
@property(readonly) NSMenu *menu;
@end

