//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableArray;

@interface TKSmartCardATR : NSObject
{
    NSMutableArray *_interfaces;
    NSData *_bytes;
    NSData *_historicalBytes;
}

@property(readonly, nonatomic) NSData *historicalBytes; // @synthesize historicalBytes=_historicalBytes;
@property(readonly, nonatomic) NSData *bytes; // @synthesize bytes=_bytes;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *historicalRecords;
- (id)description;
- (id)_formatHexData:(id)arg1 to:(id)arg2;
@property(readonly, nonatomic) NSArray *protocols;
- (id)interfaceGroupForProtocol:(unsigned long long)arg1;
- (id)interfaceGroupAtIndex:(long long)arg1;
- (id)parseFromSource:(CDUnknownBlockType)arg1;
- (id)initWithSource:(CDUnknownBlockType)arg1;
- (id)initWithBytes:(id)arg1;

@end

