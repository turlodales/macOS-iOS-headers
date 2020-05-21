//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

#import "IDSSocketPairMessage.h"

@class NSData, NSDate, NSString;

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage <IDSSocketPairMessage>
{
    unsigned long long _offset;
    unsigned int _fragmentedMessageID;
    unsigned int _fragmentIndex;
    unsigned int _totalFragmentCount;
    NSData *_data;
}

+ (id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentSize:(unsigned int)arg3;
+ (id)createOriginalMessageFromFragmentedMessages:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int totalFragmentCount; // @synthesize totalFragmentCount=_totalFragmentCount;
@property(readonly, nonatomic) unsigned int fragmentIndex; // @synthesize fragmentIndex=_fragmentIndex;
@property(readonly, nonatomic) unsigned int fragmentedMessageID; // @synthesize fragmentedMessageID=_fragmentedMessageID;
- (id)_nonHeaderData;
@property(readonly, nonatomic) NSData *data;
- (unsigned char)command;
- (id)description;
- (id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentIndex:(unsigned int)arg3 totalFragmentCount:(unsigned int)arg4;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL expectsPeerResponse;
@property(retain, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSString *messageUUID;
@property(readonly, nonatomic) NSString *peerResponseIdentifier;
@property(nonatomic) unsigned int sequenceNumber;
@property(nonatomic) unsigned short streamID;
@property(readonly, nonatomic) BOOL wantsAppAck;

@end

