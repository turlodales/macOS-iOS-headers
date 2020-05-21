//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_PARResult.h"

@class NSArray, NSData, NSString, _PARResult_Template;

__attribute__((visibility("hidden")))
@interface _PARResult : PBCodable <_PARResult, NSSecureCoding>
{
    BOOL _renderHorizontallyWithOtherResultsInCategory;
    BOOL _isQuickGlance;
    float _score;
    int _maxAgeSeconds;
    float _serverScore;
    int _topHit;
    int _engagementScore;
    int _queryIndependentEngagementScore;
    int _placement;
    int _minimumRankOfTopHitToSuppressResult;
    NSString *_type;
    NSString *_identifier;
    NSString *_canonicalId;
    NSString *_dataServiceId;
    NSData *_feedback;
    NSString *_url;
    NSArray *_entities;
    NSString *_appleReferrer;
    NSString *_sectionBundleId;
    NSString *_bundleId;
    NSString *_adamId;
    _PARResult_Template *_template;
    NSString *_intendedQuery;
    NSString *_correctedQuery;
    NSString *_completedQuery;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *completedQuery; // @synthesize completedQuery=_completedQuery;
@property(copy, nonatomic) NSString *correctedQuery; // @synthesize correctedQuery=_correctedQuery;
@property(copy, nonatomic) NSString *intendedQuery; // @synthesize intendedQuery=_intendedQuery;
@property(retain, nonatomic) _PARResult_Template *template; // @synthesize template=_template;
@property(copy, nonatomic) NSString *adamId; // @synthesize adamId=_adamId;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *sectionBundleId; // @synthesize sectionBundleId=_sectionBundleId;
@property(copy, nonatomic) NSString *appleReferrer; // @synthesize appleReferrer=_appleReferrer;
@property(nonatomic) int minimumRankOfTopHitToSuppressResult; // @synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult;
@property(nonatomic) BOOL isQuickGlance; // @synthesize isQuickGlance=_isQuickGlance;
@property(nonatomic) BOOL renderHorizontallyWithOtherResultsInCategory; // @synthesize renderHorizontallyWithOtherResultsInCategory=_renderHorizontallyWithOtherResultsInCategory;
@property(nonatomic) int placement; // @synthesize placement=_placement;
@property(nonatomic) int queryIndependentEngagementScore; // @synthesize queryIndependentEngagementScore=_queryIndependentEngagementScore;
@property(nonatomic) int engagementScore; // @synthesize engagementScore=_engagementScore;
@property(nonatomic) int topHit; // @synthesize topHit=_topHit;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(nonatomic) float serverScore; // @synthesize serverScore=_serverScore;
@property(nonatomic) int maxAgeSeconds; // @synthesize maxAgeSeconds=_maxAgeSeconds;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSData *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *dataServiceId; // @synthesize dataServiceId=_dataServiceId;
@property(copy, nonatomic) NSString *canonicalId; // @synthesize canonicalId=_canonicalId;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

