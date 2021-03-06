//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistiveControlSupport/ACSHAction.h>

@class NSImage, NSString;

@interface ACSHActionOpenApp : ACSHAction
{
    NSString *_absolutePath;
    NSString *_bundleID;
    NSString *_name;
    NSImage *_icon;
}

+ (id)actionBundleID:(id)arg1 absolutePath:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *absolutePath; // @synthesize absolutePath=_absolutePath;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)_resetDisplayValues;
- (id)resolvedPath;
- (id)name;
- (id)icon;
- (void)performWithEventSourceData:(id)arg1;
- (id)paramDictionaryForSaving;
- (void)_configureWithPlistDictionary:(id)arg1;
- (id)paramDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

