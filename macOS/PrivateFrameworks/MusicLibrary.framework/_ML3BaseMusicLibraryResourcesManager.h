//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ML3MusicLibraryResourcesProviding.h"
#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _ML3BaseMusicLibraryResourcesManager : NSObject <ML3MusicLibraryResourcesProviding, NSSecureCoding>
{
    NSString *_libraryContainerIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *libraryContainerIdentifier; // @synthesize libraryContainerIdentifier=_libraryContainerIdentifier;
- (id)_pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 isFolder:(char *)arg4;
- (id)_controlDirectoryPathWithBasePath:(id)arg1;
- (id)_libraryContainerPathForDSID:(id)arg1;
- (BOOL)_mediaResourceRequiresLibraryContainerAccess:(int)arg1;
- (id)pathForBaseLocationPath:(long long)arg1;
- (id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4;
- (id)pathForResourceFileOrFolder:(int)arg1;
- (id)libraryContainerRelativePath:(id)arg1;
- (id)libraryContainerPathByAppendingPathComponent:(id)arg1;
- (id)libraryContainerPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryContainerIdentifier:(id)arg1;
- (id)initWithAccountInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

