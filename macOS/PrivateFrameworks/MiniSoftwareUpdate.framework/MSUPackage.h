//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, NSURL, PKPackageInfo, PKPackageReference;

@interface MSUPackage : NSObject
{
    BOOL _shouldDownload;
    NSURL *_URL;
    NSNumber *_size;
    NSString *_digest;
    NSURL *_metadataURL;
    NSURL *_integrityDataURL;
    NSString *_integrityDataDigest;
    NSNumber *_integrityDataSize;
    NSString *_identifier;
    NSString *_version;
    PKPackageInfo *_packageInfo;
}

- (void).cxx_destruct;
@property BOOL shouldDownload; // @synthesize shouldDownload=_shouldDownload;
@property(retain) PKPackageInfo *packageInfo; // @synthesize packageInfo=_packageInfo;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSNumber *integrityDataSize; // @synthesize integrityDataSize=_integrityDataSize;
@property(retain) NSString *integrityDataDigest; // @synthesize integrityDataDigest=_integrityDataDigest;
@property(retain) NSURL *integrityDataURL; // @synthesize integrityDataURL=_integrityDataURL;
@property(retain) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain) NSString *digest; // @synthesize digest=_digest;
@property(retain) NSNumber *size; // @synthesize size=_size;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(readonly) PKPackageReference *packageReference;

@end

