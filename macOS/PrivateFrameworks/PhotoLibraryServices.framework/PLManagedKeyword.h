//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSSet, NSString;

@interface PLManagedKeyword : PLManagedObject
{
}

+ (id)keywordForUuid:(id)arg1 context:(id)arg2;
+ (id)keywordForTitle:(id)arg1 context:(id)arg2;
+ (id)entityName;
- (void)awakeFromInsert;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadID;

// Remaining properties
@property(retain, nonatomic) NSSet *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) NSString *shortcut; // @dynamic shortcut;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

