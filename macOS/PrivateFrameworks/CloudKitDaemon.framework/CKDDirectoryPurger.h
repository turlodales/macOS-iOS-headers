//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CKDDirectoryPurger : NSObject
{
    CDUnknownBlockType _shouldSkipFileBlock;
    CDUnknownBlockType _shouldRemoveFileBlock;
    NSArray *_paths;
}

+ (void)purgeDirectoryAtPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(copy, nonatomic) CDUnknownBlockType shouldRemoveFileBlock; // @synthesize shouldRemoveFileBlock=_shouldRemoveFileBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldSkipFileBlock; // @synthesize shouldSkipFileBlock=_shouldSkipFileBlock;
- (void)purge;
- (id)initWithPaths:(id)arg1;

@end

