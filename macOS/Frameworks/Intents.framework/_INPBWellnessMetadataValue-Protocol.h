//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBDouble, _INPBInteger, _INPBString;

@protocol _INPBWellnessMetadataValue <NSObject>
@property(readonly, nonatomic) BOOL hasPbStringValue;
@property(retain, nonatomic) _INPBString *pbStringValue;
@property(readonly, nonatomic) BOOL hasOrdinalValue;
@property(retain, nonatomic) _INPBInteger *ordinalValue;
@property(readonly, nonatomic) BOOL hasPbDoubleValue;
@property(retain, nonatomic) _INPBDouble *pbDoubleValue;
@end

