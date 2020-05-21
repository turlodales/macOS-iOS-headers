//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface CRKDeviceDisplay : NSObject <NSSecureCoding>
{
    double _scaleFactor;
    unsigned long long _orientation;
    NSString *_frameString;
    struct CGRect _frame;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *frameString; // @synthesize frameString=_frameString;
@property(readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1;
- (id)initWithScaleFactor:(double)arg1 width:(double)arg2 height:(double)arg3 orientation:(unsigned long long)arg4;
- (id)initWithScaleFactor:(double)arg1 frame:(struct CGRect)arg2 orientation:(unsigned long long)arg3;

@end

