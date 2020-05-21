//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBPeer, NSInputStream, NSOutputStream;

@interface CBL2CAPChannel : NSObject
{
    unsigned short _PSM;
    int _socketFD;
    CBPeer *_peer;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int socketFD; // @synthesize socketFD=_socketFD;
@property(readonly, nonatomic) unsigned short PSM; // @synthesize PSM=_PSM;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, nonatomic) CBPeer *peer; // @synthesize peer=_peer;
- (id)description;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 info:(id)arg2;

@end

