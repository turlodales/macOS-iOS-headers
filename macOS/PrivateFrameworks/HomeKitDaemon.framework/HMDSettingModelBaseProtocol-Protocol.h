//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol HMDSettingModelBaseProtocol <NSObject>
@property(readonly, nonatomic) NSString *nameForKeyPath;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(readonly, nonatomic) NSUUID *hmbModelID;
- (id)copyWithNewParentModelID:(NSUUID *)arg1;
@end

