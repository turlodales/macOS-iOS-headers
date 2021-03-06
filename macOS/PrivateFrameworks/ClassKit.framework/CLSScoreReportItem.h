//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSActivityReportItem.h>

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@interface CLSScoreReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying>
{
    double _value;
    double _maxValue;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double value; // @synthesize value=_value;
- (id)dictionaryRepresentation;
- (id)description;
- (void)scalarMultiply:(double)arg1;
- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) double normalized;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)convertToItemCompatibleWithItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

