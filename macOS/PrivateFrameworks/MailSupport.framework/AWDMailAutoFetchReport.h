//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class AWDMailError;

@interface AWDMailAutoFetchReport : PBCodable <NSCopying>
{
    unsigned long long _bucketedLocalNonDeletedCount;
    unsigned long long _duration;
    unsigned long long _fetchSize;
    unsigned long long _numMessagesFetched;
    unsigned long long _options;
    unsigned long long _timestamp;
    int _emailProvider;
    AWDMailError *_mailError;
    int _mailboxType;
    int _newMessagesState;
    int _protocol;
    int _totalBytesReceived;
    int _totalBytesSent;
    int _trigger;
    BOOL _didTimeout;
    BOOL _foreground;
    struct {
        unsigned int bucketedLocalNonDeletedCount:1;
        unsigned int duration:1;
        unsigned int fetchSize:1;
        unsigned int numMessagesFetched:1;
        unsigned int options:1;
        unsigned int timestamp:1;
        unsigned int emailProvider:1;
        unsigned int mailboxType:1;
        unsigned int newMessagesState:1;
        unsigned int protocol:1;
        unsigned int totalBytesReceived:1;
        unsigned int totalBytesSent:1;
        unsigned int trigger:1;
        unsigned int didTimeout:1;
        unsigned int foreground:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long bucketedLocalNonDeletedCount; // @synthesize bucketedLocalNonDeletedCount=_bucketedLocalNonDeletedCount;
@property(nonatomic) unsigned long long numMessagesFetched; // @synthesize numMessagesFetched=_numMessagesFetched;
@property(nonatomic) unsigned long long fetchSize; // @synthesize fetchSize=_fetchSize;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) BOOL didTimeout; // @synthesize didTimeout=_didTimeout;
@property(nonatomic) BOOL foreground; // @synthesize foreground=_foreground;
@property(retain, nonatomic) AWDMailError *mailError; // @synthesize mailError=_mailError;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasBucketedLocalNonDeletedCount;
- (int)StringAsTotalBytesReceived:(id)arg1;
- (id)totalBytesReceivedAsString:(int)arg1;
@property(nonatomic) BOOL hasTotalBytesReceived;
@property(nonatomic) int totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
- (int)StringAsTotalBytesSent:(id)arg1;
- (id)totalBytesSentAsString:(int)arg1;
@property(nonatomic) BOOL hasTotalBytesSent;
@property(nonatomic) int totalBytesSent; // @synthesize totalBytesSent=_totalBytesSent;
@property(nonatomic) BOOL hasNumMessagesFetched;
@property(nonatomic) BOOL hasFetchSize;
@property(nonatomic) BOOL hasOptions;
@property(nonatomic) BOOL hasDidTimeout;
@property(nonatomic) BOOL hasForeground;
- (int)StringAsNewMessagesState:(id)arg1;
- (id)newMessagesStateAsString:(int)arg1;
@property(nonatomic) BOOL hasNewMessagesState;
@property(nonatomic) int newMessagesState; // @synthesize newMessagesState=_newMessagesState;
- (int)StringAsTrigger:(id)arg1;
- (id)triggerAsString:(int)arg1;
@property(nonatomic) BOOL hasTrigger;
@property(nonatomic) int trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) BOOL hasMailError;
- (int)StringAsMailboxType:(id)arg1;
- (id)mailboxTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMailboxType;
@property(nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
- (int)StringAsEmailProvider:(id)arg1;
- (id)emailProviderAsString:(int)arg1;
@property(nonatomic) BOOL hasEmailProvider;
@property(nonatomic) int emailProvider; // @synthesize emailProvider=_emailProvider;
- (int)StringAsProtocol:(id)arg1;
- (id)protocolAsString:(int)arg1;
@property(nonatomic) BOOL hasProtocol;
@property(nonatomic) int protocol; // @synthesize protocol=_protocol;
@property(nonatomic) BOOL hasTimestamp;

@end

