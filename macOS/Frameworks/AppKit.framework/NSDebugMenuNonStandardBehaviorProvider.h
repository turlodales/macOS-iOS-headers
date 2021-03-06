//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSDebugMenuItemProvider-Protocol.h>
#import <AppKit/NSMenuDelegate-Protocol.h>

@class NSArray, NSMenuItem, NSString;

__attribute__((visibility("hidden")))
@interface NSDebugMenuNonStandardBehaviorProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider>
{
    NSArray *_cachedEntries;
}

@property(copy) NSArray *cachedEntries; // @synthesize cachedEntries=_cachedEntries;
- (void)copyName:(id)arg1;
- (void)copyArgument:(id)arg1;
- (void)entriesDidChange:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
@property(readonly, copy) NSMenuItem *menuItem;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

