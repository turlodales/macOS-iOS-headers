//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSString;

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject
{
}

+ (id)properties;
+ (id)defaultModelForHome:(id)arg1;
+ (id)modelIDForHome:(id)arg1;
+ (id)modelNamespace;

// Remaining properties
@property(copy, nonatomic) NSString *mediaPassword; // @dynamic mediaPassword;
@property(copy, nonatomic) NSNumber *mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
@property(copy, nonatomic) NSNumber *minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;

@end

