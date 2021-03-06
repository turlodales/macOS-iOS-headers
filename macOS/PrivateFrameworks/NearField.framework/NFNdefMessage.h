//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NFNdefMessage-Protocol.h>
#import <NearField/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface NFNdefMessage : NSObject <NSSecureCoding, NFNdefMessage>
{
    NSMutableArray *_records;
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addRecordArray:(id)arg1;
- (void)addRecord:(id)arg1;
- (id)asData;
- (id)decode;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *records;
- (id)initWithNDEFMessage:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

