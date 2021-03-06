//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistiveControlSupport/ACSHAction.h>

@class NSArray;

@interface ACSHSequencedAction : ACSHAction
{
    NSArray *_subactions;
}

+ (id)actionWithActions:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *subactions; // @synthesize subactions=_subactions;
- (BOOL)isEqual:(id)arg1;
- (BOOL)hasAssociatedSound;
- (BOOL)hasAssociatedSoundForDoubleAction;
- (BOOL)_hasAssociatedSoundForDoubleAction:(BOOL)arg1;
- (BOOL)shouldPerformDoubleActionIfPossible;
- (unsigned long long)hash;
- (void)repeatEndedWithEventSourceData:(id)arg1;
- (void)setRepeatCount:(unsigned long long)arg1;
- (void)performDoubleActionWithEventSourceData:(id)arg1;
- (void)performDeactivateWithEventSourceData:(id)arg1;
- (void)performWithEventSourceData:(id)arg1;
- (void)setEventPerformer:(id)arg1;
- (void)_performDoubleAction:(BOOL)arg1 eventSourceData:(id)arg2;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)_configureWithPlistDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

