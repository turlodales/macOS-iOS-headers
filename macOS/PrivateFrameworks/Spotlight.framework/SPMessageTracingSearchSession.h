//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SFSearchResult_SpotlightExtras;

@interface SPMessageTracingSearchSession : NSObject
{
    BOOL _hadQuery;
    BOOL _searchWindowDidExpand;
    BOOL _didEndByClearing;
    BOOL _didEnd;
    double _started;
    double _timeBeganPreviewingCurrentResult;
    NSString *_openMethod;
    SFSearchResult_SpotlightExtras *_selectedResult;
    SFSearchResult_SpotlightExtras *_previewedResult;
    SFSearchResult_SpotlightExtras *_engagedResult;
    NSString *_topHitCategory;
    NSString *_NLPCategory;
    NSString *_query;
    NSString *_NLPParseConfidence;
    double _parsecQueryDuration;
    unsigned long long _parsecQueryResultCount;
    unsigned long long _parsecQuerySectionCount;
    unsigned long long _countOfQueries;
    long long _parsecQueriesCompleted;
    long long _parsecQueriesLongerThan3CharactersCompleted;
    long long _parsecQueriesWithResults;
    long long _parsecQueriesErrored;
    double _startTimeStamp;
    double _endTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) double endTimeStamp; // @synthesize endTimeStamp=_endTimeStamp;
@property(nonatomic) double startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(nonatomic) long long parsecQueriesErrored; // @synthesize parsecQueriesErrored=_parsecQueriesErrored;
@property(nonatomic) long long parsecQueriesWithResults; // @synthesize parsecQueriesWithResults=_parsecQueriesWithResults;
@property(nonatomic) long long parsecQueriesLongerThan3CharactersCompleted; // @synthesize parsecQueriesLongerThan3CharactersCompleted=_parsecQueriesLongerThan3CharactersCompleted;
@property(nonatomic) long long parsecQueriesCompleted; // @synthesize parsecQueriesCompleted=_parsecQueriesCompleted;
@property(nonatomic) unsigned long long countOfQueries; // @synthesize countOfQueries=_countOfQueries;
@property(nonatomic) unsigned long long parsecQuerySectionCount; // @synthesize parsecQuerySectionCount=_parsecQuerySectionCount;
@property(nonatomic) unsigned long long parsecQueryResultCount; // @synthesize parsecQueryResultCount=_parsecQueryResultCount;
@property(nonatomic) double parsecQueryDuration; // @synthesize parsecQueryDuration=_parsecQueryDuration;
@property(retain, nonatomic) NSString *NLPParseConfidence; // @synthesize NLPParseConfidence=_NLPParseConfidence;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *NLPCategory; // @synthesize NLPCategory=_NLPCategory;
@property(retain, nonatomic) NSString *topHitCategory; // @synthesize topHitCategory=_topHitCategory;
@property(retain, nonatomic) SFSearchResult_SpotlightExtras *engagedResult; // @synthesize engagedResult=_engagedResult;
@property(retain, nonatomic) SFSearchResult_SpotlightExtras *previewedResult; // @synthesize previewedResult=_previewedResult;
@property(retain, nonatomic) SFSearchResult_SpotlightExtras *selectedResult; // @synthesize selectedResult=_selectedResult;
@property(nonatomic) BOOL didEnd; // @synthesize didEnd=_didEnd;
@property(nonatomic) BOOL didEndByClearing; // @synthesize didEndByClearing=_didEndByClearing;
@property(nonatomic) BOOL searchWindowDidExpand; // @synthesize searchWindowDidExpand=_searchWindowDidExpand;
@property(nonatomic) BOOL hadQuery; // @synthesize hadQuery=_hadQuery;
@property(retain, nonatomic) NSString *openMethod; // @synthesize openMethod=_openMethod;
@property(nonatomic) double timeBeganPreviewingCurrentResult; // @synthesize timeBeganPreviewingCurrentResult=_timeBeganPreviewingCurrentResult;
@property(nonatomic) double started; // @synthesize started=_started;
- (void)parsecQuery:(id)arg1 didFinishWithResultsCount:(long long)arg2 sectionCount:(long long)arg3 success:(BOOL)arg4;
- (void)didStartParsecQuery;
- (id)init;

@end

