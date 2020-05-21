//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IPAColorSyncUtil : NSObject
{
}

+ (id)checksumForColorSpace:(struct CGColorSpace *)arg1;
+ (struct CGColorSpace *)newCanonicalColorSpace:(struct CGColorSpace *)arg1;
+ (struct CGColorSpace *)newLinearizedColorSpace:(struct CGColorSpace *)arg1;
+ (void)replaceProfile:(struct ColorSyncProfile *)arg1 name:(const char *)arg2;
+ (BOOL)parseHeaderForColorSyncProfile:(struct ColorSyncProfile *)arg1 outProfileClass:(id *)arg2 outColorSpaceType:(id *)arg3 outPCS:(id *)arg4;
+ (struct ColorSyncProfile *)newColorSyncProfileFromCGColorSpace:(struct CGColorSpace *)arg1;

@end

