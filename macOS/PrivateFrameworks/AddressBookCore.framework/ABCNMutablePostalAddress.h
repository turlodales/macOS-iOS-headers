//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBookCore/ABCNPostalAddress.h>

@class NSString;

@interface ABCNMutablePostalAddress : ABCNPostalAddress
{
}

@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(copy, nonatomic) NSString *postalCode; // @dynamic postalCode;
@property(copy, nonatomic) NSString *state; // @dynamic state;
@property(copy, nonatomic) NSString *subAdministrativeArea; // @dynamic subAdministrativeArea;
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(copy, nonatomic) NSString *subLocality; // @dynamic subLocality;
@property(copy, nonatomic) NSString *street; // @dynamic street;
- (id)freeze;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

