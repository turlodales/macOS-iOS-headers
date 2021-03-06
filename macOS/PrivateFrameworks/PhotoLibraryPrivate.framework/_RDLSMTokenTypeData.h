//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDLibrarySearchResultCategoryData.h>

@class NSArray;

@interface _RDLSMTokenTypeData : RDLibrarySearchResultCategoryData
{
    int _hasDuplicateTokens;
    NSArray *_tokenLocations;
}

+ (id)unarchiveTokenData:(id)arg1;
+ (id)archiveForTokenData:(id)arg1;
@property(retain) NSArray *tokenLocations; // @synthesize tokenLocations=_tokenLocations;
- (void).cxx_destruct;
- (unsigned long long)dataSize;
- (BOOL)hasDuplicateTokens;
- (void)appendTokensToIndexString:(id)arg1;
- (id)initWithString:(id)arg1 type:(int)arg2 annotation:(unsigned long long)arg3;
- (unsigned long long)restoreArchivedData:(id)arg1 startingOffset:(unsigned long long)arg2;
- (void)archiveByAppendingToData:(id)arg1;

@end

