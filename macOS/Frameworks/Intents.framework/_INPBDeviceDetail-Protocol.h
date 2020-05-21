//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBContact, _INPBDataString;

@protocol _INPBDeviceDetail <NSObject>
@property(readonly, nonatomic) BOOL hasProductName;
@property(retain, nonatomic) _INPBDataString *productName;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) BOOL hasDeviceOwner;
@property(retain, nonatomic) _INPBContact *deviceOwner;
@property(readonly, nonatomic) BOOL hasDeviceName;
@property(retain, nonatomic) _INPBDataString *deviceName;
@property(nonatomic) BOOL hasDeviceClass;
@property(nonatomic) int deviceClass;
@property(readonly, nonatomic) BOOL hasCategory;
@property(retain, nonatomic) _INPBDataString *category;
- (int)StringAsDeviceClass:(NSString *)arg1;
- (NSString *)deviceClassAsString:(int)arg1;
@end

