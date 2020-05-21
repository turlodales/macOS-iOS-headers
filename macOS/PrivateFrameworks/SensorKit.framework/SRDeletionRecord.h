//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SRSampleExporting.h"
#import "SRSampling.h"

@class NSString;

@interface SRDeletionRecord : NSObject <SRSampleExporting, SRSampling, NSSecureCoding>
{
    double _startTime;
    double _endTime;
    long long _reason;
}

+ (BOOL)supportsSecureCoding;
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3;
+ (void)initialize;
@property long long reason; // @synthesize reason=_reason;
@property double endTime; // @synthesize endTime=_endTime;
@property double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy) NSString *description;
- (id)sr_dictionaryRepresentation;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

