//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface SOSiteCode : NSObject <NSSecureCoding>
{
    NSString *_code;
    NSDate *_timeStamp;
    NSString *_networkFingerprint;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *networkFingerprint; // @synthesize networkFingerprint=_networkFingerprint;
@property(readonly, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, nonatomic) NSString *code; // @synthesize code=_code;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)age;
- (id)description;
- (id)initWithSiteCode:(id)arg1 forNetworkFingerprint:(id)arg2;

@end

