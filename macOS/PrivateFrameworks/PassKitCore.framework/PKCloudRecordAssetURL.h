//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKCloudRecordObject.h>

@class NSData;

@interface PKCloudRecordAssetURL : PKCloudRecordObject
{
    int _fd;
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(BOOL)arg1;
- (id)description;
- (id)descriptionWithItem:(BOOL)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)assetData;
- (void)dealloc;
- (id)initWithRecords:(id)arg1;

@end

