//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _SFPBColor, _SFPBLatLng;

@protocol _SFPBPin <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int pinBehavior;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *resultID;
@property(copy, nonatomic) NSString *label;
@property(retain, nonatomic) _SFPBColor *pinColor;
@property(retain, nonatomic) _SFPBLatLng *location;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

