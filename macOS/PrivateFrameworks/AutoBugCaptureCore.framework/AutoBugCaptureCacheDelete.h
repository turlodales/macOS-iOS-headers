//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DiagnosticStorageManager, NSString;

__attribute__((visibility("hidden")))
@interface AutoBugCaptureCacheDelete : NSObject
{
    NSString *logArchivePath;
    DiagnosticStorageManager *_storageManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DiagnosticStorageManager *storageManager; // @synthesize storageManager=_storageManager;
- (void)registerCallbacks:(const char *)arg1;
- (unsigned long long)allowableDiskUsageSizeForUrgency:(int)arg1;
- (id)cacheDeletePeriodicWithInfo:(struct __CFDictionary *)arg1;
- (id)cacheDeletePurgeWithUrgency:(int)arg1 info:(struct __CFDictionary *)arg2;
- (id)cacheDeletePurgeableWithUrgency:(int)arg1 info:(struct __CFDictionary *)arg2;
- (id)replyCacheDeleteDictionaryWithCDInfo:(id)arg1 amount:(unsigned long long)arg2;
- (id)initWithStorageManager:(id)arg1;

@end

