//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFStringUtilities : NSObject
{
}

+ (id)descriptionForMachTimeInterval:(unsigned long long)arg1;
+ (id)descriptionForNSInterval:(unsigned long long)arg1;
+ (id)descriptionForTimeInterval:(double)arg1;
+ (id)LTRString:(id)arg1;
+ (id)stringFromFourCharCode:(unsigned int)arg1;
+ (const char *)safeCString:(id)arg1;
+ (id)mapCollection:(id)arg1 transformation:(CDUnknownBlockType)arg2;
+ (id)base64ToHexMapForBase64Strings:(id)arg1;
+ (id)hexToBase64MapForBase64Strings:(id)arg1;
+ (BOOL)isValidHexString:(id)arg1;
+ (id)base64ToHexMapForHexStrings:(id)arg1;
+ (id)hexToBase64MapForHexStrings:(id)arg1;
+ (id)dataForBase64String:(id)arg1;
+ (id)dataForHexString:(id)arg1;
+ (id)hexStringForData:(id)arg1;
+ (id)stringByRemovingInvalidXMLCharactersFromString:(id)arg1;

@end

