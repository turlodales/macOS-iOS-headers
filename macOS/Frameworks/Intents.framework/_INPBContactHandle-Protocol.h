//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _INPBContactHandle <NSObject>
@property(readonly, nonatomic) BOOL hasValue;
@property(copy, nonatomic) NSString *value;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasLabel;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) BOOL hasEmergencyType;
@property(nonatomic) int emergencyType;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
- (int)StringAsEmergencyType:(NSString *)arg1;
- (NSString *)emergencyTypeAsString:(int)arg1;
@end

