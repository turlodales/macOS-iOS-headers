//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CKSyncEngineBatch : NSObject
{
    BOOL _atomic;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAtomic) BOOL atomic; // @synthesize atomic=_atomic;
@property(readonly, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(readonly, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)description;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;

@end

