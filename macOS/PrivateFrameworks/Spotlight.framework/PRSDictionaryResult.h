//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFSearchResult_SpotlightExtras.h"

@class NSString;

@interface PRSDictionaryResult : SFSearchResult_SpotlightExtras
{
    NSString *_dictionaryId;
    NSString *_definitionId;
    NSString *_query;
}

- (void).cxx_destruct;
@property(retain) NSString *query; // @synthesize query=_query;
@property(retain) NSString *definitionId; // @synthesize definitionId=_definitionId;
@property(retain) NSString *dictionaryId; // @synthesize dictionaryId=_dictionaryId;
- (id)groupName;
- (id)category;
- (unsigned long long)resultOpenOptions;
- (id)pathForApplicationToOpen;
- (id)uniqueIdentifier;
- (id)URL;
- (BOOL)isLocalResult;
- (id)initWithDisplayName:(id)arg1 definitionId:(id)arg2 dictionaryId:(id)arg3 query:(id)arg4;

@end

