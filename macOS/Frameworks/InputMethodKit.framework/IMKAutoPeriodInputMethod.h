//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKAbstractInputMethod.h>

@class IMKKey, NSString;

@interface IMKAutoPeriodInputMethod : IMKAbstractInputMethod
{
    IMKKey *_previousPressedKey;
    BOOL _autoPeriodEnabled;
    NSString *_replacementString;
}

- (void).cxx_destruct;
@property(retain) NSString *replacementString; // @synthesize replacementString=_replacementString;
@property(nonatomic, getter=isAutoPeriodEnabled) BOOL autoPeriodEnabled; // @synthesize autoPeriodEnabled=_autoPeriodEnabled;
@property(retain, nonatomic) IMKKey *previousPressedKey; // @synthesize previousPressedKey=_previousPressedKey;
- (BOOL)handleKeyPress:(id)arg1 whileInKeyboardState:(id)arg2;
- (id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2;

@end

