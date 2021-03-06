//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSRendezvousWindowController.h>

__attribute__((visibility("hidden")))
@interface NSSemiAutonomousRendezvousWindowController : NSRendezvousWindowController
{
}

+ (void)addPanelBridgeKeys:(id)arg1;
+ (void)addBridgeKeys:(id)arg1;
+ (unsigned long long)acceptableStyleMask;
- (id)appearance;
- (id)objectToObserveForKey:(id)arg1 withWindow:(id)arg2;
- (void)_viewDidChangeAppearance:(id)arg1;
- (BOOL)_shouldNormalizeAppearance;
- (unsigned long long)awakeFromRemoteView;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (id)requestFrame:(struct CGRect)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestResize:(struct CGSize)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)allowsWindowFrameOriginChanges;
- (struct CGRect)_serviceWindowFrameForRemoteViewFrame:(struct CGRect)arg1;
- (void)windowWillOrder:(long long)arg1 relativeTo:(long long)arg2;

@end

