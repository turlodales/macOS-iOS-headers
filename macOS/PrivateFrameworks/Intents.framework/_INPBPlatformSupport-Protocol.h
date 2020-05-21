//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol _INPBPlatformSupport <NSObject>
@property(nonatomic) BOOL hasSupportedPlatform;
@property(nonatomic) int supportedPlatform;
@property(readonly, nonatomic) BOOL hasMinimumOsVersion;
@property(copy, nonatomic) NSString *minimumOsVersion;
- (int)StringAsSupportedPlatform:(NSString *)arg1;
- (NSString *)supportedPlatformAsString:(int)arg1;
@end

