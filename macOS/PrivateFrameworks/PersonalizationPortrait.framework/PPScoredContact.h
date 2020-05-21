//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, PPContact;

@interface PPScoredContact : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _flags;
    PPContact *_contact;
    double _score;
    NSArray *_scoredPhoneNumbers;
    NSArray *_scoredEmailAddresses;
    NSArray *_scoredSocialProfiles;
    NSArray *_scoredPostalAddresses;
}

+ (BOOL)supportsSecureCoding;
+ (id)scoredContactWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *scoredPostalAddresses; // @synthesize scoredPostalAddresses=_scoredPostalAddresses;
@property(readonly, nonatomic) NSArray *scoredSocialProfiles; // @synthesize scoredSocialProfiles=_scoredSocialProfiles;
@property(readonly, nonatomic) NSArray *scoredEmailAddresses; // @synthesize scoredEmailAddresses=_scoredEmailAddresses;
@property(readonly, nonatomic) NSArray *scoredPhoneNumbers; // @synthesize scoredPhoneNumbers=_scoredPhoneNumbers;
@property(readonly, nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) PPContact *contact; // @synthesize contact=_contact;
- (BOOL)isEqualToScoredContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)reverseCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithContact:(id)arg1 scoredPhoneNumbers:(id)arg2 scoredEmailAddresses:(id)arg3 scoredSocialProfiles:(id)arg4 scoredPostalAddresses:(id)arg5 score:(double)arg6 flags:(unsigned char)arg7;

@end

