//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCentral, CBCharacteristic, NSData, NSMutableData, NSNumber;

@interface CBATTRequest : NSObject
{
    NSMutableData *_value;
    BOOL _ignoreResponse;
    CBCentral *_central;
    CBCharacteristic *_characteristic;
    unsigned long long _offset;
    NSNumber *_transactionID;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL ignoreResponse; // @synthesize ignoreResponse=_ignoreResponse;
@property(readonly, nonatomic) NSNumber *transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) CBCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) CBCentral *central; // @synthesize central=_central;
@property(copy) NSData *value; // @synthesize value=_value;
- (id)description;
- (void)appendValueData:(id)arg1;
- (unsigned long long)endOffset;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 transactionID:(id)arg4;

@end

