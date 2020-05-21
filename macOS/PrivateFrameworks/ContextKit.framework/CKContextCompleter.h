//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKContextResponse, NSDate, NSLocale, NSMutableArray, NSString;

@interface CKContextCompleter : NSObject
{
    CKContextResponse *_response;
    NSString *_ignorePrefix;
    NSLocale *_searchLocale;
    // Error parsing type: AB, name: _discarded
    unsigned long long _couldHaveShown;
    NSString *_input;
    NSDate *_hideCompletionsAfterDate;
    BOOL _hideZKW;
    BOOL _hideCompletions;
    unsigned long long _mustPrefixMatchLength;
    NSMutableArray *_zkwResults;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)discard;
- (void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2;
- (void)logTransactionSuccessfulForInput:(id)arg1;
- (void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3;
- (void)logEngagement:(id)arg1 forInput:(id)arg2;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2 forInput:(id)arg3;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(BOOL)arg2;
- (id)queriesMatching:(id)arg1;
- (id)_resultsMatching:(id)arg1;
- (id)resultsMatching:(id)arg1;
- (id)initWithResponse:(id)arg1;

@end

