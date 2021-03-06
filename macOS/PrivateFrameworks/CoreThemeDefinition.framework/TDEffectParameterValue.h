//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSColor, NSNumber, TDEffectComponent, TDEffectParameterType;

@interface TDEffectParameterValue : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingBlueComponent;
+ (id)keyPathsForValuesAffectingGreenComponent;
+ (id)keyPathsForValuesAffectingRedComponent;
+ (id)keyPathsForValuesAffectingColor;
@property(nonatomic) unsigned long long blueComponent;
@property(nonatomic) unsigned long long greenComponent;
@property(nonatomic) unsigned long long redComponent;
@property(copy, nonatomic) NSColor *color;

// Remaining properties
@property(retain, nonatomic) NSNumber *angleValue; // @dynamic angleValue;
@property(retain, nonatomic) NSNumber *colorValue; // @dynamic colorValue;
@property(retain, nonatomic) TDEffectComponent *component; // @dynamic component;
@property(retain, nonatomic) NSNumber *floatValue; // @dynamic floatValue;
@property(retain, nonatomic) NSNumber *intValue; // @dynamic intValue;
@property(retain, nonatomic) TDEffectParameterType *parameterType; // @dynamic parameterType;

@end

