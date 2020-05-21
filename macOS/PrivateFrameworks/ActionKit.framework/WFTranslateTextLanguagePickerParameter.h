//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFEnumerationParameter.h"

@class NSArray;

@interface WFTranslateTextLanguagePickerParameter : WFEnumerationParameter
{
    BOOL _supportsLanguageDetection;
    NSArray *_possibleStates;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL supportsLanguageDetection; // @synthesize supportsLanguageDetection=_supportsLanguageDetection;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)defaultSerializedRepresentation;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

