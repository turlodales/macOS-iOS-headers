//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class CLPlacemark, INRideCompletionStatus, INRideDriver, INRideOption, INRideVehicle, NSArray, NSDate, NSString, NSUserActivity;

@protocol INRideStatusExport <NSObject, JSExport>
@property(copy) NSArray *additionalActionActivities;
@property(retain) NSUserActivity *userActivityForCancelingInApplication;
@property(copy) INRideOption *rideOption;
@property(copy) CLPlacemark *dropOffLocation;
@property(copy) NSArray *waypoints;
@property(copy) CLPlacemark *pickupLocation;
@property(copy) NSDate *estimatedPickupEndDate;
@property(copy) NSDate *estimatedDropOffDate;
@property(copy) NSDate *estimatedPickupDate;
@property(copy) INRideDriver *driver;
@property(copy) INRideVehicle *vehicle;
@property(copy) INRideCompletionStatus *completionStatus;
@property long long phase;
@property(copy) NSString *rideIdentifier;
- (id)init;
@end

