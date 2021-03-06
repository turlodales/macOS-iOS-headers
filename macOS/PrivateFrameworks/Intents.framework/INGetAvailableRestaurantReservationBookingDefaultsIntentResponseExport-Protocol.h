//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INImage, NSDate, NSNumber;

@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <NSObject, JSExport>
@property(copy) INImage *providerImage;
@property(copy) NSNumber *minimumPartySize;
@property(copy) NSNumber *maximumPartySize;
@property(readonly, copy) NSDate *defaultBookingDate;
@property(readonly) unsigned long long defaultPartySize;
- (id)init;
@end

