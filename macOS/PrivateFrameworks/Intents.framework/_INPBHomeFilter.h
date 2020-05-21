//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBHomeFilter.h"

@class NSArray, NSString, _INPBDataString;

@interface _INPBHomeFilter : PBCodable <_INPBHomeFilter, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int deviceType:1;
        unsigned int entityType:1;
        unsigned int isExcludeFilter:1;
        unsigned int outerDeviceType:1;
        unsigned int serviceType:1;
        unsigned int subServiceType:1;
    } _has;
    BOOL _isExcludeFilter;
    BOOL __encodeLegacyGloryData;
    int _deviceType;
    int _entityType;
    int _outerDeviceType;
    int _serviceType;
    int _subServiceType;
    _INPBDataString *_accessory;
    NSArray *_entityIdentifiers;
    _INPBDataString *_entityName;
    _INPBDataString *_group;
    _INPBDataString *_home;
    _INPBDataString *_outerDeviceName;
    _INPBDataString *_room;
    _INPBDataString *_scene;
    _INPBDataString *_service;
    _INPBDataString *_zone;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBDataString *zone; // @synthesize zone=_zone;
@property(nonatomic) int subServiceType; // @synthesize subServiceType=_subServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) _INPBDataString *service; // @synthesize service=_service;
@property(retain, nonatomic) _INPBDataString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) _INPBDataString *room; // @synthesize room=_room;
@property(nonatomic) int outerDeviceType; // @synthesize outerDeviceType=_outerDeviceType;
@property(retain, nonatomic) _INPBDataString *outerDeviceName; // @synthesize outerDeviceName=_outerDeviceName;
@property(nonatomic) BOOL isExcludeFilter; // @synthesize isExcludeFilter=_isExcludeFilter;
@property(retain, nonatomic) _INPBDataString *home; // @synthesize home=_home;
@property(retain, nonatomic) _INPBDataString *group; // @synthesize group=_group;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _INPBDataString *entityName; // @synthesize entityName=_entityName;
@property(copy, nonatomic) NSArray *entityIdentifiers; // @synthesize entityIdentifiers=_entityIdentifiers;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) _INPBDataString *accessory; // @synthesize accessory=_accessory;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasZone;
- (int)StringAsSubServiceType:(id)arg1;
- (id)subServiceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSubServiceType;
- (int)StringAsServiceType:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasServiceType;
@property(readonly, nonatomic) BOOL hasService;
@property(readonly, nonatomic) BOOL hasScene;
@property(readonly, nonatomic) BOOL hasRoom;
- (int)StringAsOuterDeviceType:(id)arg1;
- (id)outerDeviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasOuterDeviceType;
@property(readonly, nonatomic) BOOL hasOuterDeviceName;
@property(nonatomic) BOOL hasIsExcludeFilter;
@property(readonly, nonatomic) BOOL hasHome;
@property(readonly, nonatomic) BOOL hasGroup;
- (int)StringAsEntityType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasEntityType;
@property(readonly, nonatomic) BOOL hasEntityName;
- (id)entityIdentifiersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entityIdentifiersCount;
- (void)addEntityIdentifiers:(id)arg1;
- (void)clearEntityIdentifiers;
- (int)StringAsDeviceType:(id)arg1;
- (id)deviceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDeviceType;
@property(readonly, nonatomic) BOOL hasAccessory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

