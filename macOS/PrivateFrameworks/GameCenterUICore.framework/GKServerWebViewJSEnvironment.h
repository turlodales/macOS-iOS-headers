//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKServerWebViewJSEnvironment : NSObject
{
}

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
@property(readonly, nonatomic) NSString *dateFieldsOrder;
@property(readonly, nonatomic) NSString *client;
@property(readonly, nonatomic) NSString *osBuild;
@property(readonly, nonatomic) int osRevision;
@property(readonly, nonatomic) int osMinorVersion;
@property(readonly, nonatomic) int osMajorVersion;
@property(readonly, nonatomic) NSString *device;
@property(readonly, nonatomic) NSString *platform;
@property(readonly, nonatomic) NSString *udid;
- (id)attributeKeys;

@end

