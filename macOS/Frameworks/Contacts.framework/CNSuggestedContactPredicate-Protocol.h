//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SGSuggestionsService;

@protocol CNSuggestedContactPredicate <NSObject>

@optional
- (NSArray *)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(SGSuggestionsService *)arg3 error:(id *)arg4;
- (NSArray *)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(SGSuggestionsService *)arg3 error:(id *)arg4;
@end

