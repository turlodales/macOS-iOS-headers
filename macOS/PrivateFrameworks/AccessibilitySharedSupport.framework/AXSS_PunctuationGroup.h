//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString, NSUUID;

@interface AXSS_PunctuationGroup : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) NSSet *autoSwitchContexts; // @dynamic autoSwitchContexts;
@property(copy, nonatomic) NSUUID *basePunctuationUUID; // @dynamic basePunctuationUUID;
@property(copy, nonatomic) NSString *ckChangeTag; // @dynamic ckChangeTag;
@property(copy, nonatomic) NSDate *ckRecordProcessDate; // @dynamic ckRecordProcessDate;
@property(nonatomic) BOOL inCloud; // @dynamic inCloud;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSUUID *uuid; // @dynamic uuid;
@property(nonatomic) short version; // @dynamic version;

@end

