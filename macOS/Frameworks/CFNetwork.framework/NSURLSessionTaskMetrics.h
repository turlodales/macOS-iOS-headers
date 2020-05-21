//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDateInterval, __CFN_TaskMetrics;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding>
{
    __CFN_TaskMetrics *__metrics;
}

+ (id)new;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) __CFN_TaskMetrics *_metrics; // @synthesize _metrics=__metrics;
- (id)description;
@property(readonly) unsigned long long redirectCount;
@property(readonly, copy) NSDateInterval *taskInterval;
@property(readonly, copy) NSArray *transactionMetrics;
- (id)initWithMetrics:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

