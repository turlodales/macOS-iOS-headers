//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDouble, _INPBInteger, _INPBValueMetadata;

@protocol _INPBWellnessValue <NSObject>
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) BOOL hasOrdinalValue;
@property(retain, nonatomic) _INPBInteger *ordinalValue;
@property(readonly, nonatomic) BOOL hasPbDoubleValue;
@property(retain, nonatomic) _INPBDouble *pbDoubleValue;
@end

