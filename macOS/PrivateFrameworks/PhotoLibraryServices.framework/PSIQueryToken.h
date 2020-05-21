//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSIndexSet, NSMutableSet, NSString, PSIWordEmbeddingMatch;

@interface PSIQueryToken : NSObject <NSSecureCoding>
{
    BOOL _userControlledCategoriesUseWildcard;
    BOOL _usesWordEmbeddings;
    BOOL _isFullTextToken;
    BOOL _belongsToSearchText;
    NSString *_text;
    NSString *_identifier;
    NSIndexSet *_searchedCategories;
    unsigned long long _userCategory;
    unsigned long long _matchType;
    PSIQueryToken *_parentToken;
    NSString *_normalizedText;
    PSIWordEmbeddingMatch *_wordEmbeddingMatch;
    NSMutableSet *_assetIds;
    NSMutableSet *_collectionIds;
    NSDictionary *_dateAttributes;
    struct _NSRange _rangeInSearchText;
}

+ (BOOL)supportsSecureCoding;
+ (id)stringForMatchType:(unsigned long long)arg1;
+ (id)personQueryTokensFromSocialGroupQueryToken:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dateAttributes; // @synthesize dateAttributes=_dateAttributes;
@property(retain, nonatomic) NSMutableSet *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) NSMutableSet *assetIds; // @synthesize assetIds=_assetIds;
@property(nonatomic) BOOL belongsToSearchText; // @synthesize belongsToSearchText=_belongsToSearchText;
@property(nonatomic) BOOL isFullTextToken; // @synthesize isFullTextToken=_isFullTextToken;
@property(retain, nonatomic) PSIWordEmbeddingMatch *wordEmbeddingMatch; // @synthesize wordEmbeddingMatch=_wordEmbeddingMatch;
@property(copy, nonatomic) NSString *normalizedText; // @synthesize normalizedText=_normalizedText;
@property(retain, nonatomic) PSIQueryToken *parentToken; // @synthesize parentToken=_parentToken;
@property(nonatomic) struct _NSRange rangeInSearchText; // @synthesize rangeInSearchText=_rangeInSearchText;
@property(nonatomic) BOOL usesWordEmbeddings; // @synthesize usesWordEmbeddings=_usesWordEmbeddings;
@property(nonatomic) BOOL userControlledCategoriesUseWildcard; // @synthesize userControlledCategoriesUseWildcard=_userControlledCategoriesUseWildcard;
@property(readonly, nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned long long userCategory; // @synthesize userCategory=_userCategory;
@property(copy, nonatomic) NSIndexSet *searchedCategories; // @synthesize searchedCategories=_searchedCategories;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)replaceIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *debugDictionary;
- (id)description;
- (id)tokenByWordEmbeddingWithMatch:(id)arg1;
@property(readonly, nonatomic) BOOL containsMarker;
@property(readonly, copy, nonatomic) NSString *wildcardResolvedText;
@property(readonly, copy, nonatomic) NSString *groupMatchingText;
@property(readonly, nonatomic) BOOL isTextSearchable;
@property(readonly, nonatomic) unsigned long long resultCount;
@property(readonly, nonatomic) unsigned long long collectionCount;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, copy, nonatomic) NSString *resolvedText;
- (void)normalizeTextWithTokenizer:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 userCategory:(unsigned long long)arg3 searchedCategories:(id)arg4 matchType:(unsigned long long)arg5;
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 userCategory:(unsigned long long)arg3 matchType:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3 matchType:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 matchType:(unsigned long long)arg3;
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 identifier:(id)arg3 userCategory:(unsigned long long)arg4 searchedCategories:(id)arg5 matchType:(unsigned long long)arg6;

@end

