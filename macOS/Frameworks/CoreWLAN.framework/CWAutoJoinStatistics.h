//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSError, NSNumber, NSString;

@interface CWAutoJoinStatistics : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_interfaceName;
    long long _trigger;
    NSDate *_startedAt;
    NSDate *_endedAt;
    long long _scannedChannelCount;
    double _scanDuration;
    NSArray *_joinAttempts;
    NSError *_error;
    BOOL _result;
}

+ (BOOL)supportsSecureCoding;
@property BOOL result; // @synthesize result=_result;
@property(copy) NSError *error; // @synthesize error=_error;
@property double scanDuration; // @synthesize scanDuration=_scanDuration;
@property long long scannedChannelCount; // @synthesize scannedChannelCount=_scannedChannelCount;
@property(copy) NSArray *joinAttempts; // @synthesize joinAttempts=_joinAttempts;
@property(copy) NSDate *endedAt; // @synthesize endedAt=_endedAt;
@property(copy) NSDate *startedAt; // @synthesize startedAt=_startedAt;
@property long long trigger; // @synthesize trigger=_trigger;
@property(copy) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(readonly, nonatomic) NSNumber *totalDuration;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAutoJoinStatistics:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;

@end

