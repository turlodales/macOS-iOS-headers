//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/NSSecureCoding-Protocol.h>

@class NSString;

@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding>
{
    unsigned long long _foregroundRefreshRate;
    unsigned long long _backgroundRefreshRate;
    unsigned long long _modThreshold;
    unsigned long long _modMax;
    NSString *_endpointURLString;
}

+ (BOOL)supportsSecureCoding;
+ (id)userSegmentationConfigurationWithConfigDict:(id)arg1 environment:(unsigned long long)arg2;
+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *endpointURLString; // @synthesize endpointURLString=_endpointURLString;
@property(readonly, nonatomic) unsigned long long modMax; // @synthesize modMax=_modMax;
@property(readonly, nonatomic) unsigned long long modThreshold; // @synthesize modThreshold=_modThreshold;
@property(readonly, nonatomic) unsigned long long backgroundRefreshRate; // @synthesize backgroundRefreshRate=_backgroundRefreshRate;
@property(readonly, nonatomic) unsigned long long foregroundRefreshRate; // @synthesize foregroundRefreshRate=_foregroundRefreshRate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithForegroundRefreshRate:(unsigned long long)arg1 backgroundRefreshRate:(unsigned long long)arg2 modThreshold:(unsigned long long)arg3 modMax:(unsigned long long)arg4 endpointURLString:(id)arg5;

@end

