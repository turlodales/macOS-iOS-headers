//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore;

@interface MFPersistenceMigratorV4 : NSObject
{
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)_upgradeSyncedFilesInfo;
- (id)_upgradeLocalAccountOutbox;
- (void)_moveAccountDirectories;
- (void)migrate;
- (id)init;

@end

