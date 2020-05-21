//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PRSBagFetchSuccessDelegate.h"
#import "PRSSearchQueryHandler.h"
#import "SPKCoreParsecInterfaceProtocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, PRSSearchSession;

@interface SPKCoreParsecInterface : NSObject <PRSSearchQueryHandler, SPKCoreParsecInterfaceProtocol, PRSBagFetchSuccessDelegate>
{
    NSString *_userAgentString;
    NSString *_queryLanguage;
    BOOL _parsecEnabled;
    long long _nextQueryId;
    PRSSearchSession *_searchSession;
    NSObject<OS_dispatch_queue> *_sharedQueue;
    struct __CFDictionary *__objectMap;
    struct __CFDictionary *__replyMap;
    double _gSessionStartTime;
    long long _sessionOnceToken;
    NSMutableArray *__updateChangedBlocks;
    NSDictionary *_sqfData;
    NSArray *_parsecCategoryOrder;
}

+ (id)sharedFeedbackListener;
+ (void)setSharedFeedbackListener:(id)arg1;
+ (id)getSharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSArray *parsecCategoryOrder; // @synthesize parsecCategoryOrder=_parsecCategoryOrder;
@property(retain) NSDictionary *sqfData; // @synthesize sqfData=_sqfData;
@property(retain) NSMutableArray *_updateChangedBlocks; // @synthesize _updateChangedBlocks=__updateChangedBlocks;
@property long long sessionOnceToken; // @synthesize sessionOnceToken=_sessionOnceToken;
@property double gSessionStartTime; // @synthesize gSessionStartTime=_gSessionStartTime;
@property struct __CFDictionary *_replyMap; // @synthesize _replyMap=__replyMap;
@property struct __CFDictionary *_objectMap; // @synthesize _objectMap=__objectMap;
@property(retain) NSObject<OS_dispatch_queue> *sharedQueue; // @synthesize sharedQueue=_sharedQueue;
@property(retain) PRSSearchSession *searchSession; // @synthesize searchSession=_searchSession;
@property long long nextQueryId; // @synthesize nextQueryId=_nextQueryId;
@property BOOL parsecEnabled; // @synthesize parsecEnabled=_parsecEnabled;
- (void)unitConversion:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)deactivate;
- (void)connectionChanged:(CDUnknownBlockType)arg1;
- (void)bagFetchSuccessCallback;
- (void)activate:(double)arg1;
- (void)getSQFDataAndParsecOrderWithReply:(CDUnknownBlockType)arg1;
- (void)getRankingKnobsWithReply:(CDUnknownBlockType)arg1;
- (void)getCannedCEPDataWithReply:(CDUnknownBlockType)arg1;
- (void)getCEPDataWithReply:(CDUnknownBlockType)arg1;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (void)query:(id)arg1 didFinishWithResults:(id)arg2 withSuggestions:(id)arg3 withCorrections:(id)arg4;
- (void)cancelQuery:(long long)arg1;
- (void)resumeQuery:(long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 scaleFactor:(double)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)setParsecState:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)vetURLForResult:(id)arg1;
- (void)setUserQueryLanguage:(id)arg1;
- (double)searchRenderTimeout;
- (id)getFeedbackListener;
@property(retain) NSString *userAgentString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

