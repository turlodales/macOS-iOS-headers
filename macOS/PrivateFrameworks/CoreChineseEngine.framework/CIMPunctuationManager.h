//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface CIMPunctuationManager : NSObject
{
    unsigned long long _scriptType;
    NSArray *_punctuationCandidates;
    NSArray *_sortedPunctuationCandidates;
    NSArray *_recentActions;
    NSArray *_punctuationCandidateSurfaces;
    NSDictionary *_punctuationLookupTable;
    NSArray *_recentPunctuation;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recentPunctuation; // @synthesize recentPunctuation=_recentPunctuation;
@property(retain, nonatomic) NSArray *recentActions; // @synthesize recentActions=_recentActions;
@property(retain, nonatomic) NSArray *sortedPunctuationCandidates; // @synthesize sortedPunctuationCandidates=_sortedPunctuationCandidates;
@property(retain, nonatomic) NSArray *punctuationCandidates; // @synthesize punctuationCandidates=_punctuationCandidates;
@property(nonatomic) unsigned long long scriptType; // @synthesize scriptType=_scriptType;
@property(readonly, retain, nonatomic) NSDictionary *punctuationLookupTable; // @synthesize punctuationLookupTable=_punctuationLookupTable;
- (id)sortedPunctuationCandidateSurfaces;
@property(readonly, retain, nonatomic) NSArray *punctuationCandidateSurfaces; // @synthesize punctuationCandidateSurfaces=_punctuationCandidateSurfaces;
- (id)descriptionForPunctuationSurface:(id)arg1;
- (void)clearRecentPunctuationCandidate;
- (void)storeRecentPunctuationCandidate:(id)arg1;
- (void)enumeratePunctuationCandidatesForPunctuation:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePunctuationCandidatesUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

