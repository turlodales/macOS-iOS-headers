//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNVCardADRParser : NSObject
{
}

+ (id)countryCodeForLine:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3;
+ (void)processExtensionValuesForLines:(id)arg1 validCountryCodes:(id)arg2 parser:(id)arg3;
+ (id)addressValueWithPrimaryAddress:(id)arg1 extendedAddress:(id)arg2 poBox:(id)arg3;
+ (void)collectStreetAddressComponentsIntoSingleKeyInAddress:(id)arg1;
+ (BOOL)parseNextStringWithParser:(id)arg1 components:(id)arg2 key:(id)arg3;
+ (id)parseStreetAddressComponentsWithParser:(id)arg1;
+ (id)valueWithParser:(id)arg1;

@end

