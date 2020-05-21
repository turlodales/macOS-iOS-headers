//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class FUAirline;

__attribute__((visibility("hidden")))
@interface FUFlightCodeShare : NSObject <NSSecureCoding>
{
    FUAirline *_airline;
    unsigned long long _flightNumber;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property unsigned long long flightNumber; // @synthesize flightNumber=_flightNumber;
@property(retain) FUAirline *airline; // @synthesize airline=_airline;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

