//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface PLImageDataInfo : NSObject
{
    BOOL _deliveredPlaceholder;
    BOOL _canDownloadFromCloud;
    long long _deliveredFormat;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    NSString *_UTI;
    long long _EXIFOrientation;
}

- (void).cxx_destruct;
@property long long EXIFOrientation; // @synthesize EXIFOrientation=_EXIFOrientation;
@property(retain) NSString *UTI; // @synthesize UTI=_UTI;
@property(retain) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property BOOL canDownloadFromCloud; // @synthesize canDownloadFromCloud=_canDownloadFromCloud;
@property BOOL deliveredPlaceholder; // @synthesize deliveredPlaceholder=_deliveredPlaceholder;
@property long long deliveredFormat; // @synthesize deliveredFormat=_deliveredFormat;
- (id)description;

@end

