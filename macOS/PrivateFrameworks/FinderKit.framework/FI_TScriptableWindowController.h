//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "TMarkTornDown.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TScriptableWindowController : NSWindowController <TMarkTornDown>
{
    _Bool tornDown;
}

@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown;
- (void)windowDidEndMove:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)aboutToTearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

