//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SANPMoveOutputGroupToDevices : SABaseClientBoundCommand
{
}

+ (id)moveOutputGroupToDevicesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)moveOutputGroupToDevices;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *groupID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

