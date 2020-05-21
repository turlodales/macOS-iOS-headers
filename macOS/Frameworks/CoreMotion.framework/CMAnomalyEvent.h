//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface CMAnomalyEvent : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _acknowledgement;
    long long _state;
    long long _response;
    long long _resolution;
    double _absoluteTimestamp;
    unsigned long long _identifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(nonatomic, getter=isAcknowledgement) BOOL acknowledgement; // @synthesize acknowledgement=_acknowledgement;
@property(nonatomic) long long resolution; // @synthesize resolution=_resolution;
@property(nonatomic) long long response; // @synthesize response=_response;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (id)debugDescription;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSDate *timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5 acknowledgement:(BOOL)arg6;
- (id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5;

@end

