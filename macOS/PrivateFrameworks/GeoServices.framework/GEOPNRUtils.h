//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPNRUtils : NSObject
{
}

+ (id)_currentLocale;
+ (id)_preferredLanguages;
+ (id)_currentCountry;
+ (id)_cacheDirectoryPath;
+ (BOOL)_createCachesDirectory;
+ (id)_cachesPathForFileBaseName:(id)arg1 fileExtension:(id)arg2;
+ (id)_frameworkPathForFileBaseName:(id)arg1 fileExtension:(id)arg2;
+ (BOOL)_isValidPhoneNumber:(id)arg1;
+ (id)_stringByStrippingFormattingAndNotVisiblyAllowable:(id)arg1;
+ (id)_countryCodeForInternationalCode:(id)arg1;
+ (id)_internationalCodeForCountryCode:(id)arg1;
+ (id)PNRZippedStringsSuffix;
+ (id)PNRStringsSuffix;
+ (id)PNRZippedTrieSuffix;
+ (id)PNRTrieSuffix;
+ (id)alePackDirectory;
+ (id)versionFilePath;

@end

