//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLLocation, NSString;

@protocol INRestaurantExport <NSObject, JSExport>
@property(copy) NSString *restaurantIdentifier;
@property(copy) NSString *vendorIdentifier;
@property(copy) NSString *name;
@property(copy) CLLocation *location;
- (id)init;
@end

