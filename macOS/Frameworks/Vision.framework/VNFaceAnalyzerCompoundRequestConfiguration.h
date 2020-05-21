//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNRequestConfiguration.h>

@class NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration
{
    NSDictionary *_detectorConfigurationOptions;
    NSMutableArray *_originalRequests;
    NSString *_detectorType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *detectorType; // @synthesize detectorType=_detectorType;
@property(readonly, nonatomic) NSMutableArray *originalRequests; // @synthesize originalRequests=_originalRequests;
@property(copy, nonatomic) NSDictionary *detectorConfigurationOptions; // @synthesize detectorConfigurationOptions=_detectorConfigurationOptions;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

