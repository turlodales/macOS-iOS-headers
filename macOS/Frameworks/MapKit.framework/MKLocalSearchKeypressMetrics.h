//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MKLocalSearchKeypressMetrics : NSObject
{
    NSString *_query;
    NSArray *_queryTokens;
    NSArray *_suggestionEntries;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;
@property(readonly, copy, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void)submitWithStatus:(unsigned long long)arg1;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;

@end

