//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface CDSBasisObject : NSObject
{
    unsigned long long _localTime;
    NSDate *_creationDate;
    NSString *_basisValueString;
    unsigned long long _basisUint64Value;
    double _basisDoubleValue;
    unsigned long long _attributeId;
    BOOL _risingEdge;
    BOOL _fallingEdge;
    double _duration;
    long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long attributeId; // @synthesize attributeId=_attributeId;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL fallingEdge; // @synthesize fallingEdge=_fallingEdge;
@property(nonatomic) BOOL risingEdge; // @synthesize risingEdge=_risingEdge;
@property(nonatomic) double basisDoubleValue; // @synthesize basisDoubleValue=_basisDoubleValue;
@property(nonatomic) unsigned long long basisUint64Value; // @synthesize basisUint64Value=_basisUint64Value;
@property(retain, nonatomic) NSString *basisValueString; // @synthesize basisValueString=_basisValueString;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) unsigned long long localTime; // @synthesize localTime=_localTime;
- (id)initWithLocalTime:(unsigned long long)arg1 creationDate:(id)arg2 basisValueString:(id)arg3 basisUint64Value:(unsigned long long)arg4 basisDoubleValue:(double)arg5 risingEdge:(BOOL)arg6 fallingEdge:(BOOL)arg7 duration:(double)arg8 attributeId:(unsigned long long)arg9 type:(long long)arg10;

@end

