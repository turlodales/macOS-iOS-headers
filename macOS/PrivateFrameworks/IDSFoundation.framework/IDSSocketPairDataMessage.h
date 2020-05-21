//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

#import "IDSSocketPairMessage.h"

@class NSData, NSDate, NSString;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage <IDSSocketPairMessage>
{
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    NSData *_data;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, nonatomic) BOOL wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property(readonly, nonatomic) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property(readonly, nonatomic) BOOL expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
@property(readonly, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(nonatomic) BOOL compressed; // @synthesize compressed=_compressed;
- (id)_nonHeaderData;
@property(readonly, nonatomic) NSData *data;
- (unsigned char)command;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8 expiryDate:(id)arg9;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

