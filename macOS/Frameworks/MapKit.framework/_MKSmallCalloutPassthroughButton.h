//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

__attribute__((visibility("hidden")))
@interface _MKSmallCalloutPassthroughButton : NSControl
{
    NSControl *_targetControl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSControl *targetControl; // @synthesize targetControl=_targetControl;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_forwardAction:(SEL)arg1 toTargetViewWithEvent:(id)arg2;

@end

