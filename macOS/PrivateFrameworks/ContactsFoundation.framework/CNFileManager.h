//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager;

@interface CNFileManager : NSObject
{
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3;
- (id)initWithFileManager:(id)arg1;
- (id)init;

@end

