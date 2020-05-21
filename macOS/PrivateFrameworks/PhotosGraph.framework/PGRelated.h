//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSString, PGGraphNode<PGGraphRelatableEvent>, PHPhotosHighlight;

@interface PGRelated : NSObject
{
    BOOL _generateTitleBasedOnKeyAsset;
    BOOL _shouldGenerateTitle;
    unsigned int _aggregatedVersions;
    NSString *_debugDescription;
    PHPhotosHighlight *_highlight;
    NSArray *_moments;
    NSDictionary *_keywords;
    double _score;
    double _matchingScore;
    NSString *_title;
    NSString *_subtitle;
    long long _titleCategory;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    unsigned long long _memoryTripTitleType;
    long long _dateMatchingType;
    PGGraphNode<PGGraphRelatableEvent> *_eventNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PGGraphNode<PGGraphRelatableEvent> *eventNode; // @synthesize eventNode=_eventNode;
@property(nonatomic) BOOL shouldGenerateTitle; // @synthesize shouldGenerateTitle=_shouldGenerateTitle;
@property(nonatomic, getter=isGeneratingTitleBasedOnKeyAsset) BOOL generateTitleBasedOnKeyAsset; // @synthesize generateTitleBasedOnKeyAsset=_generateTitleBasedOnKeyAsset;
@property(nonatomic) long long dateMatchingType; // @synthesize dateMatchingType=_dateMatchingType;
@property(nonatomic) unsigned long long memoryTripTitleType; // @synthesize memoryTripTitleType=_memoryTripTitleType;
@property(readonly, nonatomic) unsigned int aggregatedVersions; // @synthesize aggregatedVersions=_aggregatedVersions;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(nonatomic) long long titleCategory; // @synthesize titleCategory=_titleCategory;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double matchingScore; // @synthesize matchingScore=_matchingScore;
@property(nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) NSDictionary *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSArray *moments; // @synthesize moments=_moments;
@property(retain, nonatomic) PHPhotosHighlight *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) NSString *debugDescription; // @synthesize debugDescription=_debugDescription;
- (void)_addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (void)_addKeywordsFromKeywords:(id)arg1;
@property(nonatomic) unsigned short relatedAlgorithmsVersion;
@property(nonatomic) unsigned short graphSchemaVersion;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)_generateTitleWithMomentNodes:(id)arg1 keyAsset:(id)arg2 referenceDateInterval:(id)arg3;
- (void)_generateTitleWithHighlightNode:(id)arg1 referenceDateInterval:(id)arg2;
- (id)initWithHighlight:(id)arg1 needsDebugInfo:(BOOL)arg2;
- (id)initWithMoment:(id)arg1 needsDebugInfo:(BOOL)arg2;
- (id)initWithGraphMatchingResult:(id)arg1 moments:(id)arg2 tripMemoryTitleType:(unsigned long long)arg3 tripMomentNodes:(id)arg4 needsDebugInfo:(BOOL)arg5;
- (id)initWithGraphMatchingResult:(id)arg1 moment:(id)arg2 needsDebugInfo:(BOOL)arg3;
- (id)initWithGraphMatchingResult:(id)arg1 highlight:(id)arg2 needsDebugInfo:(BOOL)arg3;
- (id)initWithGraphMatchingResult:(id)arg1 assetCollection:(id)arg2 needsDebugInfo:(BOOL)arg3;
- (id)_initWithGraphMatchingResult:(id)arg1 highlight:(id)arg2 moments:(id)arg3 needsDebugInfo:(BOOL)arg4;

@end

