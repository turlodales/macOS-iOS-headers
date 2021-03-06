//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBPlatformSupport <NSObject>
@property(nonatomic) BOOL hasSupportedPlatform;
@property(nonatomic) int supportedPlatform;
@property(readonly, nonatomic) BOOL hasMinimumOsVersion;
@property(copy, nonatomic) NSString *minimumOsVersion;
- (int)StringAsSupportedPlatform:(NSString *)arg1;
- (NSString *)supportedPlatformAsString:(int)arg1;
@end

