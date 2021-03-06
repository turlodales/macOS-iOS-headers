//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface APSSystemUser : NSObject
{
    NSString *_userID;
    NSString *_status;
    BOOL _daemonUser;
}

+ (id)allConsoleUserIDs;
+ (id)systemUserWithUID:(unsigned int)arg1;
+ (id)systemUserWithUserID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)debugDescription;
@property(retain, nonatomic) NSString *status;
- (BOOL)isDaemonUser;
- (BOOL)isLoggedOut;
- (BOOL)isLoggedIn;
- (void)updateStatus;
@property(readonly, nonatomic) unsigned int uid;
- (id)initWithUserID:(id)arg1;

@end

