//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFEnumerationParameter.h"

@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    id _observer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)defaultSerializedRepresentation;
- (void)possibleStatesDidChange;
- (void)updateBoards;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;
- (Class)singleStateClass;

@end

