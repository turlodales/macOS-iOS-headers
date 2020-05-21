//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface QLURLHandler : NSObject <NSSecureCoding>
{
    const char *_sandboxType;
    BOOL _isAccessingSecurityScope;
    BOOL _needsAccessToExternalResources;
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
    NSString *_physicalFileExtensionToken;
    long long _physicalFileExtensionHandle;
    NSString *_externalResourcesToken;
    long long _externalResourcesHandle;
    NSURL *_fileURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL needsAccessToExternalResources; // @synthesize needsAccessToExternalResources=_needsAccessToExternalResources;
@property(nonatomic) long long externalResourcesHandle; // @synthesize externalResourcesHandle=_externalResourcesHandle;
@property(copy, nonatomic) NSString *externalResourcesToken; // @synthesize externalResourcesToken=_externalResourcesToken;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSString *physicalFileExtensionToken; // @synthesize physicalFileExtensionToken=_physicalFileExtensionToken;
@property(retain, nonatomic) NSString *fileExtensionToken; // @synthesize fileExtensionToken=_fileExtensionToken;
@property(nonatomic) long long physicalFileExtensionHandle; // @synthesize physicalFileExtensionHandle=_physicalFileExtensionHandle;
@property(nonatomic) long long fileExtensionHandle; // @synthesize fileExtensionHandle=_fileExtensionHandle;
- (char *)sandboxExtensionIssueFileWithClass:(const char *)arg1 path:(const char *)arg2 flags:(unsigned int)arg3;
- (long long)sandboxExtensionConsume:(const char *)arg1;
- (void)sandboxExtensionRelease:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_issueFileExtensionForURL:(id)arg1;
- (void)_consumeFileExtension;
- (void)_issueExternalResourcesExtensionForURL:(id)arg1;
- (void)_issueFileExtension;
- (void)dealloc;
- (id)initWithURL:(id)arg1 sandboxType:(const char *)arg2;

@end

