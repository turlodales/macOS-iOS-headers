//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@interface SMIncompatibleAppFolderData : NSObject
{
    NSArray *_appFolderData;
    NSURL *_filePath;
}

+ (id)appFolderDataFilePathWithIncompatibleAppFolder:(id)arg1;
+ (id)localizedStringForKey:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSURL *filePath; // @synthesize filePath=_filePath;
@property(retain) NSArray *appFolderData; // @synthesize appFolderData=_appFolderData;
- (BOOL)removeDataFile;
- (BOOL)flushToDisk;
- (unsigned long long)itemCount;
- (id)initWithFolderPath:(id)arg1;

@end

