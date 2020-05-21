//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface PPPBScoredItemWithFeatures : PBCodable <NSCopying>
{
    unsigned long long _topicId;
    NSMutableArray *_features;
    NSMutableArray *_feedbackItems;
    NSString *_namedEntity;
    NSString *_namedEntityWithFeedback;
    float _score;
    struct {
        unsigned int topicId:1;
        unsigned int score:1;
    } _has;
}

+ (Class)feedbackItemsType;
+ (Class)featuresType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *feedbackItems; // @synthesize feedbackItems=_feedbackItems;
@property(retain, nonatomic) NSMutableArray *features; // @synthesize features=_features;
@property(nonatomic) float score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *namedEntityWithFeedback; // @synthesize namedEntityWithFeedback=_namedEntityWithFeedback;
@property(retain, nonatomic) NSString *namedEntity; // @synthesize namedEntity=_namedEntity;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)feedbackItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackItemsCount;
- (void)addFeedbackItems:(id)arg1;
- (void)clearFeedbackItems;
- (id)featuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresCount;
- (void)addFeatures:(id)arg1;
- (void)clearFeatures;
@property(nonatomic) BOOL hasScore;
@property(readonly, nonatomic) BOOL hasNamedEntityWithFeedback;
@property(readonly, nonatomic) BOOL hasNamedEntity;
@property(nonatomic) BOOL hasTopicId;

@end

