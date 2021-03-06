//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, NSString;

@interface VOSubstitution : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) BOOL appliesToAllApps; // @dynamic appliesToAllApps;
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(retain, nonatomic) NSSet *iOSBundles; // @dynamic iOSBundles;
@property(nonatomic) BOOL ignoreCase; // @dynamic ignoreCase;
@property(nonatomic) BOOL isActive; // @dynamic isActive;
@property(nonatomic) BOOL isUserSubstitution; // @dynamic isUserSubstitution;
@property(retain, nonatomic) NSSet *languages; // @dynamic languages;
@property(retain, nonatomic) NSSet *macOSBundles; // @dynamic macOSBundles;
@property(copy, nonatomic) NSString *originalString; // @dynamic originalString;
@property(copy, nonatomic) NSString *phonemes; // @dynamic phonemes;
@property(nonatomic) long long replacementLength; // @dynamic replacementLength;
@property(nonatomic) long long replacementLocation; // @dynamic replacementLocation;
@property(copy, nonatomic) NSString *replacementString; // @dynamic replacementString;
@property(nonatomic) short version; // @dynamic version;
@property(retain, nonatomic) NSSet *voices; // @dynamic voices;

@end

