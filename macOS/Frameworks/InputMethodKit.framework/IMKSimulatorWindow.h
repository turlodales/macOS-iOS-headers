//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSTextView;

@interface IMKSimulatorWindow : NSWindow
{
    BOOL _isPressAndHold;
}

@property(nonatomic) BOOL isPressAndHold; // @synthesize isPressAndHold=_isPressAndHold;
@property(readonly, nonatomic) NSTextView *textView;
- (void)sendEvent:(id)arg1;
- (BOOL)handlePressAndHoldEvent:(id)arg1 simulatorController:(id)arg2;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

