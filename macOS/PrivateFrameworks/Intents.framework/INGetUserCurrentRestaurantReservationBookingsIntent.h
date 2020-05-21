//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INGetUserCurrentRestaurantReservationBookingsIntentExport.h"
#import "NSCopying.h"

@class INRestaurant, NSDate, NSNumber, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying>
{
    INRestaurant *_restaurant;
    NSString *_reservationIdentifier;
    NSNumber *_maximumNumberOfResults;
    NSDate *_earliestBookingDateForResults;
}

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSDate *earliestBookingDateForResults; // @synthesize earliestBookingDateForResults=_earliestBookingDateForResults;
@property(copy) NSNumber *maximumNumberOfResults; // @synthesize maximumNumberOfResults=_maximumNumberOfResults;
@property(copy) NSString *reservationIdentifier; // @synthesize reservationIdentifier=_reservationIdentifier;
@property(copy) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 reservationIdentifier:(id)arg2 maximumNumberOfResults:(id)arg3 earliestBookingDateForResults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

