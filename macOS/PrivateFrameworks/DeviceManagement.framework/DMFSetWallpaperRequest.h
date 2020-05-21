//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSData, NSFileHandle, NSURL;

@interface DMFSetWallpaperRequest : DMFTaskRequest
{
    NSURL *_imageURL;
    NSData *_imageData;
    long long _location;
    NSFileHandle *_fileHandle;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
- (void).cxx_destruct;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) long long location; // @synthesize location=_location;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

