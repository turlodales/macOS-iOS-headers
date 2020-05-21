//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PGSharingSuggestionSource : NSObject
{
}

- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (BOOL)canRunWithInput:(id)arg1;
- (BOOL)canRunWithOptions:(id)arg1;
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) NSString *details;
@property(readonly, nonatomic) NSString *name;
- (id)suggestionResultsWithPersons:(id)arg1;
- (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2;
- (id)suggestionResultWithPerson:(id)arg1;
- (id)sourceDescription;
- (id)description;

@end

