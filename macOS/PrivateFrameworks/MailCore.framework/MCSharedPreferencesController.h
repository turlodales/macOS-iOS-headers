//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUserDefaults;

@interface MCSharedPreferencesController : NSObject
{
    NSUserDefaults *_sharedMailUserDefaults;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUserDefaults *sharedMailUserDefaults; // @synthesize sharedMailUserDefaults=_sharedMailUserDefaults;
- (void)_preferencesChangedExternally:(id)arg1;
- (void)_postPreferencesDidChangeNotifications;
@property(readonly) BOOL intranetDomainsManagedByProfile;
@property BOOL shouldCheckIntranetDomains;
@property(retain) NSArray *intranetDomains;
@property long long addressDisplayMode;
@property BOOL disableRemoteContent;
@property BOOL shouldExpandGroups;
@property(retain) NSString *defaultFromAddress;
- (void)dealloc;
- (id)init;

@end

