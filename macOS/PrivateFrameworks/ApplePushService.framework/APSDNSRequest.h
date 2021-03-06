//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ApplePushService/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface APSDNSRequest : NSObject <NSSecureCoding>
{
    NSString *_hostname;
    double _timeout;
    CDUnknownBlockType _responseBlock;
    NSString *_environment;
    long long _flags;
    NSDate *_requestStartTime;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, copy) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostname:(id)arg1 timeoutInSeconds:(double)arg2 requestFlags:(long long)arg3 responseBlock:(CDUnknownBlockType)arg4;

@end

