//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSString, VOSubstitution;

@interface VOBundle : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(retain, nonatomic) VOSubstitution *iOSSubstitution; // @dynamic iOSSubstitution;
@property(retain, nonatomic) VOSubstitution *macOSSubstitution; // @dynamic macOSSubstitution;

@end

