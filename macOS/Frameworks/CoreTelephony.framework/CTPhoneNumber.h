//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTMessageAddress.h"
#import "NSCopying.h"

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress>
{
    NSString *_digits;
    NSString *_countryCode;
    BOOL _isShortCode;
}

+ (_Bool)isValidPhoneNumber:(id)arg1;
+ (_Bool)isValidPhoneNumberChar:(unsigned short)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
@property BOOL isShortCode; // @synthesize isShortCode=_isShortCode;
@property(readonly) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly) NSString *digits; // @synthesize digits=_digits;
- (id)encodedString;
- (id)canonicalFormat;
- (id)formatForCallingCountry:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (long long)numberOfDigitsForShortCodeNumber;

@end

