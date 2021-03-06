//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent;

@interface TITypologyRecordHitTest : TITypologyRecord
{
    TIKeyboardTouchEvent *_touchEvent;
    TIKeyboardState *_keyboardState;
    TIKeyboardLayout *_keyLayout;
    long long _keyCode;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long keyCode; // @synthesize keyCode=_keyCode;
@property(retain, nonatomic) TIKeyboardLayout *keyLayout; // @synthesize keyLayout=_keyLayout;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) TIKeyboardTouchEvent *touchEvent; // @synthesize touchEvent=_touchEvent;
- (void)replaceDocumentState:(id)arg1;
- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

