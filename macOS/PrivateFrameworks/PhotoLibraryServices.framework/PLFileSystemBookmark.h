//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSString, NSURL, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject
{
    NSURL *_fileSystemURL;
}

+ (id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2;
+ (id)entityName;
- (void).cxx_destruct;
- (id)fileSystemURL;
- (BOOL)supportsCloudUpload;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(retain, nonatomic) NSData *bookmarkData; // @dynamic bookmarkData;
@property(retain, nonatomic) NSString *pathRelativeToVolume; // @dynamic pathRelativeToVolume;
@property(retain, nonatomic) PLInternalResource *resource; // @dynamic resource;

@end

