//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class CLLocation, INImage, NSString;

@protocol INRideVehicleExport <NSObject, JSExport>
@property(copy) INImage *mapAnnotationImage;
@property(copy) NSString *model;
@property(copy) NSString *manufacturer;
@property(copy) NSString *registrationPlate;
@property(copy) CLLocation *location;
- (id)init;
@end

