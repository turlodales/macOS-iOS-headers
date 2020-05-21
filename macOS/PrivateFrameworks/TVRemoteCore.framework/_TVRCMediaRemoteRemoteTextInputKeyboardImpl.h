//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTIInputSystemPayloadDelegate.h"
#import "RTIInputSystemSessionDelegate.h"
#import "_TVRXKeyboardImpl.h"

@class NSDate, NSString, RTIInputSystemSourceSession, TVRCKeyboardAttributes, _TVRCMRTelevisionWrapper, _TVRXKeyboardController;

@interface _TVRCMediaRemoteRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl>
{
    BOOL _editing;
    _TVRXKeyboardController *_keyboardController;
    _TVRCMRTelevisionWrapper *_television;
    RTIInputSystemSourceSession *_currentSession;
    TVRCKeyboardAttributes *_currentAttributes;
    NSDate *_lastSessionTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastSessionTimestamp; // @synthesize lastSessionTimestamp=_lastSessionTimestamp;
@property(retain, nonatomic) TVRCKeyboardAttributes *currentAttributes; // @synthesize currentAttributes=_currentAttributes;
@property(retain, nonatomic) RTIInputSystemSourceSession *currentSession; // @synthesize currentSession=_currentSession;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(retain, nonatomic) _TVRCMRTelevisionWrapper *television; // @synthesize television=_television;
@property(nonatomic) __weak _TVRXKeyboardController *keyboardController; // @synthesize keyboardController=_keyboardController;
- (BOOL)_shouldAllowSourceSession;
- (void)_receivedInputSourceSession:(id)arg1;
- (void)_stopObservingTelevisionEditingSession;
- (void)handleTextActionPayload:(id)arg1;
- (void)inputSessionDidDie:(id)arg1;
- (void)inputSessionDidEnd:(id)arg1;
- (void)inputSessionDidBegin:(id)arg1;
- (void)setTextActionPayload:(id)arg1;
- (void)sendReturnKey;
- (void)setText:(id)arg1;
- (id)text;
- (id)attributes;
- (BOOL)isEditing;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

