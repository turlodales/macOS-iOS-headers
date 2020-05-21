//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMType, AMWorkflowPersonality, NSDictionary, NSImage, NSString;

@interface AMWorkflowMetaData : NSObject
{
    AMWorkflowPersonality *_personality;
    NSString *_documentSaveName;
    NSDictionary *_metaDataFromDisk;
    NSDictionary *_infoPlistFromDisk;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)workflowMetaDataForPersonality:(id)arg1 dictionary:(id)arg2;
- (void).cxx_destruct;
@property __weak AMWorkflowPersonality *personality; // @synthesize personality=_personality;
@property(copy) NSDictionary *metaDataFromDisk; // @synthesize metaDataFromDisk=_metaDataFromDisk;
@property(copy) NSDictionary *infoPlistFromDisk; // @synthesize infoPlistFromDisk=_infoPlistFromDisk;
@property(copy) NSString *documentSaveName; // @synthesize documentSaveName=_documentSaveName;
@property(readonly, nonatomic) AMType *outputType;
@property(readonly, nonatomic) AMType *inputType;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, nonatomic) NSImage *quickLookThumbnailImage;
@property(readonly, nonatomic) NSString *headerInputType;
@property(readonly, nonatomic) NSDictionary *metaData;
@property(readonly, copy, nonatomic) NSString *workflowTypeIdentifier;
- (void)syncMetaDataForWorkflow:(id)arg1 atURL:(id)arg2;
- (void)setFromDictionary:(id)arg1;
- (id)copy;
- (id)initWithPersonality:(id)arg1;

@end

