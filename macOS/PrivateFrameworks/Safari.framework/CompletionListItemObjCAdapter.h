//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSCompletionListItem-Protocol.h>

@class NSString, SFSearchResult, WBSQuerySuggestion;

__attribute__((visibility("hidden")))
@interface CompletionListItemObjCAdapter : NSObject <WBSCompletionListItem>
{
    NSString *_parsecDomainIdentifier;
    long long _parsecQueryID;
    SFSearchResult *_sfSearchResultValue;
    unsigned long long _engagementDestination;
    WBSQuerySuggestion *siriSuggestion;
    struct CompletionListItem *_completionListItem;
}

- (void).cxx_destruct;
@property(nonatomic) struct CompletionListItem *completionListItem; // @synthesize completionListItem=_completionListItem;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion; // @synthesize siriSuggestion;
@property(readonly, nonatomic) unsigned long long engagementDestination; // @synthesize engagementDestination=_engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue=_sfSearchResultValue;
@property(nonatomic) long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier; // @synthesize parsecDomainIdentifier=_parsecDomainIdentifier;
- (void)invalidate;
- (unsigned long long)_determineEngagementDestination;
- (BOOL)_isQuickWebsiteSearch;
- (id)_determineSFSearchResultValue;
@property(readonly, nonatomic) NSString *lastSearchQuery;
- (id)_determineParsecDomainIdentifier;
- (id)initWithCompletionListItem:(struct CompletionListItem *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

