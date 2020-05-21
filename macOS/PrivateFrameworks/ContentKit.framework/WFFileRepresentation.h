//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFRepresentation.h>

@class NSData, NSDate, NSString, NSURL, WFFileType;

@interface WFFileRepresentation : WFRepresentation
{
    BOOL _deletesFileOnDeallocation;
    BOOL _securityScopedResource;
    NSString *_filename;
    NSData *_data;
    NSURL *_fileURL;
    WFFileType *_wfType;
    NSString *_wfName;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSURL *_originalURL;
}

+ (BOOL)supportsSecureCoding;
+ (id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2 unsanitizedName:(id *)arg3;
+ (id)proposedFilenameForFile:(id)arg1 ofType:(id)arg2;
+ (id)sanitizedFilename:(id)arg1 withExtension:(id)arg2 unsanitizedName:(id *)arg3;
+ (id)sanitizedFilename:(id)arg1 withExtension:(id)arg2;
+ (id)typeOfFile:(id)arg1;
+ (id)typeOfData:(id)arg1;
+ (BOOL)isAllowedToRepresentFileURL:(id)arg1;
+ (BOOL)fileIsInDisallowedDirectory:(id)arg1;
+ (BOOL)sandboxAllowsRepresentingFileURL:(id)arg1;
+ (void)addDisallowedDirectory:(id)arg1;
+ (id)disallowedDirectoryURLs;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3;
+ (id)fileWithURL:(id)arg1 options:(long long)arg2;
+ (id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4;
+ (id)fileWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL securityScopedResource; // @synthesize securityScopedResource=_securityScopedResource;
@property(readonly, nonatomic) BOOL deletesFileOnDeallocation; // @synthesize deletesFileOnDeallocation=_deletesFileOnDeallocation;
@property(readonly, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) WFFileType *wfType; // @synthesize wfType=_wfType;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (BOOL)isEncodable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithName:(id)arg1 addingExtensionIfNecessary:(BOOL)arg2 zone:(struct _NSZone *)arg3;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
@property(readonly, nonatomic) NSString *wfName; // @synthesize wfName=_wfName;
- (id)description;
- (id)mappedDataWithError:(id *)arg1;
- (id)mappedData;
- (id)inputStream;
@property(readonly, nonatomic) long long fileSize;
@property(readonly, nonatomic) long long representationType;
- (BOOL)writeToFileURL:(id)arg1 overwriting:(BOOL)arg2 error:(id *)arg3;
- (BOOL)writeToFileURL:(id)arg1 copy:(BOOL)arg2 overwrite:(BOOL)arg3 error:(id *)arg4;
- (BOOL)writeToTemporaryFileURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 options:(long long)arg2 ofType:(id)arg3 proposedFilename:(id)arg4 originalURL:(id)arg5;
- (id)initWithData:(id)arg1 ofType:(id)arg2 proposedFilename:(id)arg3 originalURL:(id)arg4;

@end

