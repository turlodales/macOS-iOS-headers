//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSFavoriteColorsStore.h>

#import "NSFavoriteColorsStoreConcreteSubclass.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface _NSLibraryArchiveFavoriteColorsStore : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass>
{
    NSURL *_fileURL;
}

- (id)colorsFromBacking;
- (BOOL)writeColorsToBacking:(id)arg1;
- (void)postDistributedNotification;
- (void)remoteColorsDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFileURL:(id)arg1;

@end

