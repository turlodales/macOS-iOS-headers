//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButton.h>

__attribute__((visibility("hidden")))
@interface AUDiskStreamingCheckbox : NSButton
{
    struct ComponentInstanceRecord *mAudioUnit;
    struct AUListenerBase *mEventListener;
    BOOL hasEventListener;
}

+ (BOOL)diskStreamingSupportedForAU:(struct ComponentInstanceRecord *)arg1;
- (void)privUIWasAdjusted:(id)arg1;
- (void)synchronizeUI;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)removeEventListener;
- (void)addEventListener;
- (id)initWithFrame:(struct CGRect)arg1 au:(struct ComponentInstanceRecord *)arg2 listener:(struct AUListenerBase *)arg3 localizationBundle:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

