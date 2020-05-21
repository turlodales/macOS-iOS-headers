//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageConsumer.h"
#import "MFSpotlightResultCollector.h"

@class MFMessageCriterion, NSArray, NSMutableDictionary, NSOperationQueue, NSString;

@interface MFThreadedSpotlightResultCollector : NSObject <MFMessageConsumer, MFSpotlightResultCollector>
{
    struct __MDQuery *_query;
    NSMutableDictionary *_primaryLibraryIDsByConversationID;
    BOOL _checkWhereFromsPaths;
    BOOL _queryIsCancelled;
    unsigned int _options;
    id <MFMessageConsumer> _target;
    NSArray *_excludedMailboxURLs;
    MFMessageCriterion *_threadScope;
    NSOperationQueue *_serializationQueue;
    long long _nextIndexToProcess;
}

- (void).cxx_destruct;
@property(nonatomic) long long nextIndexToProcess; // @synthesize nextIndexToProcess=_nextIndexToProcess;
@property(readonly, nonatomic) NSOperationQueue *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
@property(retain, nonatomic) MFMessageCriterion *threadScope; // @synthesize threadScope=_threadScope;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(nonatomic) BOOL queryIsCancelled; // @synthesize queryIsCancelled=_queryIsCancelled;
@property(retain, nonatomic) NSArray *excludedMailboxURLs; // @synthesize excludedMailboxURLs=_excludedMailboxURLs;
@property(nonatomic) BOOL checkWhereFromsPaths; // @synthesize checkWhereFromsPaths=_checkWhereFromsPaths;
@property(retain, nonatomic) id <MFMessageConsumer> target; // @synthesize target=_target;
- (void)cancelQuery;
- (void)_messagesCompacted:(id)arg1;
- (void)_messagesAdded:(id)arg1;
@property(readonly) BOOL shouldCancel;
- (void)finishedSendingMessages;
- (void)newMessagesAvailable:(id)arg1 secondaryMessages:(id)arg2 fromUpdate:(BOOL)arg3;
- (void)receivedSpotlightCallback:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithQuery:(struct __MDQuery *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

