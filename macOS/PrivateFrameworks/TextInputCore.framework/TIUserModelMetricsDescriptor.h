//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TIUserModelMetricsDescriptor : NSObject
{
    NSString *_name;
    NSArray *_counterNames;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *counterNames; // @synthesize counterNames=_counterNames;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)initWithMetricName:(id)arg1 counterNames:(id)arg2;

@end

