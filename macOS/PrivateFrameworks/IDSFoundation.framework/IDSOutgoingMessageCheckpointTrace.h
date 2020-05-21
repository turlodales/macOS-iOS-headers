//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CUTCheckpointTrace.h"

@class CUTCheckpointRange, IDSPeerMessageCheckpointTrace, NSString;

@interface IDSOutgoingMessageCheckpointTrace : CUTCheckpointTrace
{
    NSString *_guid;
    NSString *_service;
    long long _command;
    long long _priority;
    CUTCheckpointRange *_sendToDaemon;
    CUTCheckpointRange *_storeInDatabase;
    CUTCheckpointRange *_compressPayload;
    IDSPeerMessageCheckpointTrace *_peerMessageTrace;
    unsigned long long _uncompressedMessageSize;
    unsigned long long _compressedMessageSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long compressedMessageSize; // @synthesize compressedMessageSize=_compressedMessageSize;
@property(nonatomic) unsigned long long uncompressedMessageSize; // @synthesize uncompressedMessageSize=_uncompressedMessageSize;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long command; // @synthesize command=_command;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) IDSPeerMessageCheckpointTrace *peerMessageTrace; // @synthesize peerMessageTrace=_peerMessageTrace;
@property(readonly, nonatomic) CUTCheckpointRange *compressPayload; // @synthesize compressPayload=_compressPayload;
@property(readonly, nonatomic) CUTCheckpointRange *storeInDatabase; // @synthesize storeInDatabase=_storeInDatabase;
@property(readonly, nonatomic) CUTCheckpointRange *sendToDaemon; // @synthesize sendToDaemon=_sendToDaemon;
- (id)_reportMetadata;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithGuid:(id)arg1 service:(id)arg2 command:(long long)arg3 priority:(long long)arg4;

@end

