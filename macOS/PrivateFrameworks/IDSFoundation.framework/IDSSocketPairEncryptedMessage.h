//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage
{
    NSData *_data;
}

- (void).cxx_destruct;
- (id)_nonHeaderData;
@property(readonly, nonatomic) NSData *data;
- (unsigned char)command;
- (id)initWithData:(id)arg1;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;

@end

