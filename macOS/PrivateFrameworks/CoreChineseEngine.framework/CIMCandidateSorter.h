//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CIMCandidateSorter : NSObject
{
    NSString *_inputModeName;
    unsigned long long _scriptType;
    NSArray *_storedCandidates;
}

+ (id)candidateSorterForScriptType:(unsigned long long)arg1 inputModeName:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSArray *storedCandidates; // @synthesize storedCandidates=_storedCandidates;
@property unsigned long long scriptType; // @synthesize scriptType=_scriptType;
@property(retain) NSString *inputModeName; // @synthesize inputModeName=_inputModeName;
- (id)candidatesSortedByMethod:(id)arg1;
- (id)candidatesSortedByStroke:(id)arg1;
- (id)candidatesSortedByPinyinOrZhuyin:(id)arg1 simplified:(BOOL)arg2 zhuyin:(BOOL)arg3;
- (id)candidatesSortedByRadical:(id)arg1;
- (id)IMKCandidateArrayFromDictionary:(id)arg1 sortedKeys:(id)arg2;
- (void)sortCharactersByStrokeCount:(id)arg1 wordPropertiesDictionary:(id)arg2;
- (void)addCharacter:(id)arg1 groupLabel:(id)arg2 dictionary:(id)arg3 isSecondary:(BOOL)arg4;
- (id)wordPropertyDictionaryForArray:(id)arg1;
- (void)setCandidates:(id)arg1;
- (id)initWithScriptType:(unsigned long long)arg1 inputModeName:(id)arg2;

@end

