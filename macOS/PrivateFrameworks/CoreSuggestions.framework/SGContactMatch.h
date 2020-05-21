//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, SGContact, SGMatchedDetails, SGObject, SGRecordId;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding>
{
    SGRecordId *_matchingFieldRecordId;
    long long _matchingFieldType;
    SGContact *_contact;
    NSArray *_matchTokens;
    SGMatchedDetails *_matchedDetails;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) SGMatchedDetails *matchedDetails; // @synthesize matchedDetails=_matchedDetails;
@property(readonly, nonatomic) NSArray *matchTokens; // @synthesize matchTokens=_matchTokens;
@property(readonly, nonatomic) long long matchingFieldType; // @synthesize matchingFieldType=_matchingFieldType;
@property(readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
- (id)description;
- (unsigned long long)hash;
@property(readonly, nonatomic) SGObject *matchingField;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactMatch:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2;
- (id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3;
- (id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

