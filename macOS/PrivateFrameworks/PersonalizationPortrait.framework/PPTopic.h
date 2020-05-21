//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, PPTopicRecord;

@interface PPTopic : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_topicIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *topicIdentifier; // @synthesize topicIdentifier=_topicIdentifier;
- (id)id;
- (id)initWithId:(id)arg1;
@property(readonly, nonatomic) double sentimentScore;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTopic:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) PPTopicRecord *mostRelevantRecord;
- (id)initWithTopicIdentifier:(id)arg1;
- (id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2;

@end

