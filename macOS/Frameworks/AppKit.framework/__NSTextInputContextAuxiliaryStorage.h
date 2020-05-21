//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSPopoverTouchBarItem, NSTextInputContext, NSTouchBar, NSViewController, RTIInputSystemServiceSession;

__attribute__((visibility("hidden")))
@interface __NSTextInputContextAuxiliaryStorage : NSObject
{
    NSTextInputContext *_inputContext;
    NSArray *_functionRowItemIdentifiers;
    NSViewController *_keyboardInputSourceViewController;
    NSPopoverTouchBarItem *_keyboardInputSourcePopoverTouchBarItem;
    NSTouchBar *_keyboardInputSourcePopoverTouchBar;
    NSViewController *_characterPickerViewController;
    NSPopoverTouchBarItem *_characterPickerPopoverTouchBarItem;
    NSPopoverTouchBarItem *_pressAndHoldPopoverTouchBarItem;
    NSPopoverTouchBarItem *_trackpadHandwritingPopoverTouchBarItem;
    NSData *_ucharDataForSelectedInputSource;
    RTIInputSystemServiceSession *_rtiCurrentInputSystemServiceSession;
    struct {
        unsigned int _haveKeyboardIM:1;
        unsigned int _havePressAndHold:1;
        unsigned int _haveCharacterPickerInput:1;
        unsigned int _haveTrackpadHandwritingInput:1;
        unsigned int _characterPickerDisabled:1;
        unsigned int _haveFunctionRowDeviceKVOObserver:1;
        unsigned int _iosMacClient:1;
        unsigned int _extra:25;
    } _ticFlags;
}

- (void).cxx_destruct;
@property(retain) NSPopoverTouchBarItem *trackpadHandwritingPopoverTouchBarItem; // @synthesize trackpadHandwritingPopoverTouchBarItem=_trackpadHandwritingPopoverTouchBarItem;
@property(retain) NSPopoverTouchBarItem *pressAndHoldPopoverTouchBarItem; // @synthesize pressAndHoldPopoverTouchBarItem=_pressAndHoldPopoverTouchBarItem;
@property(retain, nonatomic) NSViewController *characterPickerViewController; // @synthesize characterPickerViewController=_characterPickerViewController;
@property(retain, nonatomic) NSViewController *keyboardInputSourceViewController; // @synthesize keyboardInputSourceViewController=_keyboardInputSourceViewController;
@property(retain, nonatomic) NSArray *functionRowItemIdentifiers; // @synthesize functionRowItemIdentifiers=_functionRowItemIdentifiers;
@property(readonly) NSTextInputContext *inputContext; // @synthesize inputContext=_inputContext;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) NSViewController *trackpadHandwritingTouchBarItemViewController; // @dynamic trackpadHandwritingTouchBarItemViewController;
@property(retain, nonatomic) NSViewController *pressAndHoldTouchBarItemViewController; // @dynamic pressAndHoldTouchBarItemViewController;
@property(readonly) NSPopoverTouchBarItem *keyboardInputSourcePopoverTouchBarItem; // @dynamic keyboardInputSourcePopoverTouchBarItem;
@property __weak NSPopoverTouchBarItem *characterPickerPopoverTouchBarItem; // @dynamic characterPickerPopoverTouchBarItem;
- (id)initWithTextInputContext:(id)arg1;

@end

