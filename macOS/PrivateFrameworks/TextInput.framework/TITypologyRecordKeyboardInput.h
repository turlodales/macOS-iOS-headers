//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardConfiguration, TIKeyboardInput, TIKeyboardOutput, TIKeyboardState;

@interface TITypologyRecordKeyboardInput : TITypologyRecord
{
    TIKeyboardInput *_input;
    TIKeyboardState *_keyboardState;
    TIKeyboardOutput *_output;
    TIKeyboardConfiguration *_keyboardConfig;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) TIKeyboardConfiguration *keyboardConfig; // @synthesize keyboardConfig=_keyboardConfig;
@property(retain, nonatomic) TIKeyboardOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(retain, nonatomic) TIKeyboardInput *input; // @synthesize input=_input;
- (void)replaceDocumentState:(id)arg1;
- (id)changedText;
- (id)shortDescription;
- (id)textSummary;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyToStatistic:(id)arg1;

@end

