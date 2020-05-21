//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import "NSSecureCoding.h"

@class NSURL, NWPathEvaluator;

@interface WFReachabilityConfigurationResponse : WFResponse <NSSecureCoding>
{
    NSURL *_reachabilityHostURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *reachabilityHostURL; // @synthesize reachabilityHostURL=_reachabilityHostURL;
@property(readonly, nonatomic) NWPathEvaluator *pathEvaluator;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

