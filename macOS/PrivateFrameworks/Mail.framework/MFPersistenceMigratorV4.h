//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

