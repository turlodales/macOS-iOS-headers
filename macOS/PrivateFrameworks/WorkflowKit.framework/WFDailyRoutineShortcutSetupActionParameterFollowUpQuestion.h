//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion : NSObject
{
    NSString *_prompt;
    NSString *_actionIdentifier;
    NSString *_parameterKey;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *parameterKey; // @synthesize parameterKey=_parameterKey;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (id)initWithPrompt:(id)arg1 actionIdentifier:(id)arg2 parameterKey:(id)arg3;

@end

