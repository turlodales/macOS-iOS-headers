//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ASBGroupContainer : NSObject
{
    NSString *_groupName;
    NSString *_containerPath;
}

+ (id)containerForApplicationGroupIdentifier:(id)arg1 inBaseDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)containerURLForApplicationGroupIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSURL *dataURL;
- (BOOL)upgradeAndReturnError:(id *)arg1;
- (BOOL)hasLatestSchema;
- (id)initWithApplicationGroupIdentifier:(id)arg1 inBaseDirectory:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;

@end

