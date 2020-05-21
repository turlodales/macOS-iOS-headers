//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INRestaurant, NSDate, NSDateComponents, NSNumber;

@protocol INGetAvailableRestaurantReservationBookingsIntentExport <NSObject, JSExport>
@property(copy) NSDate *latestBookingDateForResults;
@property(copy) NSDate *earliestBookingDateForResults;
@property(copy) NSNumber *maximumNumberOfResults;
@property(copy) NSDateComponents *preferredBookingDateComponents;
@property unsigned long long partySize;
@property(copy) INRestaurant *restaurant;
- (id)init;
@end

