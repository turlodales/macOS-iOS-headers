//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface GEORequestCounterInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_requestTypeStatistics;
    unsigned long long _bytesTransmitted;
    unsigned long long _bytesReceived;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)_formattedString;
- (void)encodeWithCoder:(id)arg1;
- (id)nonZeroResultTypesForType:(unsigned char)arg1;
- (unsigned long long)numberOfRequestsForType:(unsigned char)arg1 result:(unsigned char)arg2;
@property(readonly, nonatomic) NSArray *requestTypes;
- (unsigned long long)recvBytesForType:(unsigned char)arg1;
- (unsigned long long)recvBytes;
- (unsigned long long)xmitBytesForType:(unsigned char)arg1;
- (unsigned long long)xmitBytes;
- (BOOL)isEqual:(id)arg1;
- (void)_generateAggregateStatistics;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

