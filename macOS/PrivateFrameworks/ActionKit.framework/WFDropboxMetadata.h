//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>
#import <ActionKit/WFRemoteFile-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface WFDropboxMetadata : MTLModel <WFRemoteFile, WFNaming, MTLJSONSerializing>
{
    NSString *_name;
    NSString *_path;
    NSString *_identifier;
    NSString *_revision;
    NSString *_contentHash;
    NSNumber *_fileSize;
    NSDate *_clientModifiedDate;
    NSDate *_serverModifiedDate;
    NSString *_itemKind;
}

+ (id)serverModifiedDateJSONTransformer;
+ (id)clientModifiedDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) NSDate *serverModifiedDate; // @synthesize serverModifiedDate=_serverModifiedDate;
@property(readonly, nonatomic) NSDate *clientModifiedDate; // @synthesize clientModifiedDate=_clientModifiedDate;
@property(readonly, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSString *contentHash; // @synthesize contentHash=_contentHash;
@property(readonly, copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *wfName;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isDirectory;
- (BOOL)wfIsEqualToFile:(id)arg1;
- (id)wfFileType;
- (id)wfLastModifiedDate;
- (id)wfFileSize;
- (id)wfPath;
- (BOOL)wfIsDirectory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) Class superclass;

@end

