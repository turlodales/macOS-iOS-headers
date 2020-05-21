//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface REMStructuredLocation : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    double _latitude;
    double _longitude;
    double _radius;
    NSString *_address;
    NSString *_routing;
    NSString *_referenceFrameString;
    NSString *_contactLabel;
    NSData *_mapKitHandle;
    NSString *_locationUID;
}

+ (BOOL)supportsSecureCoding;
+ (double)minimumRegionMonitoringDistance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *locationUID; // @synthesize locationUID=_locationUID;
@property(copy, nonatomic) NSData *mapKitHandle; // @synthesize mapKitHandle=_mapKitHandle;
@property(copy, nonatomic) NSString *contactLabel; // @synthesize contactLabel=_contactLabel;
@property(copy, nonatomic) NSString *referenceFrameString; // @synthesize referenceFrameString=_referenceFrameString;
@property(copy, nonatomic) NSString *routing; // @synthesize routing=_routing;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)displayName;
- (id)initWithTitle:(id)arg1 locationUID:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 radius:(double)arg5 address:(id)arg6 routing:(id)arg7 referenceFrameString:(id)arg8 contactLabel:(id)arg9 mapKitHandle:(id)arg10;
- (id)initWithTitle:(id)arg1 locationUID:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isContentEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

