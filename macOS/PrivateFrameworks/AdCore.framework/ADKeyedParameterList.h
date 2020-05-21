//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface ADKeyedParameterList : PBCodable <NSCopying>
{
    NSString *_key;
    NSMutableArray *_parameterLists;
}

+ (Class)parameterListType;
+ (id)options;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *parameterLists; // @synthesize parameterLists=_parameterLists;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)parameterListAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterListsCount;
- (void)addParameterList:(id)arg1;
- (void)clearParameterLists;

@end

