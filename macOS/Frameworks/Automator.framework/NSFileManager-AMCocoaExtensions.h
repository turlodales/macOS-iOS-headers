//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@class NSArray;

@interface NSFileManager (AMCocoaExtensions)
+ (id)am_cachedNumberFormatter;
- (BOOL)am_createDirectoryAtPath:(id)arg1;
- (id)am_fileURLForBaseName:(id)arg1 extension:(id)arg2 isDuplicate:(BOOL)arg3 number:(long long *)arg4 unique:(BOOL)arg5 directoryURL:(id)arg6;
@property(readonly, nonatomic) NSArray *am_mountedLocalVolumePaths;
@end

