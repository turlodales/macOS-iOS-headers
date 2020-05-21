//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, TPPBDictionaryMatchingRule;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying>
{
    TPPBDictionaryMatchingRule *_matchingRule;
    NSString *_view;
}

+ (id)TPPBPolicyKeyViewMappingWithView:(id)arg1 matchingRule:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *view; // @synthesize view=_view;
@property(retain, nonatomic) TPPBDictionaryMatchingRule *matchingRule; // @synthesize matchingRule=_matchingRule;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasView;
@property(readonly, nonatomic) BOOL hasMatchingRule;

@end

