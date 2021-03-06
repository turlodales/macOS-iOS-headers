//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _MLNetworkOptions : NSObject
{
    NSMutableDictionary *_networkOptions;
    long long _receiveTimeout;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long receiveTimeout; // @synthesize receiveTimeout=_receiveTimeout;
@property(readonly, nonatomic) NSMutableDictionary *networkOptions; // @synthesize networkOptions=_networkOptions;
- (long long)receiveTimeoutValue;
- (const char *)port;
- (const char *)networkNameIdentifier;
- (const char *)localPort;
- (const char *)localAddr;
- (const char *)psk;
- (unsigned long long)family;
- (BOOL)useTLS;
- (BOOL)useUDP;
- (BOOL)useBonjour;
- (BOOL)useAWDL;
- (id)initWithOptions:(id)arg1;

@end

