//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionDwell : ACSHAction
{
    BOOL _isSingleAction;
    long long _dwellActionType;
}

@property(nonatomic) BOOL isSingleAction; // @synthesize isSingleAction=_isSingleAction;
@property(nonatomic) long long dwellActionType; // @synthesize dwellActionType=_dwellActionType;
- (id)paramDescription;
- (void)performWithEventSourceData:(id)arg1;
- (unsigned long long)hash;
- (id)paramDictionaryForSaving;
- (void)_configureWithPlistDictionary:(id)arg1;
- (id)init;

@end

