//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString, NSURL;

@interface C2MetricOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _anonymous;
    BOOL _pushTrigger;
    unsigned int _reportFrequencyRandomValue;
    NSURL *_c2MetricsEndpoint;
    unsigned long long _reportFrequency;
    unsigned long long _reportFrequencyBase;
    unsigned long long _reportClientOperationFrequency;
    unsigned long long _reportClientOperationFrequencyBase;
    unsigned long long _reportOperationGroupFrequency;
    unsigned long long _reportOperationGroupFrequencyBase;
    NSString *_clientProcessVersion;
    NSString *_clientProcessBundleId;
    NSString *_container;
    NSString *_environment;
    NSArray *_operationGroups;
    NSArray *_clientOperations;
    CDUnknownBlockType _didCompleteWithError;
    CDUnknownBlockType _testBehavior_reportMetric;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType testBehavior_reportMetric; // @synthesize testBehavior_reportMetric=_testBehavior_reportMetric;
@property(nonatomic) unsigned int reportFrequencyRandomValue; // @synthesize reportFrequencyRandomValue=_reportFrequencyRandomValue;
@property(copy, nonatomic) CDUnknownBlockType didCompleteWithError; // @synthesize didCompleteWithError=_didCompleteWithError;
@property(nonatomic) BOOL pushTrigger; // @synthesize pushTrigger=_pushTrigger;
@property(copy, nonatomic) NSArray *clientOperations; // @synthesize clientOperations=_clientOperations;
@property(copy, nonatomic) NSArray *operationGroups; // @synthesize operationGroups=_operationGroups;
@property(nonatomic) BOOL anonymous; // @synthesize anonymous=_anonymous;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *container; // @synthesize container=_container;
@property(copy, nonatomic) NSString *clientProcessBundleId; // @synthesize clientProcessBundleId=_clientProcessBundleId;
@property(copy, nonatomic) NSString *clientProcessVersion; // @synthesize clientProcessVersion=_clientProcessVersion;
@property(nonatomic) unsigned long long reportOperationGroupFrequencyBase; // @synthesize reportOperationGroupFrequencyBase=_reportOperationGroupFrequencyBase;
@property(nonatomic) unsigned long long reportOperationGroupFrequency; // @synthesize reportOperationGroupFrequency=_reportOperationGroupFrequency;
@property(nonatomic) unsigned long long reportClientOperationFrequencyBase; // @synthesize reportClientOperationFrequencyBase=_reportClientOperationFrequencyBase;
@property(nonatomic) unsigned long long reportClientOperationFrequency; // @synthesize reportClientOperationFrequency=_reportClientOperationFrequency;
@property(nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property(nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property(copy, nonatomic) NSURL *c2MetricsEndpoint; // @synthesize c2MetricsEndpoint=_c2MetricsEndpoint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)operationGroupTriggered:(id)arg1;
- (BOOL)clientOperationTriggered:(id)arg1;
@property(readonly, nonatomic) NSString *headerValueForTriggers;
- (int)generateTriggerWithResponseHeader:(unsigned char)arg1;
- (id)generateCloudKitInfo;
- (void)rollReportFrequencyRandomValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

