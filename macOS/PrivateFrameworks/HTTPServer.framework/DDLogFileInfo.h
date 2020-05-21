//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface DDLogFileInfo : NSObject
{
    NSString *filePath;
    NSString *fileName;
    NSDictionary *fileAttributes;
    NSDate *creationDate;
    NSDate *modificationDate;
    unsigned long long fileSize;
}

+ (id)logFileWithPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath;
- (long long)reverseCompareByModificationDate:(id)arg1;
- (long long)reverseCompareByCreationDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeExtendedAttributeWithName:(id)arg1;
- (void)addExtendedAttributeWithName:(id)arg1;
- (BOOL)hasExtendedAttributeWithName:(id)arg1;
- (void)renameFile:(id)arg1;
- (void)reset;
@property(nonatomic) BOOL isArchived; // @dynamic isArchived;
- (id)description;
@property(readonly, nonatomic) double age; // @dynamic age;
@property(readonly, nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(readonly, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(readonly, nonatomic) NSString *fileName; // @dynamic fileName;
@property(readonly, nonatomic) NSDictionary *fileAttributes; // @dynamic fileAttributes;
- (id)initWithFilePath:(id)arg1;

@end

