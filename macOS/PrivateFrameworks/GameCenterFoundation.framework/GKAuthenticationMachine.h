//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface GKAuthenticationMachine : NSObject <NSCoding>
{
    long long _loginCancelledCount;
    NSString *_accountName;
    long long _serverEnvironment;
}

+ (void)migratePreSundanceAccountInformation;
+ (void)migratePreBlacktailAccountInformation;
+ (id)authMachineForEnvironment:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long serverEnvironment; // @synthesize serverEnvironment=_serverEnvironment;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) long long loginCancelledCount; // @synthesize loginCancelledCount=_loginCancelledCount;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

