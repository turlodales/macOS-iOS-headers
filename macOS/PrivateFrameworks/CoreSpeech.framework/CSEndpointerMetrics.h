//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface CSEndpointerMetrics : NSObject
{
    double _totalAudioRecorded;
    NSArray *_featuresAtEndpoint;
    long long _endpointerType;
    NSDictionary *_serverFeatureLatencyDistribution;
    NSDictionary *_additionalMetrics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property(retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution; // @synthesize serverFeatureLatencyDistribution=_serverFeatureLatencyDistribution;
@property(nonatomic) long long endpointerType; // @synthesize endpointerType=_endpointerType;
@property(retain, nonatomic) NSArray *featuresAtEndpoint; // @synthesize featuresAtEndpoint=_featuresAtEndpoint;
@property(nonatomic) double totalAudioRecorded; // @synthesize totalAudioRecorded=_totalAudioRecorded;
- (id)initWithTotalAudioRecorded:(double)arg1 featuresAtEndpoint:(id)arg2 endpointerType:(long long)arg3 serverFeatureLatencyDistribution:(id)arg4 additionalMetrics:(id)arg5;

@end

