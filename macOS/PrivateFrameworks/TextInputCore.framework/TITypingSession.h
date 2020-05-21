//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "TIKeyboardInteractionProtocol.h"

@class NSDate, NSLocale, NSMutableArray, NSMutableDictionary, NSString, TIKeyboardInput, TIKeyboardState, TIKeyboardTouchEvent, TIWordEntry;

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol>
{
    BOOL _didReceiveSecureFieldEvent;
    BOOL _includeInputToLastWord;
    NSString *_layoutName;
    NSString *_startContext;
    NSMutableArray *_layouts;
    NSLocale *_locale;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_applicationID;
    NSMutableArray *_userActionHistory;
    TIWordEntry *_currentWord;
    TIKeyboardInput *_lastInput;
    TIKeyboardState *_savedDeleteInputKeyboardState;
    unsigned long long _currentLayoutID;
    TIWordEntry *_lastWord;
    TIKeyboardTouchEvent *_timeCalibrationTouch;
    double _calibratedTimeBase;
    NSMutableDictionary *_touchesHistory;
    long long _lastActivePathIndex;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long lastActivePathIndex; // @synthesize lastActivePathIndex=_lastActivePathIndex;
@property(retain, nonatomic) NSMutableDictionary *touchesHistory; // @synthesize touchesHistory=_touchesHistory;
@property double calibratedTimeBase; // @synthesize calibratedTimeBase=_calibratedTimeBase;
@property(retain) TIKeyboardTouchEvent *timeCalibrationTouch; // @synthesize timeCalibrationTouch=_timeCalibrationTouch;
@property(nonatomic) BOOL includeInputToLastWord; // @synthesize includeInputToLastWord=_includeInputToLastWord;
@property(retain, nonatomic) TIWordEntry *lastWord; // @synthesize lastWord=_lastWord;
@property(nonatomic) unsigned long long currentLayoutID; // @synthesize currentLayoutID=_currentLayoutID;
@property(retain, nonatomic) TIKeyboardState *savedDeleteInputKeyboardState; // @synthesize savedDeleteInputKeyboardState=_savedDeleteInputKeyboardState;
@property(retain, nonatomic) TIKeyboardInput *lastInput; // @synthesize lastInput=_lastInput;
@property(retain, nonatomic) TIWordEntry *currentWord; // @synthesize currentWord=_currentWord;
@property(retain, nonatomic) NSMutableArray *userActionHistory; // @synthesize userActionHistory=_userActionHistory;
@property(nonatomic) BOOL didReceiveSecureFieldEvent; // @synthesize didReceiveSecureFieldEvent=_didReceiveSecureFieldEvent;
@property(copy, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSMutableArray *layouts; // @synthesize layouts=_layouts;
@property(copy, nonatomic) NSString *startContext; // @synthesize startContext=_startContext;
@property(copy, nonatomic) NSString *layoutName; // @synthesize layoutName=_layoutName;
- (void)setClientID:(id)arg1 keyboardState:(id)arg2;
- (void)contextDidChange:(id)arg1 wordDelete:(BOOL)arg2 cursorMoved:(BOOL)arg3 extendsPriorWord:(BOOL)arg4 inWord:(id)arg5 range:(struct _NSRange)arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(id)arg8;
- (void)candidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(BOOL)arg6 useCandidateSelection:(BOOL)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
- (void)candidatesOffered:(id)arg1 keyboardState:(id)arg2;
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
- (void)addTouchEvent:(id)arg1;
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;
- (void)addKeyInput:(id)arg1 keyboardState:(id)arg2;
- (BOOL)testForRapidDeleteContextChange:(id)arg1;
- (BOOL)isCurrentWordEmpty;
- (double)calibratedCurrentTimestamp;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocale:(id)arg1 keyboardLayout:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

