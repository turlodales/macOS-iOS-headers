//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface IMGroupBlacklistManager : NSObject
{
    NSDate *_lastModifiedDate;
}

+ (id)sharedInstance;
+ (id)groupsBlacklistFilename;
- (void).cxx_destruct;
@property(retain) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
- (void)reloadIfNeeded;
- (void)_updateLastModifiedDate:(id)arg1;
- (void)loadFromFile:(id)arg1;
- (void)loadData;
- (void)save;
- (BOOL)isFeatureDisabled;
- (BOOL)isGroupInBlacklist:(id)arg1;
- (void)blacklistGroupId:(id)arg1;
- (BOOL)hasFileChanged;
- (id)initFromFile:(id)arg1;
- (id)init;

@end

