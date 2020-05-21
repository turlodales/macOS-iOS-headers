//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBClassicPeer, CBUUID, NSInputStream, NSOutputStream;

@interface CBRFCOMMChannel : NSObject
{
    int _socketFD;
    CBClassicPeer *_peer;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    CBUUID *_serviceUUID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CBUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, nonatomic) CBClassicPeer *peer; // @synthesize peer=_peer;
@property(readonly, nonatomic) int socketFD; // @synthesize socketFD=_socketFD;
- (id)initWithPeer:(id)arg1 info:(id)arg2;

@end

