//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString, SALocation;

@interface SALocalSearchVehicleEventCreate : SADomainCommand
{
}

+ (id)vehicleEventCreateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)vehicleEventCreate;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *notes;
@property(retain, nonatomic) SALocation *location;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

