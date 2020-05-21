//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class IMKInputController, NSTextView, NSViewController;

@interface IMKSimulatorWindow : NSWindow
{
    id <IMKTextInput><NSObject> _client;
    IMKInputController *_inputController;
    BOOL _isPressAndHold;
    id <IMKSimulatorDelegate><NSObject> _simulatorDelegate;
    NSWindow *_touchBarViewChildWindow;
    NSViewController *_touchBarViewController;
    struct __CFMessagePort *_simulatorMessagePort;
    struct __CFRunLoopSource *_simulatorMessageRunLoopSource;
}

@property(retain, nonatomic) NSViewController *touchBarViewController; // @synthesize touchBarViewController=_touchBarViewController;
@property(retain, nonatomic) id <IMKSimulatorDelegate><NSObject> simulatorDelegate; // @synthesize simulatorDelegate=_simulatorDelegate;
@property(retain, nonatomic) IMKInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) id <IMKTextInput><NSObject> client; // @synthesize client=_client;
- (void)touchBarCloseButtonPressed:(id)arg1;
- (void)removeChildWindowForTouchBarController;
@property(readonly, nonatomic) BOOL isPressAndHold;
@property(readonly, nonatomic) NSTextView *textView;
- (void)sendEvent:(id)arg1;
- (BOOL)handlePressAndHoldEvent:(id)arg1 simulatorController:(id)arg2;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 delegate:(id)arg5;

@end

