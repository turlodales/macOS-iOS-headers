//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookUtility/BUEncodedBlockInfo-Protocol.h>

@class NSString;

@interface BUEncodedBlockInfoInternal : NSObject <BUEncodedBlockInfo>
{
    unsigned long long _encodedLength;
}

@property(readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long decodedLength;
- (id)initWithEncodedLength:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

