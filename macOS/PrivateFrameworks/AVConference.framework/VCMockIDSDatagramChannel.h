//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDSDatagramChannel.h"

@class NSLock, VCMockIDSDataChannelLinkContext;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannel : IDSDatagramChannel
{
    VCMockIDSDataChannelLinkContext *_linkContext;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _readHandler;
    CDUnknownBlockType _readHandlerWithOptions;
    CDUnknownBlockType _writeDatagramsBlock;
    CDUnknownBlockType _writeDatagramBlock;
    CDUnknownBlockType _readyToReadBlock;
    NSLock *_blockSettingLock;
    struct _VCSingleLinkedList _datagramPackets;
    struct __CFAllocator *_datagramPacketAllocator;
    unsigned long long _datagramPacketNextSequenceNumber;
    BOOL _usingOptions;
    double _emulatedRxPLR;
}

- (void)osChannelInfoLog;
- (int)readyToRead;
- (int)underlyingFileDescriptor;
- (void)reportFirstPacketTimeForMKI:(id)arg1;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (void)setChannelPreferences:(id)arg1;
- (void)setReadHandlerWithOptions:(CDUnknownBlockType)arg1;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)start;
- (void)invalidate;
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_54fea20c *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_54fea20c)arg3 options:(CDStruct_c3727dd2 *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)readDatagramsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_54fea20c)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readDatagramWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dequeueDatagramPacket:(CDUnknownBlockType)arg1;
- (BOOL)enqueueDatagramPacket:(const void *)arg1 datagramSize:(unsigned int)arg2 options:(CDStruct_c3727dd2 *)arg3 error:(id *)arg4;
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;
- (void)readDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramOptions:(CDStruct_c3727dd2 *)arg3;
- (id)initRequiresOptions:(BOOL)arg1;

@end

