//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, PKCloudStoreRecord;

@protocol PKCloudStoreCoding <NSSecureCoding>
- (unsigned long long)itemType;
- (NSArray *)recordTypesAndNamesIncludingServerData:(BOOL)arg1;
- (void)encodeWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
- (id)initWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;

@optional
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(PKCloudStoreRecord *)arg1;
@end

