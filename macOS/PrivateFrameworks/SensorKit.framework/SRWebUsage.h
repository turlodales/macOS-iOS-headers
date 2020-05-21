//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "SRSampleExporting.h"

@class NSString;

@interface SRWebUsage : NSObject <SRSampleExporting, NSSecureCoding>
{
    double _totalUsageTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)webUsageWithTotalUsageTime:(double)arg1;
@property double totalUsageTime; // @synthesize totalUsageTime=_totalUsageTime;
@property(readonly, copy) NSString *description;
- (id)sr_dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

