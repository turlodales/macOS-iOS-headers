//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASDCellularSettings : NSObject
{
    NSString *_defaultsKey;
}

+ (id)settingsForIdentity:(id)arg1;
- (void).cxx_destruct;
- (id)_cellularSettings;
@property(nonatomic) long long cellularDataPrompt;
@property(nonatomic) BOOL allowAutomaticDownloads;
- (id)initWithDefaultsKey:(id)arg1;

@end

