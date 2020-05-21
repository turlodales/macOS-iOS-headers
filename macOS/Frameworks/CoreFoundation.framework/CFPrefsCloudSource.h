//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/CFPrefsPlistSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsCloudSource : CFPrefsPlistSource
{
    const char *_configPath;
    const char *_storeName;
    BOOL _enabled;
}

- (void)dealloc;
- (void)setStoreName:(struct __CFString *)arg1;
- (void)setConfigurationPath:(struct __CFString *)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1 sourceDictionary:(struct __CFDictionary *)arg2 cloudKeyEvaluator:(CDUnknownBlockType)arg3;
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)alreadylocked_updateObservingRemoteChanges;
- (id)createSynchronizeMessage;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(BOOL)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;

@end

