//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsPersistence/ABCDRecord.h>

@class NSString;

@interface ABCDDeletedRecordLog : ABCDRecord
{
    id _creationDate;
}

+ (BOOL)_isPublicRecord;
+ (id)_table;
+ (id)abEntityName;
- (void).cxx_destruct;
- (id)creationDate;
- (void)touch:(id)arg1;
- (void)setPrimitiveCreationDateYearless:(id)arg1;
- (void)setPrimitiveCreationDateYear:(id)arg1;
- (void)setPrimitiveCreationDate:(id)arg1;
- (void)setCreationDate:(id)arg1;

// Remaining properties
@property(copy) NSString *deletedRecordUniqueId; // @dynamic deletedRecordUniqueId;

@end

