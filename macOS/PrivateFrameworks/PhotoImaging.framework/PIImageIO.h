//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PIImageIO : NSObject
{
}

+ (id)writeImage:(id)arg1 toDirectoryAtPath:(id)arg2 withBasename:(id)arg3;
+ (id)writeImage:(id)arg1 toTemporaryDirectoryWithBasename:(id)arg2;
+ (BOOL)writeCGImage:(struct CGImage *)arg1 fileURL:(id)arg2 options:(id)arg3;
+ (BOOL)writeCGImage:(struct CGImage *)arg1 fileURL:(id)arg2;
+ (BOOL)writeImage:(id)arg1 fileURL:(id)arg2;

@end

